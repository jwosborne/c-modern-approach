/***************************************************
 * Calculator using Reverse Polish Notation (RPN)  *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
void perform_operation(char ch);

int main(void)
{
    char ch = '\a';
    /* popped ch converted to an int */

    do
    {
        if (ch == '=')
        {
            printf("Value of expression: %d\n", pop());
        }
        if (ch == '\a' || ch == '=')
        {
            printf("Enter an RPN expression: ");
        }

        scanf(" %c", &ch);
        perform_operation(ch);
    } while (ch != 'q');

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Expression is too complex");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);
}

/***********************************************
 * perform_operation:                          *
 * if numeric, push on stack                   *
 * else if it operation pop two vals then push *
 ***********************************************/
void perform_operation(char ch)
{
    int term_a;
    int term_b;
    if (ch >= '0' && ch <= '9')
    {
        term_a = ch - '0';
        push(term_a);
    }
    else if (ch == '+')
    {
        term_a = pop();
        term_b = pop();
        push(term_b + term_a);
    }
    else if (ch == '-')
    {
        term_a = pop();
        term_b = pop();
        push(term_b - term_a);
    }
    else if (ch == '*')
    {
        term_a = pop();
        term_b = pop();
        push(term_b * term_a);
    }
    else if (ch == '/')
    {
        term_a = pop();
        term_b = pop();
        push(term_b / term_a);
    }
}
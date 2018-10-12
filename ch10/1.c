/* **********************************************************
 *  Asks user to enter series of parentheses and/or braces. *
 *  Indicates whether or not they're properly nested        *
 ************************************************************/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_underflow(void);
void stack_overflow(void);
void not_nested(void);
void nested(void);

int main(void)
{
    char ch, pop_ch, new_ch;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{')
        {
            push(ch);
        }
        else if (ch == ')' || ch == '}')
        {
            /* Make sure the popped value has matching brace */
            new_ch = pop();
            switch (new_ch)
            {
            case '(':
                if (ch != ')')
                {
                    printf(")");

                    not_nested();
                }
                break;
            case '{':
                if (ch != '}')
                {
                    not_nested();
                }
                break;
            default:
                break;
            }
        }
    }
    if (is_empty())
    {
        nested();
    }
    else
    {
        not_nested();
    }
}

/* Make the stack empty */
void make_empty(void)
{
    top = 0;
}

/* Check if the stack is empty */
bool is_empty(void)
{
    return top == 0;
}

/* Check if the stack is full */
bool is_full(void)
{
    return top == STACK_SIZE;
}

/* Push from the stack */
void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

/* Pop from the stack */
char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

/* State that there is a stack underflow and exit */
void stack_underflow(void)
{
    not_nested();
}

/* State that there is a stack overflow and exit */
void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

/* State that parens/braces are not nested and exit */
void not_nested(void)
{
    printf("Parentheses/braces are not nested properly\n");
    exit(EXIT_SUCCESS);
}

/* State that parens/braces are nested and exit */
void nested(void)
{
    printf("Parentheses/braces are nested properly\n");
    exit(EXIT_SUCCESS);
}
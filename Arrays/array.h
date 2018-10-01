#include <stdbool.h>
#include <assert.h>

typedef struct Vector
{
    int size;
    int capacity;
    int *data;
} Vector;

void test();

// Create new Vector
Vector *vector(int capacity);
// Delete Vector
void vector_destroy(Vector *ptr);
// Resize Vector
void vector_resize(Vector *ptr, int new_cap);
// Return number of items
int vector_size(Vector *ptr);
// Return number of items Vector can hold
int vector_capacity(Vector *ptr);
// Return true if Vector is empty
bool vector_isEmpty(Vector *ptr);
// Return value at index of Vector
int vector_at(Vector *ptr, int index);
// Insert (integer) item at the end of Vector
void vector_push(Vector *ptr, int item);
// Remove item from end of Vector, return value
int vector_pop(Vector *ptr);
// Insert an item into Vector at chosen index
void vector_insert(Vector *ptr, int item, int index);
// Insert an item at the beginning of Vector
void vector_prepend(Vector *ptr, int item);
// Return index of where item is located in Vector
int vector_find(Vector *ptr, int item);
// Delete item from Vector at a specified index
void vector_delete(Vector *ptr, int index);
// Delete all instances of specified item in Vector
void vector_remove(Vector *ptr, int item);

////////////// TESTS //////////////////
void initSizeTest();
void initCapacityTest();
void isEmptyTest();
void resizeTest();
void atTest();
void prependTest();
void insertTest();
void findTest();
void deleteTest();
void removeTest();
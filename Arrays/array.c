// Vector Implementation

Vector *new_vector(int capacity)
{
    // if capacity is less than 0, return error
    // if (capacity < 0)
    // {
    //     exit(EXIT_FAILURE);
    // }
    //if capacity is less than 0, set capacity to 0 if (capacity < 0)
    if (capacity < 0)
    {
        capacity = 0;
    }
    Vector *arr = malloc(sizeof(Vector));
    arr->size = 0;
    arr->capacity = capacity;
    arr->data = (int *)malloc(sizeof(int) * capacity);
    return arr;
}
void vector_destroy(Vector *ptr)
{
    // Free the Memory
    free(ptr->data);
    free(ptr);
}
void vector_resize(Vector *ptr, int new_size)
{
    int old_capacity = ptr->capacity;
    // if increasing in size
    if (ptr->size < new_size)
    {
        if (ptr->size == old_capacity)
        {
            int new_capacity = old_capacity * 2;

            int *new_data = malloc(sizeof(int) * new_capacity);

            for (int i = 0; i < old_capacity; i++)
            {
                *(new_data + i) = *(ptr->data + i);
            }

            free(ptr->data);

            ptr->data = new_data;
            ptr->capacity = new_capacity;
        }
    }
    // if decreasing in size
    else if (ptr->size > new_size)
    {
        if (ptr->size <= old_capacity / 4)
        {
            int new_capacity = old_capacity / 2;

            int *new_data = malloc(sizeof(int) * new_capacity);

            for (int i = 0; i < ptr->size; i++)
            {
                *(new_data + i) = *(ptr->data + 1);
            }

            free(ptr->data);

            ptr->data = new_data;
            ptr->capacity = new_capacity;
        }
    }
    // if neither of the conditions are met, will do nothing
}
int vector_size(Vector *ptr)
{
    return ptr->size;
}
int vector_capacity(Vector *ptr)
{
    return ptr->capacity;
}
bool vector_isEmpty(Vector *ptr)
{
    return !ptr->size;
}
int vector_at(Vector *ptr, int index)
{
    return *(ptr->data + index);
}
void vector_push(Vector *ptr, int item)
{
    // ensure proper size of vector
    vector_resize(ptr, ptr->size + 1);

    *(ptr->data + ptr->size) = item;
    (ptr->size)++;
}
int vector_pop(Vector *ptr)
{
    // TODO: check if empty
    // // ensure proper size of vector
    vector_resize(ptr, ptr->size - 1);

    int popVal = *(ptr->data + ptr->size - 1);

    (ptr->size)--;
    return popVal;
}
void vector_insert(Vector *ptr, int item, int index)
{

    // Check that index is valid.
    if (index < 0 || index > ptr->size)
    {
        exit(EXIT_FAILURE);
    }

    vector_resize(ptr, ptr->size + 1);
    int lastIndex = ptr->size - 1;

    for (int i = lastIndex + 1; i > index; i--)
    {
        *(ptr->data + i) = *(ptr->data + i - 1);
    }
    *(ptr->data + index) = item;
    ptr->size += 1;
}
void vector_prepend(Vector *ptr, int item)
{
    vector_insert(ptr, item, 0);
}
int vector_find(Vector *ptr, int item)
{
    for (int i = 0; i < ptr->size; i++)
    {
        if (*(ptr->data + i) == item)
        {
            return i;
        }
    }
    // if not found, return -1
    return -1;
}
void vector_delete(Vector *ptr, int index)
{
    // Check that index is valid.
    if (index < 0 || index > ptr->size)
    {
        exit(EXIT_FAILURE);
    }
    vector_resize(ptr, ptr->size - 1);

    int lastIndex = ptr->size - 1;

    for (int i = index; i < lastIndex; i++)
    {
        *(ptr->data + i) = *(ptr->data + i + 1);
    }
    ptr->size -= 1;
}
void vector_remove(Vector *ptr, int item)
{
    int lastIndex = ptr->size - 1;
    for (int i = 0; i < lastIndex; i++)
    {
        if (vector_at(ptr, i) == item)
        {
            vector_delete(ptr, i);
        }
    }
}
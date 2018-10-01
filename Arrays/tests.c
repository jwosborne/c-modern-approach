void initSizeTest()
{
    int i;
    for (int i = -10; i < 10; i++)
    {
        Vector *ptr = new_vector(i);
        assert(vector_size(ptr) == 0);
        vector_destroy(ptr);
    }
}
void initCapacityTest()
{
    int i;
    for (int i = -3000000; i < 3000000; i++)
    {
        Vector *ptr = new_vector(i);
        if (i > 0)
        {
            assert(vector_capacity(ptr) == i);
        }
        else
        {
            assert(vector_capacity(ptr) == 0);
        }
        vector_destroy(ptr);
    }
}
void isEmptyTest()
{
    for (int i = -200000; i < 3000000; i++)
    {
        Vector *ptr = new_vector(i);
        assert(vector_isEmpty(ptr));
        vector_destroy(ptr);
    }
    Vector *ptr = new_vector(1);
    for (int i = 1; i < 100000; i++)
    {
        vector_push(ptr, 3);
        assert(!vector_isEmpty(ptr));
    }
    vector_destroy(ptr);
}
void resizeTest()
{
    Vector *ptr = new_vector(2);

    assert(vector_capacity(ptr) == 2);
    for (int i = 0; i < 18; i++)
    {
        vector_push(ptr, i + 1);
    }
    assert(vector_capacity(ptr) == 32);

    for (int i = 0; i < 12; i++)
    {
        vector_pop(ptr);
    }
    assert(vector_capacity(ptr) == 16);
    vector_destroy(ptr);
}
void atTest()
{
    Vector *ptr = new_vector(12);
    for (int i = 0; i < 12; i++)
    {
        vector_push(ptr, i + 3);
    }
    assert(vector_at(ptr, 1) == 4);
    assert(vector_at(ptr, 6) == 9);
    vector_destroy(ptr);
}
void insertTest()
{
    Vector *ptr = new_vector(2);
    vector_insert(ptr, 5, 0);
    vector_insert(ptr, 6, 1);
    vector_destroy(ptr);
}
void prependTest()
{
    Vector *ptr = new_vector(2);
    for (int i = 0; i < 1000; i++)
    {
        vector_prepend(ptr, i);
    }
    for (int i = 0; i < 1000; i++)
    {
        assert(vector_at(ptr, i) == 999 - i);
    }
    vector_destroy(ptr);
}
void findTest()
{
    Vector *ptr = new_vector(2);
    for (int i = 0; i < 1000; i++)
    {
        vector_prepend(ptr, i);
    }
    assert(vector_find(ptr, 0) == 999);
    assert(vector_find(ptr, 999) == 0);
    vector_destroy(ptr);
}
void deleteTest()
{
    Vector *ptr = new_vector(2);
    for (int i = 0; i < 10; i++)
    {
        vector_push(ptr, i);
    }
    vector_delete(ptr, 0);
    for (int i = 0; i < 9; i++)
    {
        assert(vector_at(ptr, i) == i + 1);
    }
    vector_destroy(ptr);
}
void removeTest()
{
    Vector *ptr = new_vector(5);
    vector_push(ptr, 12);
    vector_push(ptr, 3);
    vector_push(ptr, 41);
    vector_push(ptr, 12);
    vector_push(ptr, 12);
    vector_remove(ptr, 12);
    assert(vector_size(ptr) == 2);
    vector_destroy(ptr);
}
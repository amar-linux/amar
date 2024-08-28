void fun(int **ptr)
{
      int *ptr1 = *ptr;
      ptr1 = malloc(sizeof(int));
     *ptr1 = 100;
}
main()
{
     int *i = NULL;
     fun(&i);
     printf("i = %d\n", *i);
}

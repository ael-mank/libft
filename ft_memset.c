#include <stdio.h>

void *ft_memset(void *pointer, int value, int count)
{
    int i;
    char    *ptr = pointer;

    i = 0;
    while (i < count)
    {
        ptr[i] = value;
        i++;
    }
    return (pointer);
}

int main()
{
    char tab[] = "hello";

    char *y = ft_memset(tab, 48, 5);

    for (int i = 0; i < 5; i++)
    {   
        //printf("%d", 1);
        printf("%c", y[i]);
    }
}
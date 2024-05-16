#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return EXIT_FAILURE;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4 * sizeof(int));

    if (tmp == NULL)
    {
        free(list);
        return EXIT_FAILURE;
    }

    list = tmp;

    list[3] = 4;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    return EXIT_SUCCESS;
}

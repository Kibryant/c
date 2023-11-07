#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        char *name = NULL;
        size_t max_name_length = 0;
        char person[] = "John Doe";

        printf("Type a name: ");
        if (getline(&name, &max_name_length, stdin) == -1) {
            perror("getline");
            exit(1);
        }

        printf("Name: %s\n", name);
        printf("Name: %s\n", person);

        free(name);
    }

    return 0;
}

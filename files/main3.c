#include <stdio.h>

int main() {
    FILE* fptr_write;

    fptr_write = fopen("task.txt", "w");

    fputs("Hello, world!", fptr_write);
    fputs("\nHello, Niggas!", fptr_write);

    fclose(fptr_write);

    FILE* fptr_open;

    fptr_open = fopen("task.txt", "r");

    char content[1000];

    if (fptr_open != NULL) {
        while(fgets(content, 1000, fptr_open)) {
            printf("%s\n", content);
        }
        fclose(fptr_open); 
    } else {
        perror("File Open Unsuccessful");
        // fprintf(stderr, "Error code: %d\n", errno);
    }

    return 0;
}

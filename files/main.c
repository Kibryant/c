#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("test1.txt", "r");

    char content[1000];

    if (fptr != NULL) {
        while(fgets(content, 1000, fptr)) {
            printf("%s\n", content);
        }
        fclose(fptr); 
    } else {
        perror("File Open Unsuccessful");
        // fprintf(stderr, "Error code: %d\n", errno);
    }

    return 0;
}

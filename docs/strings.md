# Strings in C

In the C programming language, strings are represented as arrays of characters, often referred to as "char arrays" or "C-style strings." Here's an overview of how strings are represented and manipulated in C:

1. **Declaring Strings**:

    Strings are declared by defining an array of characters (char). For example:

    ```c
    char myString[20]; // Declares a string with space for 19 characters plus the null terminator.
    ```

2. **Initializing Strings**:

    Strings can be initialized at the time of declaration or later using the assignment operator. For example:

    ```c
    char greeting[] = "Hello, World!";
    ```

3. **String Length**:

    To find the length of a string (the number of characters), you can use the `strlen` function from the `<string.h>` library.

    ```c
    #include <string.h>
    // ...
    size_t length = strlen(greeting); // Returns the length of the string.
    ```

4. **String Input and Output**:

    Standard input/output functions can be used to read and write strings. For example:

    ```c
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name); // Reads a string from the user.
    printf("Hello, %s!\n", name); // Displays the string

#include <stdio.h>

int main() {
    // Integer Data Types
    int integerType;            // Typically 32 bits (4 bytes) in 32-bit systems or 64 bits (8 bytes) in 64-bit systems.
    short shortIntegerType;     // Typically 16 bits (2 bytes).
    long longIntegerType;       // Typically 32 bits (4 bytes) in 32-bit systems or 64 bits (8 bytes) in 64-bit systems.
    long long longLongIntegerType; // Typically 64 bits (8 bytes).

    // Floating-Point Data Types
    float floatType;            // Typically 32 bits (4 bytes).
    double doubleType;          // Typically 64 bits (8 bytes).
    long double longDoubleType; // Can vary between systems, often 80 bits or more.

    // Character Data Type
    char charType;              // Typically 8 bits (1 byte).

    // Other Data Types
    _Bool boolType;             // Typically 8 bits (1 byte) for representing boolean values.
    enum enumType { RED, GREEN, BLUE }; // Size depends on the compiler, usually the size of an int.
    void *voidType;             // Represents no value and is often used for generic pointers.

    printf("Sizes of data types in C:\n");
    printf("int: %lu bytes\n", sizeof(integerType));
    printf("short: %lu bytes\n", sizeof(shortIntegerType));
    printf("long: %lu bytes\n", sizeof(longIntegerType));
    printf("long long: %lu bytes\n", sizeof(longLongIntegerType));
    printf("float: %lu bytes\n", sizeof(floatType));
    printf("double: %lu bytes\n", sizeof(doubleType));
    printf("long double: %lu bytes\n", sizeof(longDoubleType));
    printf("char: %lu bytes\n", sizeof(charType));
    printf("_Bool: %lu bytes\n", sizeof(boolType));
    printf("enum: %lu bytes\n", sizeof(enumType));
    printf("void: N/A (no size)\n");

    return 0;
}

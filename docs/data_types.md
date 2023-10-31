# C Data Types and Sizes

In the C programming language, there are various data types used to store different kinds of values. These data types come in various sizes, measured in bits. Here's an overview of common data types and their typical sizes:

## Integer Data Types

- **int**: Typically 32 bits (4 bytes) in 32-bit systems, and 64 bits (8 bytes) in 64-bit systems.
- **short (or short int)**: Typically 16 bits (2 bytes).
- **long (or long int)**: Typically 32 bits (4 bytes) in 32-bit systems, and 64 bits (8 bytes) in 64-bit systems.
- **long long (or long long int)**: Typically 64 bits (8 bytes).

## Floating-Point Data Types

- **float**: Typically 32 bits (4 bytes).
- **double**: Typically 64 bits (8 bytes).
- **long double**: The size can vary between systems but is often 80 bits or more.

## Character Data Type

- **char**: Typically 8 bits (1 byte).

## Other Data Types

- **_Bool**: Typically 8 bits (1 byte) for representing boolean values.
- **enum**: The size depends on the compiler, usually the size of an int.
- **void**: Represents no size and is often used for generic pointers.

These sizes are typical, but keep in mind that they may vary slightly depending on the compiler and system architecture. Understanding the sizes of data types is crucial for writing efficient and portable C code.

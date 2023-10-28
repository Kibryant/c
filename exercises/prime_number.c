// #include <stdio.h>
// #include <math.h>

// // int is_prime(int num) {
// //     if (num <= 1) {
// //         return 0;
// //     }

// //     if (num == 2) {
// //         return 1;
// //     }

// //     for (int i = 3; i <= num; i++) {
// //         if (num % i == 0) {
// //             return 0;
// //         }
// //     }

// //     return 1;
// // }


// #include <stdio.h>

// int main() {
//     int array[9];
//     int size = 0;

//     for (int i = 0; i < 9; i++) {
//         int new_value;
//         printf("Enter a value to add to the array %d: ", i + 1);
//         scanf("%d", &new_value);

//         if (size < 9) {
//             array[size] = new_value;
//             size++;
//             printf("Value added successfully!\n");
//         } else {
//             printf("The array is full. You cannot add more elements.\n");
//             break;
//         }
//     }

//     for (int k = 0; k < size; k++) {
//         int count = 0;
//         if (array[k] > 1) {
//             for (int j = 2; j < array[k]; j++) {
//                 if (array[k] % j == 0) {
//                     count++;
//                     break;
//                 }
//             }
//             if (count == 0) {
//                 printf("The number: %d is prime, current position: %d\n", array[k], k + 1);
//             } else {
//                 printf("The number: %d is not prime, current position: %d\n", array[k], k + 1);
//             }
//         } else {
//             printf("The number: %d is not prime (less than or equal to 1), current position: %d\n", array[k], k + 1);
//         }
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdbool.h>

// bool is_prime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int array[9];
//     int size = 0;

//     for (int i = 0; i < 9; i++) {
//         int new_value;
//         printf("Enter a value to add to the array %d: ", i + 1);
//         scanf("%d", &new_value);

//         if (size < 9) {
//             array[size] = new_value;
//             size++;
//             printf("Value added successfully!\n");
//         } else {
//             printf("The array is full. You cannot add more elements.\n");
//             break;
//         }
//     }

//     for (int k = 0; k < size; k++) {
//         if (is_prime(array[k])) {
//             printf("The number: %d is prime, current position: %d\n", array[k], k + 1);
//         } else {
//             printf("The number: %d is not prime, current position: %d\n", array[k], k + 1);
//         }
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdbool.h>

// bool is_prime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int array[9];
//     int size = 0;

//     for (int i = 0; i < 9; i++) {
//         int new_value;
//         printf("Enter a value to add to the array %d: ", i + 1);
//         scanf("%d", &new_value);

//         if (size < 9) {
//             array[size] = new_value;
//             size++;
//             printf("Value added successfully!\n");
//         } else {
//             printf("The array is full. You cannot add more elements.\n");
//             break;
//         }
//     }

//     for (int k = 0; k < size; k++) {
//         if (is_prime(array[k])) {
//             printf("The number: %d is prime, current position: %d\n", array[k], k + 1);
//         } else {
//             printf("The number: %d is not prime, current position: %d\n", array[k], k + 1);
//         }
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdbool.h>

// bool is_prime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int array[9];
//     int size = 0;

//     for (int i = 0; i < 9; i++) {
//         int new_value;
//         printf("Enter a value to add to the array %d: ", i + 1);
//         scanf("%d", &new_value);

//         if (size < 9) {
//             array[size] = new_value;
//             size++;
//             printf("Value added successfully!\n");
//         } else {
//             printf("The array is full. You cannot add more elements.\n");
//             break;
//         }
//     }

//     for (int k = 0; k < size; k++) {
//         if (is_prime(array[k])) {
//             printf("The number: %d is prime, current position: %d\n", array[k], k + 1);
//         } else {
//             printf("The number: %d is not prime, current position: %d\n", array[k], k + 1);
//         }
//     }

//     return 0;
// }


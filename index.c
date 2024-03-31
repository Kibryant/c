#include <stdio.h>

#define MAX_SIZE 1000
#define UNCALCULATED -1

unsigned long long memo[MAX_SIZE];


void initialize_memo()
{
    for(int i = 0; i < MAX_SIZE; i++)
    {
        memo[i] = UNCALCULATED;
    }
}

unsigned long long fibonacci(int number)
{
    if(memo[number] != UNCALCULATED)
    {
        return memo[number];
    }

    if(number <= 1)
    {
        memo[number] = number;
    }
    
    else
    {
        memo[number] = fibonacci(number - 1) + fibonacci(number - 2);
    }

    return memo[number];
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    initialize_memo();
    printf("Fibonacci of %d is %llu\n", number, fibonacci(number));
    return 0;
}
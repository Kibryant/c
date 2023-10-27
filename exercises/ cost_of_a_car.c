#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

float calculate_profit_distributor(float factory_price, float profit_percentage)
{
    return (factory_price * profit_percentage) / 100;
}

float calculate_taxes(float factory_price, float percentage_of_taxes)
{
    return (factory_price * percentage_of_taxes / 100);
}

float calculate_final_value(float factory_price, float final_taxes, float profit_distributor)
{
    return factory_price + final_taxes + profit_distributor;
}

int main()
{   
    float factory_price, profit_percentage, percentage_of_taxes, profit_distributor, final_value, final_taxes;

    printf("Enter factory price: ");
    scanf("%f", &factory_price);

    printf("Enter the profit percentage: ");
    scanf("%f", &profit_percentage);
    
    printf("Enter the percentage of taxes: ");
    scanf("%f", &percentage_of_taxes);

    profit_distributor = calculate_profit_distributor(factory_price, profit_percentage);
    final_taxes = calculate_taxes(factory_price, percentage_of_taxes);
    final_value = calculate_final_value(factory_price, final_taxes, profit_distributor);

    printf("Distributor profit: $%2.f\n", profit_distributor);
    printf("Taxes: $%2.f\n", final_taxes);
    printf("Final value of the car: $%2.f\n", final_value);

    return 0;
}

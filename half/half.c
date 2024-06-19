// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    // returns half bill
    // after adding tax and tip

    float bill_a_tip = (bill / 100) * (float) tip;
    // printf("Bill after tip: %f\n", bill_a_tip);
    float bill_a_tax = (bill / 100) * (float) tax;
    // printf("Bill after tax: %f\n", bill_a_tax);
    float total = bill_a_tip + bill_a_tax + bill;
    // printf("Total: %f\n", total);
    float half = total / 2.0;
    // printf("Half: %f\n", half);
    return half;
}

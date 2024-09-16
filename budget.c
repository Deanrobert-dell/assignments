#include <stdio.h>

int main(void) {
    float income, rent, utilities, groceries, transportation, savings, spend, expenses;
    float prent, putilities, pgroceries, ptransportation, psavings, pexpenses;

    // Welcome message
    printf("Hello, and welcome to your financial calculator!\n");

    // Input values
    printf("What is your monthly income: $");
    scanf("%f", &income);
    printf("What is your monthly rent: $");
    scanf("%f", &rent);
    printf("What is your monthly utilities cost: $");
    scanf("%f", &utilities);
    printf("What is your monthly groceries cost: $");
    scanf("%f", &groceries);
    printf("What is your monthly transportation cost: $");
    scanf("%f", &transportation);

    // Calculations
    expenses = rent + utilities + groceries + transportation;
    savings = income * 0.20; //  20% savings
    spend = income - expenses - savings;
    prent = (rent / income) * 100;
    putilities = (utilities / income) * 100;
    pgroceries = (groceries / income) * 100;
    ptransportation = (transportation / income) * 100;
    psavings = (savings / income) * 100;
    pexpenses = (expenses / income) * 100;

    // Output results
    printf("Your monthly income is $%.2f\n", income);
    printf("Your monthly expenses are $%.2f\n", expenses);
    printf("Your monthly savings is $%.2f\n", savings);
    printf("Your monthly spending money is $%.2f\n", spend);
    printf("Your rent is %.0f%% of your monthly income\n", prent);
    printf("Your utilities are %.0f%% of your monthly income\n", putilities);
    printf("Your groceries are %.0f%% of your monthly income\n", pgroceries);
    printf("Your transportation is %.0f%% of your monthly income\n", ptransportation);
    printf("Your savings are %.0f%% of your monthly income\n", psavings);
    printf("Your expenses are %.0f%% of your monthly income\n", pexpenses);

    return 0;
}

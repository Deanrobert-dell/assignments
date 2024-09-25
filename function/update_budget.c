#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, spend, expenses;

float input(char type[], float var){
    printf("monthly %s:\n", type);
    scanf("%f", &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income *100;

    printf("your %s is %d%% of your income. \n", type, per);
}



int main(void) {
    printf("Hello, and welcome to your financial calculator!\n");
    income = input("income", income);
    rent = input("rent", rent);
    utilities = input("utilities", utilities);
    groceries = input("groceries", groceries);
    transportation = input("transportation", transportation);
    // Calculations
    expenses = rent + utilities + groceries + transportation;
    savings = income * 0.20; //  20% savings
    spend = income - expenses - savings;
    

    // Output results
    printf("Your monthly income is $%.2f\n", income);
    printf("Your monthly expenses are $%.2f\n", expenses);
    printf("Your monthly savings is $%.2f\n", savings);
    printf("Your monthly spending money is $%.2f\n", spend);
   
    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings);
    percent("expenses", expenses);
    percent("spend", spend);

    return 0;
}

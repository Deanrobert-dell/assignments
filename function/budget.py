def input_value(type):
    var = float(input(f"monthly {type}:\n"))
    return var

def percent(type, amount, income):
    per = (amount / income) * 100
    print(f"your {type} is {per:.0f}% of your income.")

def main():
    print("Hello, and welcome to your financial calculator!")
    income = input_value("income")
    rent = input_value("rent")
    utilities = input_value("utilities")
    groceries = input_value("groceries")
    transportation = input_value("transportation")
    
    # Calculations
    expenses = rent + utilities + groceries + transportation
    savings = income * 0.20  # 20% savings
    spend = income - expenses - savings
    
    # Output results
    print(f"Your monthly income is ${income:.2f}")
    print(f"Your monthly expenses are ${expenses:.2f}")
    print(f"Your monthly savings is ${savings:.2f}")
    print(f"Your monthly spending money is ${spend:.2f}")
    
    percent("rent", rent, income)
    percent("utilities", utilities, income)
    percent("groceries", groceries, income)
    percent("transportation", transportation, income)
    percent("savings", savings, income)
    percent("expenses", expenses, income)
    percent("spend", spend, income)



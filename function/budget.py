#huh 
def input_value(huh):
    # Ask the user for input
    var = float(input(f"Enter your monthly {huh}: "))
    return var

def percent(type, value, income):
    percentage = (value / income) * 100
    print(f"yourer {type} as percent : {percentage:.0f}%")

def main():
    print(" welcome to your finncial calculator")
    
    income = input_value("income")
    groceries = input_value("groceries")
    utilities = input_value("utilities")
    rent = input_value("rent")
    transportation = input_value("transportation")
    
    # Calculations
    expenses = rent + utilities + groceries + transportation
    savings = income * 0.20  # MOOONEEEYYYY
    spend = income - expenses - savings
    
    # Output reslts (i believe)
    print(f"\n\nYour monthly income is: ${income:.2f}")
    print(f"Your monthly expenses are: ${expenses:.2f}")
    print(f"Your monthly savings are: ${savings:.2f}")
    print(f"Your monthly spending money is: ${spend:.2f}")
    
    # Display percentages (i hope)
    percent("spend", spend, income)
    percent("transportation", transportation, income)
    percent("groceries", groceries, income)
    percent("utilities", utilities, income)
    percent("savings", savings, income)
    percent("expenses", expenses, income)
    percent("rent", rent, income)

# return (i think)
main()

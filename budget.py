def main():
    income = float(input("Hello, and welcome to your financial calculator!\nWhat is your monthly income: $"))
    rent = float(input("What is your monthly rent: $"))
    utilities = float(input("What is your monthly utilities cost: $"))
    groceries = float(input("What is your monthly groceries cost: $"))
    transportation = float(input("What is your monthly transportation cost: $"))

    
    expenses = rent + utilities + groceries + transportation
    savings = income * 0.20  # 20% savings
    spend = income - expenses - savings
    prent = (rent / income) * 100
    putilities = (utilities / income) * 100
    pgroceries = (groceries / income) * 100
    ptransportation = (transportation / income) * 100
    psavings = (savings / income) * 100
    pexpenses = (expenses / income) * 100

    
    print(f"Your monthly income is ${income:.2f}")
    print(f"Your monthly expenses are ${expenses:.2f}")
    print(f"Your monthly savings is ${savings:.2f}")
    print(f"Your monthly spending money is ${spend:.2f}")
    print(f"Your rent is {prent:.0f}% of your monthly income")
    print(f"Your utilities are {putilities:.0f}% of your monthly income")
    print(f"Your groceries are {pgroceries:.0f}% of your monthly income")
    print(f"Your transportation is {ptransportation:.0f}% of your monthly income")
    print(f"Your savings are {psavings:.0f}% of your monthly income")
    print(f"Your expenses are {pexpenses:.0f}% of your monthly income")

if __name__ == "__main__":
    main()


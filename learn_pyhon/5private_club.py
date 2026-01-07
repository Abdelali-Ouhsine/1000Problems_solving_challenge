age = float(input("enter your age here to be a member"))
full_name = input("enter your full name")

if age < 18:
    print("access denied")
    if age >= 18 and age <= 25:
        print("free entry")
        if age > 25:
            print("access permitted only if a member or accompanied")
    
full_name = input("enter your name")
work_hours = float(input("enter the number of hours your'e worked"))
salary = float(input("enter your salary par hours here"))

if work_hours > 40:
    heure_suplem = work_hours - 40
    res = 40 * salary + (heure_suplem * 1.5 * work_hours)
    print(f"thats your salary{res}")
else:
    res1 = salary * work_hours
    print(f"your salary is{res1}")


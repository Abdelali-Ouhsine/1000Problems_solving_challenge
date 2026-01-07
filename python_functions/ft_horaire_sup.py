def  horaire_sup(full_name,work_hours,salary):
    print(f"hello dear{full_name}")
    print(f"your worked{work_hours}")
    if work_hours > 40:
        heure_suplem = work_hours - 40
        res = 40 * salary + (heure_suplem * 1.5 * work_hours)
        print(f"thats your salary{res}")
    else:
        res1 = salary * work_hours
        print(f"your salary is{res1}")
horaire_sup("Abdelali",20,30)

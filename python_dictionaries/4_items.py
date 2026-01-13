numbers = {"Amine": 1, "Yassine": 2, "Reda": 3}

pairs = numbers.items()

sorted_pairs = sorted(pairs, key=lambda x: x[1])
sorted_dict = dict(sorted_pairs)

print(sorted_dict)
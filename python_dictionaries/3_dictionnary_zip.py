def zipp():
    numbers = {"Amine": 1, "Yassine": 2, "Reda": 3}
    names = ["Amine", "Yassine", "Reda"]

    zipper = zip(numbers.items(), names)

    convert = {}
    for (key, value), name in zipper:
        convert[name] = value

    return convert

result = zipp()
print(result)

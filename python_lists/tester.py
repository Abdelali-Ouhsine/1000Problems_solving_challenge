stock = ["Stylo", 25, "Classeur", 100, "Crayon", 12, "Surligneur", 40, "Feutre", 5]


characters_detect = []
numbers_detect = [] 
for i in stock:
    if isinstance(i,str):
        characters_detect.append(i)

    elif isinstance(i,int):
        numbers_detect.append(i)

characters_detect.sort()
numbers_detect.sort()

print("thats the characters of that list",characters_detect)
print("thats the numbers of that list",numbers_detect)




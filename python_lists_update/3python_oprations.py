phrase1="Le langage Python est très populaire"
phrase2= "Python est un langage puissant"
list1=phrase1.split()
list2=phrase2.split()
commun=[]
for ch in list1:
    for c in list2:
        if ch==c:
            commun.append(ch)
print(commun)

First_dict = { "Device": "Laptop", "Brand": "IBM", "Motherboard": "MSI Z490", "Graphics Card": 
              "GeForce RTX 3070", "RAM": "16G", "Processor": "Intel Core i7-G11", "SSD": "1 TB" }

First_dict["RAM"] = "32"
print(First_dict)

keys = First_dict.keys() #display just keys
print(keys)

values = First_dict.values()
print(values)

list_values = First_dict.items()
print(list_values)

swap_values = First_dict["Graphics Card"], First_dict["Processor"] = First_dict["Processor"] , First_dict["Graphics Card"]

#add value to dictionnary

First_dict["Operating System"] = "Windows10"
print(First_dict)

notes_students = { "Amine": 15.5, "Yassine": 19.0, "Reda": 14.2, "Malak": 8.7, "Manal": 20.0, "Ahmed": 7.5, "Saad": 11.3, "Hannae": 9.8 }

AdmittedStudents = []
StudentsNotAdmitted = []

for cle in notes_students:
    if notes_students(cle) >= 10 :
        AdmittedStudents.append(cle)
    else:
        StudentsNotAdmitted.append(cle)

print(f"thats the students who valid{AdmittedStudents}")
print(f"thats the students d'oesnt valid{StudentsNotAdmitted}")
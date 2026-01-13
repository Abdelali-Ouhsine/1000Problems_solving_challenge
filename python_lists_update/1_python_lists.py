 
notes = [12, 4, 14, 11, 18, 13, 7, 10, 5, 9, 15, 8, 14, 16]
average = sum(notes) / len(notes)
valid_notes = []
non_valid = []
count = 0
while count < len(notes):
   if notes[count] >= average:
        valid_notes.append(notes[count])
        count += 1
   else:
        non_valid.append(notes[count])
        count = count + 1
print(f"the avreage is {average}")
print(f"thats the non valid notes{non_valid}")
print(f"thats the valis notes{valid_notes}")

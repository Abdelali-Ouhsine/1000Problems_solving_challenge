notes_students = { "Amine": 15.5,  "Yassine": 19.0, "Reda": 14.2}
games_size = {"FC26": 26, "RDR2": 256, "Efootball" : 54}
games_price = {"F26" : 69, "RD2" : 60, "Efotball" : 00}

merge = {}
#finaldictionary = (notes_students | games_size, games_price) the fist method
#finaldictionary = notes_students.copy(game_size,game_price)
merge.update(notes_students)
merge.update(games_size)
merge.update(games_price)

print(merge)
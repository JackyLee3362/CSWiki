items = [
    ("Jack", 10),
    ("Tom", 24),
    ("Micky", 18)
]

ages = [item[1] for item in items if item[1]>=18]
print(ages)

adults = filter(lambda item : item[1]>=18, items)
print(list(adults))
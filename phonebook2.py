people = [
    {"name": "David", "number": "+1-617-495-1000"},
    {"name": "Carter", "number": "+1-617-495-1000"},
    {"name": "John", "number": "+1-949-468-2750"},
]

name = input("Name: ")

for person in people:
    if people["name"] == name:
        number = person["number"]
        print(f"Found {number}")
        break
else:
    print("Not Found.")

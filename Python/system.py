import sys
print(dir(sys))
print(dir(sys.__doc__))

name = input("Name: ")
if name.islower():
    print(f"Hello, {name.upper()}")
else:
    print("The name must be lowercase")

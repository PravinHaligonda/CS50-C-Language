def get_int(prompt):
    return int(input(prompt))

def main():
    x = get_int("X: ")
    y = get_int("Y: ")

    print(f"X + Y: ", x + y)


main()

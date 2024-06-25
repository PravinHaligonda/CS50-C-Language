def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except:
            pass

def main():
    x = get_int("X: ")
    y = get_int("Y: ")

    print(f"X + Y: ", x + y)


main()

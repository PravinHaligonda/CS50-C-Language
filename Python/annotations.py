def f(ham: str, egg: str = "Egg") -> str:
    print(f"Annotations: {f.__annotations__}")
    print("Arguments: ", ham, egg)
    return ham + ' ' + egg


print(f("Spam"))

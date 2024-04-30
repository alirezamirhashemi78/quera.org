inp = int(input())

def print_spaces(space_count):
    for i in range(space_count):
        print(" ", end="")

def print_stars(star_count):
    for i in range(star_count):
        print("*", end="")


def start():
    for i in range(1, inp+1, 2):
        space_count = inp//2 - i//2
        print_spaces(space_count)
        print_stars(i)
        print_spaces(space_count)
        print()

    for i in range(inp-2, 0, -2):
        space_count = inp//2 - i//2
        print_spaces(space_count)
        print_stars(i)
        print_spaces(space_count)
        print()


start()
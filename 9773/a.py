inp = 5

star_positions = []

for i in range(1, inp+1, 2):
    print(i)
    star_positions.append(int(i / 1.5))
    for j in range(inp):
        print("-", end=" ")
    print()

print(star_positions)
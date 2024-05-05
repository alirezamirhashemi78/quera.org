# str = "Compile with favtutor"
# result = str.replace(str[2], "F")
# print(result)

inp = input()

print(input)
for i in range(1, len(inp)):
    for j in range(i):
        inp = inp.replace(inp[j], inp[i])
    print(inp)
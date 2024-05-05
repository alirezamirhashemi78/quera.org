number = None

list_numbers = []
while number != 0:
    number = int(input())
    list_numbers.append(number)

# print(str_numbers)

for i in range(len(list_numbers)-2, -1, -1):
    print(list_numbers[i])
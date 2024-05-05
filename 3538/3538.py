week_days = ["shanbe", "1shanbe", "2shanbe", "3shanbe", "4shanbe", "5shanbe", "jome"]

users_input_days = []
for i in range(3):
    day_count = int(input())
    days = input().split()

    for day in days:
        users_input_days.append(day)
    

result = list(set(week_days) - set(users_input_days))
print(len(result))

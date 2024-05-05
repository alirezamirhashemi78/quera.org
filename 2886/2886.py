h, m = input().split()
h, m = int(h), int(m)

if h != 0 and m != 0:
    print(f"{12 - h:>02}:{60 - m:>02}") 
elif h != 0 and m == 0:
    print(f"{12 - h:>02}:00") 
elif h == 0 and m != 0:
    print(f"00:{60 - m:>02}")
if h == 0 and m == 0:
    print(f"00:00") 

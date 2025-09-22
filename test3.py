from collections import Counter

def s():
    S = input()
    c = Counter(S)
    
    o_c = 0
    for count in c.values():
        if count % 2 != 0:
            o_c += 1
    if o_c <= 1:
        print(0)
    else:
        print(o_c - 1)

s()
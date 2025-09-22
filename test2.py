def s():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    r = [0] * n

    for i in range(n):
        target_pos = b[i] - 1
        r[target_pos] = a[i]
    print(*r)

s()
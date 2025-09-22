# class N:
#     def __init__(self, v):
#         self.v = v
#         self.l = None
#         self.r = None

# def i(r, v):
#     if r is None:
#         return N(v)
#     if v <= r.v:
#         r.l = i(r.l, v)
#     else:
#         r.r = i(r.r, v)
#     return r

# def h(r):
#     if r is None:
#         return 0
#     lh = h(r.l)
#     rh = h(r.r)
#     return 1 + max(lh, rh)

# def s():
#     n = int(input())
#     a = list(map(int, input().split()))

#     t = None
#     for x in a:
#         t = i(t, x)

#     print(h(t))

# s()



# class N:
#     def __init__(s,v):
#         s.v=v;s.l=None;s.r=None
# def ins(r,v):
#     if not r: return N(v)
#     if v<r.v: r.l=ins(r.l,v)
#     else: r.r=ins(r.r,v)
#     return r
# def h(r):
#     return 0 if not r else 1+max(h(r.l),h(r.r))
# n=int(input())
# a=list(map(int,input().split()))
# t=None
# for x in a: t=ins(t,x)  
# print(h(t))


class N:
    def __init__(self, v):
        self.v = v
        self.l = None
        self.r = None

def i(r, v):
    if r is None:
        return N(v)
    if v <= r.v:
        r.l = i(r.l, v)
    else:
        r.r = i(r.r, v)
    return r

def h(r):
    if r is None:
        return 0
    return 1 + max(h(r.l), h(r.r))

n = int(input())
a = list(map(int, input().split()))
r = None
for x in a:
    r = i(r, x)
print(h(r))
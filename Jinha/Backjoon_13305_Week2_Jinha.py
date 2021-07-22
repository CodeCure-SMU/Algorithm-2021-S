import sys; In = sys.stdin.readline

city = int(In())
km = list(map(int, In().split()))
liter = list(map(int, In().split()))

del liter[-1]

value, temp = 0, 1000000000
for i, dt in zip(liter, km):
    if temp > i:
        temp = i
    value += temp * dt 

print(value)
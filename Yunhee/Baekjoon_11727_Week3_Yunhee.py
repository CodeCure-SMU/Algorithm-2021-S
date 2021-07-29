n=int(input())
fib=[]
for i in range(n+1):
    if i<2:
        fib.append(i)
    elif i==2:
        fib.append(3)
    else:
        fib.append(fib[i-1]+2*fib[i-2])
print(fib[n]%10007)

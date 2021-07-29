n=int(input())
fib=[]
for i in range(n+1):
    if i<2:
        fib.append(i)
    else:
        fib.append(fib[i-1]+fib[i-2])
print(fib[n]%1000000007)

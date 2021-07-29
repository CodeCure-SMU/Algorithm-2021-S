n=int(input())
fib=[]
fi=[]
for i in range(n+1):
    if i<=3:
        fib.append(i)
    else:
        fib.append((fib[i-1]+fib[i-2])%10007)

print(fib[n])

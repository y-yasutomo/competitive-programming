n,x = map(int,input().split())
x*= 100
cum = 0
ans = -1
for i in range(n) :
    v,p = map(int,input().split())
    cum+=(p*v)
    if cum > x :
        ans = i+1
        print(ans)
        exit()
print(ans)


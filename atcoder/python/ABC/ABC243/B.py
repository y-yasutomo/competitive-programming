n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

ans1 = 0
for i in range(n) :
    if a[i]==b[i] :
        ans1+=1
ans2 =  len(set(a) & set(b))
print(ans1)
print(ans2-ans1)

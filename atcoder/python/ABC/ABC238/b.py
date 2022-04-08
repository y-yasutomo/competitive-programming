def main() :
    n = int(input())
    a = list(map(int,input().split()))
    vec = [0,360]
    now = 0
    for i in a :
        now += i
        now %= 360
        vec.append(now)
    
    vec.sort()
    ans = 0
    for i in range(1,len(vec)) :
        ans = max(ans,vec[i]-vec[i-1])
    return ans

print(main())

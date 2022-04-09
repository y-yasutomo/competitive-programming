def main() :
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    c = list(map(int,input().split()))
    prev = a[0]
    ans = b[a[0]-1]
    for i in range(1,n) :
        ans+=b[a[i]-1]
        if prev+1 == a[i] :
            ans+=c[prev-1]
        prev = a[i]
    print(ans)
main()

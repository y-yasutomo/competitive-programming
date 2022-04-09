def main() :
    n = int(input())
    a = list(map(int,input().split()))
    idx = ans = 1
    lim = 10**18
    if 0 in a :
        ans = 0
    else :
        for i in a :
            if ans*i > lim :
                idx = 0
            else :
                ans*= i
    print(ans if idx == 1 else -1)
main()

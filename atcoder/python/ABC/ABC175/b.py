def main() :
    n = int(input())
    l = list(map(int,input().split()))
    ans = 0
    for i in range(len(l)) :
        for j in range(i+1,len(l)) :
            if l[i]==l[j] : continue
            for k in range(j+1,len(l)) :
                if (l[i]==l[k]) or (l[k]==l[j]) : continue
                if l[i]+l[j]+l[k] > max(max(l[i]*2,l[j]*2),l[k]*2) :
                    ans+= 1
    print(ans)
main()

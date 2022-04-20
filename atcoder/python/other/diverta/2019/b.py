def main() :
    r,g,b,n = map(int,input().split())
    ans = 0
    for i in range(0,3001) :
        for j in range(0,3001) :
            if (n-r*i-j*g)>=0 and (n-r*i-j*g)%b == 0 :
                #print(i,j,(n-r*i-j*g)//b)
                ans+=1
    print(ans)

main()


from time import process_time_ns


def main() :
    n,d = list(map(int,input().split()))
    a = [[0]*d for i in range(n)] 
    for i in range(n) :
        a[i] = list(map(int,input().split()))
    ans = 0    
    for i in range(n) :
        for j in range(i+1,n) :
            temp = 0
            for k in range(d) :
                temp+=(a[i][k]-a[j][k])**2
            if pow(temp,0.5)%1 == 0 :
                ans+=1 
    print(ans)
main()

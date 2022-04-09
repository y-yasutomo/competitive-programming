def main() :
    a = [[0]*3 for i in range(3)]
    idx = a.copy()
    for i in range(3) :
        a[i] = list(map(int,input().split()))
    n = int(input())
    for i in range(n) :
        b = int(input())
        for j in range(3) :
            if b in a[j] :
                idx[j][a[j].index(b)] = 1

    ans = 'No'   
    for i in range(3) :
        if sum(idx[i])==3 :
            ans = 'Yes'

    for i in range(3) :
        if (idx[0][i]+idx[1][i]+idx[2][i])==3 :
            ans = 'Yes'
        
        if (idx[0][0]+idx[1][1]+idx[2][2])==3 :
            ans = 'Yes'

    if (idx[0][2]+idx[1][1]+idx[2][0])==3 :
            ans = 'Yes'
    
    print(ans)

main()

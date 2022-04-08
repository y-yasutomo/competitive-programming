def main() :
    n = int(input())
    t = list(input())
    sx = 0
    sy = 0
    dx = [1,0,-1,0]
    dy = [0,-1,0,1]
    idx = 0
    #for i in range(len(t)) :
    for i in t :
        if i == 'S' :
            sx = sx + dx[idx]
            sy = sy + dy[idx] 
        else :
            idx+=1
            if idx > 3 : 
                idx = 0
        #print(i,sx,sy)   
    print(sx,sy)
    return 

main()

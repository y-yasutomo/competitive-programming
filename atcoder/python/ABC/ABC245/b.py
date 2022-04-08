def main() :
    n = int(input())
    a = list(map(int,input().split()))
    s = set(a)  
    for i in range(2001) :
        if i in s :
            continue
        else :
            print(i)
            break
    return

main()
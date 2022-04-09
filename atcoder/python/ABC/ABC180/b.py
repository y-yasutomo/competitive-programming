def main() :
    n = int(input())
    x = list(map(int,input().split()))
    m = y = c = 0 
    for i in x :
        m += abs(i)
        y += abs(i)*abs(i)
        c = max(c,abs(i))
    print(m,pow(y,0.5),c,sep="\n")
main()

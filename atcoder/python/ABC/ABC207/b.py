def main() :
    a,b,c,d = map(int,input().split())
    if c*d - b > 0 :
        print(int((a+(c*d-b)-1)/(c*d-b)))
    else :
        print(-1)
    return 
main()

def main() :
    a,b,w = map(int,input().split())
    w *= 1000
    if (w//a)*a <= w and (w//a)*b >= w :
        print((w//b) if (w%b)==0 else (w//b)+1 ,w//a)
    else  :
        print('UNSATISFIABLE')
main()

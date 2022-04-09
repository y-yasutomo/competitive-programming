def main() :
    n = int(input())
    ans = 1
    w = input()
    s = set()
    s.add(w)
    prev = len(s)
    last = w[len(w)-1]
    for i in range(2,n+1) :
        w = input()
        s.add(w)
        if len(s)==prev or last != w[0] :
            ans = 0
        prev = len(s)
        last = w[len(w)-1]
    print('Yes' if ans else 'No')

main()

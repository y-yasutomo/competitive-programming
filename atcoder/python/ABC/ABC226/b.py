def main() :
    n = int(input())
    s = []
    for i in range(n) :
        s.append(input().strip())
    s = set(s)
    return len(s)

print(main())

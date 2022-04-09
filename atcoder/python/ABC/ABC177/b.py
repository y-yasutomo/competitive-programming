def main() :
    s = input()
    t = input()
    ans = 1001
    for i in range(len(s)) :
        if len(s)+1 > (i+len(t)) :
            temp = s[i:(i+len(t))]
            ta = 0
            for j in range(len(t)) :
                if temp[j] != t[j] :
                    ta+=1
            ans = min(ta,ans)
        else : break
    print(ans)

main()

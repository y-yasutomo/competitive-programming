def main() :
    s = input()
    l = len(s) - 7 
    ans = 'NO'
    for i in range(0,len(s)) :
        #print(s[0:i]+s[i+l:])
        if s[0:i]+s[i+l:] == 'keyence' :
            ans = 'YES'
            break 
    print(ans)

main()


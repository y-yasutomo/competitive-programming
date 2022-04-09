def main() :
    sx,sy,gx,gy = map(int,input().split())
    ans = (sy*gx + gy*sx) /(sy + gy)
    print(ans)
main()

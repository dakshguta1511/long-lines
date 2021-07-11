l,r,a = map(int, input().split())

if abs(l-r)>=a:
    if l>r:
        r+=a 
    else:
        l+=a 
    print(2*min(l,r))

elif l-r == 0:
    print(l+r+2*(a//2))

else:
    diff = abs(l-r)
    if l>r:
        r+=diff 
    else:
        l+=diff 

    a-=diff 
    print(l+r+2*(a//2))       # 19 19 a=19 -> #28 28 a->1



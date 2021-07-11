n,k=map(int, input().split())

#to write n lines of code
#search v i.e. ===

def sum_lines(x,k):
    #v=x 
    ans=0 
    i=0
    while True:
        if k**i > x:
            break 
        else:
            ans+=int(x/k**i)
            i+=1 

    return int(ans )

def find_lines(n,k):
    hi=10e10 
    lo=0 
    cand=hi  

    while lo<=hi:
        mid = lo+ (hi-lo)//2 

        if sum_lines(mid,k)>=n:
            cand=mid 
            hi=mid-1 
        else:
            lo=mid+1 

    return int(cand  )

print(find_lines(n,k))

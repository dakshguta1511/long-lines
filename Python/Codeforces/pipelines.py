n,k=map(int, input().split())

#we have k,k-1....2 splitters
#binary search on number of splitters used 

lo=0 
hi=k-1 


#if we use k,k-1,....mid splitters, can it produce n outputs? 



while lo<=hi:
    mid=(lo+hi)//2 
    outputs= 1+ (mid+k-1)*(k-mid)/2 

    if outputs>n:
        hi=mid-1 

    elif outputs==n:
        break 
    else:
        lo=mid+1 

print(mid)



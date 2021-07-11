n,k=map(int, input().split())

arr=list(input().split())

not_more_k = 0 

for i in arr:
    lucky_dig=0 

    for j in i:
        if j=="4" or j=="7":
            lucky_dig+=1 

    if lucky_dig<=k:
        not_more_k+=1 

print(not_more_k)
        
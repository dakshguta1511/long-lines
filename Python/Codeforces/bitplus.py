n=int(input())
ans=0 

for i in range(n):
    op=input()
    if op=="++X" or op=="X++" :
        ans+=1 
    else:
        ans-=1 
print(ans)
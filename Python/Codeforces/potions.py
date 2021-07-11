def possible(arr):
    curr_sum=0 
    for i in range(len(arr)):
        curr_sum+=arr[i]
        if curr_sum<0:
            return False 
    return True


n=int(input())

pot=list(map(int, input().split()))

for pot_left in range(0,n+1):
    clone_pot=pot[:]
    for removal in range(pot_left):
        todo=min(clone_pot)
        for todo in 
    
    if possible(clone_pot):
        break 

print(n-pot_left)
def possible(arr):
    curr_sum=0 
    for i in range(len(arr)):
        curr_sum+=arr[i]
        if curr_sum<0:
            return False 
        

    return True

print(possible([4, -4, 1, -3, 1 ,-3 ]))
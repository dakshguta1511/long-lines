def bubble(arr):
    swaps=0 
    for itr in range(len(arr)):
        for curr_ind in range(len(arr)-1):
            if arr[curr_ind]>arr[curr_ind+1]:
                arr[curr_ind], arr[curr_ind+1] = arr[curr_ind+1], arr[curr_ind]
                swaps+=1

    return swaps

print(bubble([4,3,2,1,5]))


from itertools import permutations as p 

def mean_avg(arr):
    for ind in range(1,len(arr)-1):
        if arr[ind] == (arr[ind-1]+arr[ind+1])/2:
            return False 
    return True 

t=int(input())

for i in range(t):

    n=int(input())
    arr=list(map(int, input().split())) 

    for ran_li in p(arr):
        #check eack permutation, if satisfy, print it
        if mean_avg(ran_li):
            print(*ran_li) 
            break  
t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int, input().split()))
    hill_arr=[]

    for itr in range(n):
        hill_arr.append(max(arr))
        hill_arr.append(min(arr))
        arr.remove(max(arr))
        arr.remove(min(arr))

    print(*hill_arr)
row, col = map(int, input().split())

for curr_r in range(1, row+1):
    if curr_r%2!=0:
        print("#"*col)
    elif curr_r%4==0:
        print("#"+"."*(col-1))
    else:
        print("."*(col-1)+"#")
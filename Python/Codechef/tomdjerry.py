t=int(input())
for i in range(t):
    a,b,c,d,k = map(int ,input().split())
    
    dis_to_move = abs(a-c) + abs(b-d)
    yess=0
    
    for i in range(10e5):
        if dis_to_move + int(2*i) == k:
            print("YES")
            yess=1 

    if yess==0:
        print("NO")

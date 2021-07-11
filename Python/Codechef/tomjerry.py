t=int(input())

for i in range(t):
    a,b,c,d,k = map(int, input().split())
    dis_to_move = abs(a-c) + abs(b-d) 

    if k>=dis_to_move and (k-dis_to_move)%2 == 0:
        print("YES")
    else:
        print("NO")
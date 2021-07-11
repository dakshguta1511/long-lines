t=int(input())

for i in range(t):
    x=input() 
    if int(x) < 11:
        print("NO")

    elif len(set(x))==1:
        print("YES")


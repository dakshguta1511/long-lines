power=[] 
for k in range(30,-1,-1):
    power.append(2**k)


t=int(input())
for i in range(t):
    n=int(input())

    if n==2:
        print(1)
    else:

        for j in power:
            if j<n:
                print(j-1)
                break

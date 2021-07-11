t=int(input())
for i in range(t):
    n=int(input())

    if len(set(str(n)))==1:
        print("YES")
    else:        
        ones=[int("1"*dig) for dig in range(2,len(str(n))+1)]
def reverse(n):
    rev=0
    x=list(n) 
    for i in range(len(x)-1, -1, -1):
        rev+=(10**i)*int(x[i]) 

    return str(rev)  

def changeBit(n):
    ans=list(n)
    for l in range(len(ans)):
        if ans[l]=="0":
            ans[l]="1" 
            return "".join(ans)


t=int(input())
for i in range(t):
    l=int(input())
    num=input()

    alice=0
    bob=0 
    move=1 

    while int(num)!=int("1"*l):

        if num == reverse(num):
            num = changeBit(num)
            
            if move%2==0:
                bob+=1 
            else:
                alice+=1 
            move+=1 
        else:
            num=reverse(num)
            move+=1 
            
            if int(num)==int("1"*l):
                break 
            else:
                num = changeBit(num)
                if move%2==0:
                    bob+=1 
                else:
                    alice+=1 
                move+=1 

    if alice>bob:
        print("BOB")
    elif alice<bob:
        print("ALICE")
    else:
        print("DRAW")

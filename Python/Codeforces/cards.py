n=int(input())
cards = list(map(int, input().split()))

val_of_each = 2*sum(cards)/n 

i=0 
while i<n:
    if cards[i]!=0:
        print(i+1, end=" ")

        for j in range(i+1,n):
            if cards[j]!=0:
                if cards[i]+cards[j]==val_of_each:
                    print(j+1)
                    break 
        cards[i]=0 
        cards[j]=0 
    i+=1 

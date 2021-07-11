length=int(input())
n=input()
no_of_zero,no_of_one=0,0 
for i in n:
    if i=="0":
        no_of_zero+=1 
    else:
        no_of_one+=1 
print(length- 2*min(no_of_one,no_of_zero))
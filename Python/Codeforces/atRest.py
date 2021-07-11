n=int(input())

sum_of_x=0 
sum_of_y=0
sum_of_z=0 

for i in range(n):
    x,y,z=map(int, input().split())
    sum_of_x+=x 
    sum_of_y+=y 
    sum_of_z+=z 

if sum_of_z==0 and sum_of_x==0 and sum_of_y==0:
    print("YES")
else:
    print("NO")
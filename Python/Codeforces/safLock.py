n=int(input())

start=list(input())
end=list(input())

moves=0 

for i in range(n):
    
    #if start is bigger than end 

    if int(start[i])>int(end[i]):
        #go anticlockwise 
        moves_a = int(start[i])-int(end[i])
        #go clock, jump on 9 to 0
        moves_c= (9-int(start[i])) + 1 + (int(end[i])) 

        moves+=min(moves_a,moves_c) 

    elif int(start[i])==int(end[i]):
        moves+=0 
    
    else:

        moves_c= int(end[i]) - int(start[i])
        moves_a= int(start[i]) + 1 + (9-int(end[i])) 

        moves+=min(moves_a, moves_c) 


print(moves)

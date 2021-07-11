song=list(input())
#remove starting wub
start=0 
while start<len(song)-2:
    if song[start]+song[start+1]+song[start+2] == "WUB":
        song[start], song[start+1], song[start+2] = "", "", "" 
        start+=3 
    else:
        break 
#remove ending wub
end=len(song)-1 
while end>1:
    if song[end-2]+song[end-1]+song[end] == "WUB":
        song[end-2], song[end-1], song[end] = "", "", ""
        end-=3 
    else:
        break 

finn=0 
while finn<len(song):

    if finn<len(song)-2 and song[finn]+song[finn+1]+song[finn+2] == "WUB":
        print(" ",end="")
        finn+=3 

        while finn<len(song)-2 and song[finn]+song[finn+1]+song[finn+2] == "WUB":
            print("", end="")
            finn+=3 
    else:
        print(song[finn], end="")
        finn+=1
            

            
        
        

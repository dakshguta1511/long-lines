n=int(input())
room=0 
for i in range(n):
    p,q=map(int, input().split())
    if q-p>=2:
        room+=1 
print(room)

t=int(input())
names=[]

for i in range(t):

    m,n=input().split()
    if n[-10]+n[-9]+n[-8]+n[-7]+n[-6]+n[-5]+n[-4]+n[-3]+n[-2]+n[-1] == "@gmail.com":
        names.append(m)

names.sort()
print("\n".join(names))


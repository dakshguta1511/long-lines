n=int(input())  

if n==1:
    print(1)
    print("C")

elif n%2==0:
    print(int(n*n/2))
    for i in range(n//2):
            print("C."*(n//2))
            print(".C"*(n//2))

else:
    print(int(n*(n//2) +n//2 +1))game
    for i in range(n//2):
        print("C."*(n//2), end="")
        print("C")

        print(".C"*(n//2), end="")
        print(".")

    print("C."*(n//2), end="")
    print("C")
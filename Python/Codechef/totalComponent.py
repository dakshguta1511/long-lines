def SieveOfEratosthenes(n):
 
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
 
        if (prime[p] == True):

            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
 
    lp=[] 
    for p in range(2, n+1):
        if prime[p]:
            lp.append(p)

    return lp 

t=int(input())

for t in range(t):
    n=int(input()) 

    list_primes = SieveOfEratosthenes(n) 
    group=1 

    for ind in range(len(list_primes)-1, 0, -1):
        if 2*list_primes[ind] <= n:
            break 
        else:
            group+=1 

    print(group)


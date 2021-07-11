t=int(input())

for i in range(t):
    n,m = map(int, input().split())
    arr=list(input())
    
    while m>0:
        changes_for_itr = 0 
        ind_to_change=[]

        if arr[0]=="0" and arr[1]=="1":
                arr[0]="1"
                changes_for_itr+=1
        if arr[n-1]=="0" and arr[n-2]=="1":
                arr[n-1]="1"
                changes_for_itr+=1

        for i in range(1,n-1):
         
            if arr[i]=="0":
                if (arr[i-1]=="1" and arr[i+1]=="0") or (arr[i-1]=="0" and arr[i+1]=="1"):
                    ind_to_change.append(i)
                    changes_for_itr+=1 

        for ind in ind_to_change:
            arr[ind]="1"
        ind_to_change.clear()

        
        if changes_for_itr==0:
            break 

        m-=1 

    print("".join(arr))






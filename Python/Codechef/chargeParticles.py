def calc_dis(arr):
    dist=0
    for i in range(len(arr)-1):
        if arr[i]==arr[i+1]:
            dist+=2 
        else:
            dist+=1 

    return dist 


t=int(input())
for i in range(t):
    n, k = map(int, input().strip().split())
    arr=list(input().strip())

    if n==1:
        for ch in range(k):
            print(0)

    else:
        
 
        dis_of_curr_arr = calc_dis(arr)

        ind_to_change=list(map(int, input().strip().split()))

        for ind in ind_to_change:

            if arr[ind-1] == "0":
                arr[ind-1] = "1"

                if ind==1:
                    if arr[ind] =="1":
                        dis_of_curr_arr+=1 
                        print(dis_of_curr_arr)
                    else:
                        dis_of_curr_arr-=1 
                        print(dis_of_curr_arr)
                elif ind ==n:
                    if arr[ind-2]=="1":
                        dis_of_curr_arr+=1 
                        print(dis_of_curr_arr)
                    else:
                        dis_of_curr_arr-=1 
                        print(dis_of_curr_arr)

                else:
                    if arr[ind-2]=="0" and arr[ind]=="0":
                        dis_of_curr_arr-=2 
                        print(dis_of_curr_arr)
                    elif arr[ind-2]=="1" and arr[ind]=="1":
                        dis_of_curr_arr+=2 
                        print(dis_of_curr_arr)
                    else:
                        print(dis_of_curr_arr)   

            else:
                arr[ind - 1] = "0"

                if ind==1:
                    if arr[ind] =="1":
                        dis_of_curr_arr-=1 
                    
                        print(dis_of_curr_arr)
                    else:
                        dis_of_curr_arr+=1 
                        print(dis_of_curr_arr)
                elif ind ==n:
                    if arr[ind-2]=="1":
                        dis_of_curr_arr-=1 
                        print(dis_of_curr_arr)
                    else:
                        dis_of_curr_arr+=1 
                        print(dis_of_curr_arr)

                else:
                    if arr[ind-2]=="0" and arr[ind]=="0":
                        dis_of_curr_arr+=2 
                        print(dis_of_curr_arr)
                    elif arr[ind-2]=="1" and arr[ind]=="1":
                        dis_of_curr_arr-=2 
                        print(dis_of_curr_arr)
                    else:
                        print(dis_of_curr_arr)
             
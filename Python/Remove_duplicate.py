def remove_duplicate(arr,n):

    mp={i:0 for i in arr}

    for i in range(n):
        if mp[arr[i]]==0:

            print(arr[i],end=" ")
            mp[arr[i]]=1


arr=[1,2,1,2,3,4,5,5,6,7]
n=len(arr)

remove_duplicate(arr,n)

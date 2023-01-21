class Solution:
    #User function Template for python3
    
    # arr[]: Input Array
    # N : Size of the Array arr[]
    #Function to count inversions in the array.
    def inversionCount(self, nums, n):
        # Your Code Here
        def merge(arr,l,m,r):    
            mic=0
            i=l
            j=m+1
            temp_arr=[]
            while i<=m and j<=r:
                if arr[i]<=arr[j]:
                    temp_arr.append(arr[i])
                    i+=1
                elif arr[i]>arr[j]:
                    temp_arr.append(arr[j])
                    mic+=(m-i+1)
                    j+=1
                    

            while i<=m:
                temp_arr.append(arr[i])
                i+=1
                
            while j<=r:
                temp_arr.append(arr[j])
                j+=1
            p=0
            for m in range(l,r+1):
                arr[m]=temp_arr[p]
                p+=1

            return mic
      
        def mergesort(arr,l,r):
            ans=0
            if l<r:
                m=l+(r-l)//2
                ans+=mergesort(arr,l,m)
                ans+=mergesort(arr,m+1,r)
                ans+=merge(arr,l,m,r)
            return ans
        res=mergesort(nums,0,len(nums)-1)
        return res
        
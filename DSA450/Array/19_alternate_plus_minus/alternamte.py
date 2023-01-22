class Solution:
    def rearrange(self,arr, n):
        # code here
        pos = []
        neg = []
        
        for i in range(n):
            if arr[i] < 0 :
                neg.append(arr[i])
            else : 
                pos.append(arr[i])
                
        i = 0
        j = 0
        k = 0
        while i < len(neg) and j < len(pos) :
            arr[k]=pos[j]
            j+=1
            k+=1
            arr[k]=neg[i]
            i+=1
            k+=1
        
        while j < len(pos) :
            arr[k]=pos[j]
            j+=1
            k+=1
            
        while i < len(neg) :
            arr[k]=neg[i]
            i+=1
            k+=1
class Solution:
    def getPairsCount(self, arr, n, k):
        # code here
        ans=0
        m={}
        for num in arr:
            m[num]=1+m.get(num,0)
            
        for key,v in m.items():
            if k-key in m:
                if key==k-key:
                    ans+=v*(v-1)
                else:
                    ans+=m[key]*m[k-key]
        return ans//2
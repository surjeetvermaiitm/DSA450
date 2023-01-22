class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
        # your code here
        visit=set()
        st2=set(B)
        st3=set(C)
        ans=[]
        for n in A:
            if n in st2 and n in st3 and n not in visit:
                ans.append(n)
            visit.add(n)
        return ans
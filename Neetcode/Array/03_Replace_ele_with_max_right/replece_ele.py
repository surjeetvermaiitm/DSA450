class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        return Counter(s)==Counter(t)
        # if len(s)!=len(t):
        #     return False
        # countS, countT ={},{}
        # for i in range(len(s)):
        #     countS[s[i]]=1+ countS.get(s[i],0)
        #     countT[t[i]]=1+ countT.get(t[i],0)
        # for ch in countS:
        #     if countS[ch]!=countT.get(ch,0):
        #         return False
        # return True
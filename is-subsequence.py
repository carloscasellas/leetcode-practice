class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        # edge cases

        if len(s) > len(t):
            return False
        elif len(s) == len(t): 
            if s == t:
                return True
            else:
                return False

        # two pointer, small for s, large for t

        small = 0
        large = 0

        while small < len(s) and large < len(t):
            if s[small] == t[large]:
                small += 1
            
            large += 1

        if(small == len(s)): # if small broke loop return true
            return True
        return False

class Solution(object):
    def smallestRepunitDivByK(self, K):
        if K%10 not in {1,3,7,9}:
            return -1
        num=1
        length=1
        while True:
            if num%K==0:
                return length
            length=length+1
            num=num*10+1
            
        
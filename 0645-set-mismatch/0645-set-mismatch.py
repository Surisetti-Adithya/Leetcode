class Solution:
    def findErrorNums(self, a: list[int]) -> list[int]:
        n=len(a)
        d=sum(a)
        c=sum(set(a))
        t=n*(n+1)//2
        return [d-c,t-c]
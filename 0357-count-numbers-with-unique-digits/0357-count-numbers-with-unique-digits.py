class Solution:
    def countNumbersWithUniqueDigits(self, n: int) -> int:
        if n==0 :
            return 1
        elif n==1:
            return 10
        elif n==2:
            return 9*9 + self.countNumbersWithUniqueDigits(n-1)
        elif n==3:
            return 9*9*8 + self.countNumbersWithUniqueDigits(n-1)
        elif n==4:
            return 9*9*8*7 + self.countNumbersWithUniqueDigits(n-1)
        elif n==5:
            return 9*9*8*7*6 + self.countNumbersWithUniqueDigits(n-1)
        elif n==6:
            return 9*9*8*7*6*5 + self.countNumbersWithUniqueDigits(n-1)
        elif n==7:
            return 9*9*8*7*6*5*4 + self.countNumbersWithUniqueDigits(n-1)
        elif n==8:
            return 9*9*8*7*6*5*4*3 + self.countNumbersWithUniqueDigits(n-1)
        
        
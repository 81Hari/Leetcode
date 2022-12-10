class Solution:
    def isPalindrome(self, x: int)-> bool:
        if(x>=0):
            rev = 0
            n=0
            num = x
            while(x!=0):
                rev = rev + pow(10,n)*(x%10)
                x=int(x/10)
                n=n+1
            if num == x:
                return True
        print(rev)
        return False



def main():
    x = int(input())
    sol = Solution();
    P = sol.isPalindrome(x)
    print(P)

if __name__ == '__main__':
    main()

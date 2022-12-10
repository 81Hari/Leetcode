class Solution:
    def longestPalindrome(self, s: str) -> str:
        ss = s  # ss --> sub strings
        sub = ""
        rev_sub = "" #sub and rev_sub is to check for palindrome
        p_sub = ""
        for i in s:
            for j in ss:
                sub = sub + j
                rev_sub = sub[::-1] #reversing
                if sub == rev_sub and len(p_sub)<len(sub):
                    p_sub = sub #taking the copy of longest substring
            sub=""
            ss = ss[1:]
        return p_sub


def main():
    s = input() # input string
    sol = Solution()
    long_pal_sub = sol.longestPalindrome(s)
    print(long_pal_sub)

if __name__ == '__main__':
    main()

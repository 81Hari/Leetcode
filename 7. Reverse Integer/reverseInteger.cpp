#include<iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev_x,temp,i;
        temp=x;
        rev_x=i=0;

        while(temp!=0){

            if(INT_MAX<10*(long) rev_x)
        {
            return 0;
        }
            if(INT_MIN>10*(long) rev_x)
            {
                return 0;
            }
            rev_x=10*rev_x + (temp%10);

            temp = temp/10;
            i++;

        }
        return rev_x;

    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    int k = sol.reverse(123);
    cout<<k;
    return 0;
}

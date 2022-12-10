#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m,n;
        m=nums1.size();
        n=nums2.size();
        int i,j,k;
        vector<int> nums3(m+n,0);
        i=j=k=0;
        double median;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j]){
                nums3[k] = nums1[i];
                k++;
                i++;

            }
            else{
                nums3[k] = nums2[j];
                k++;
                j++;
            }
        }
        
        if (i==m){
            while(j<n)
            {
             nums3[k] = nums2[j];
             k++;
             j++;
            }
        }
        else
        {
         while(i<m)
            {
             nums3[k] = nums1[i];
             k++;
             i++;
            }   
        }

        if((m+n)%2 == 0){
           median = nums3[(m+n)/2];

        }
        else{
            median = (nums3[(m+n+1)/2] + nums3[(m+n-1)/2])/2;

        }
        return median;
        }
};

int main()
{
    Solution sol;
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(5);
    nums2.push_back(2);
    nums2.push_back(4);
    nums2.push_back(6);
    double d = sol.findMedianSortedArrays(nums1,nums2);
    cout<<d;
}

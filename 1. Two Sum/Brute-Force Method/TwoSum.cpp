#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	
	    vector<int> output;
    	    for(int i = 0;i<nums.size();i++)
		for(int j = i+1;j<nums.size();j++){
			if(nums[i] +nums[j] == target){
				output.push_back(i);
				output.push_back(j);
				return output;
			}
		}

					

  	cout<<"Sum of No two elements equal to target";
	exit(0);	
    }
};

int main(){
	
	vector<int> nums;	//Array for input
	vector<int> output;	//Array for output
	
	int target;	//to store Target
       	int ch,temp,i;	// temporary variables
	ch=1;
	i=0;

	while(ch == 1){				//Getting inputs from user
		cout<<"Enter the element["<<i++<<"] = ";
		cin>>temp;
		nums.push_back(temp);
		cout<<"If you want to insert more elements,press 1:  ";
		cin>>ch;
		cout<<endl;

	}
	cout<<"Enter Target: ";
	cin>>target;
	Solution sol;
	output = sol.twoSum(nums, target);
	cout<<"[" <<output[0]<<","<<output[1]<<"]"<<endl;
	return 0;
}
	

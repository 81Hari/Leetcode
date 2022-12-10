class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> output;

        for(int i = 0;i<nums.size();i++){
            if(umap.find(target-nums[i]) == umap.end()){
                

            }
            else{

            }
        }
    
};

int main(int argc, char const *argv[])
{
    vector<int> nums;
    vector<int> output;

    int target;
    int ch,i,temp;
    ch=1;
    i=0;

    while(ch == 1){
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

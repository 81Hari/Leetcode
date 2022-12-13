import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {
    public int findPeakElement(int[] nums) {
        int n = nums.length;
        if(n==1){
            return 0;
        }
        for(int i=0;i<n;i++){
            
            if(i==0 && nums[i]>nums[i+1]){
                return i;
            }
            else if(i == n-1 && nums[i]>nums[i-1]){
                return i;
            }
            else if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
                return i;
            }
        }
        return -1;
    
    }
    
    public static void main(String[] args) throws IOException {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	int n = Integer.parseInt(br.readLine());
		
    	int nums[] = new int[n];
		String s[] = br.readLine().split(" ");
		
		for(int i=0;i<s.length;i++) {
			nums[i] = Integer.parseInt(s[i]);
		}
		Solution sol = new Solution();
		System.out.println(sol.findPeakElement(nums));
	}
}
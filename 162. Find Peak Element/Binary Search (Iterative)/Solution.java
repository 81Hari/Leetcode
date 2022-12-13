import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {

public int findPeakElement(int[] nums) {
        
        int n = nums.length;
        
        int beg = 0;
        int end = n-1;
        
        if(n == 1){
            return 0;
        }
        else{
            int mid;
            while(beg<=end){
                mid = (int)((beg+end)/2);
                if(mid == 0){
                    if(nums[mid]>nums[mid+1]){
                        return mid;
                    }
                    else{
                        beg = mid+1;
                    }
                }
                else if(mid == n-1){
                    if(nums[mid]>nums[mid-1]){
                        return mid;
                    }
                    else{
                        end = mid-1;
                    }
                }
                else{
                    if(nums[mid]>nums[mid-1]  && nums[mid]>nums[mid+1]){
                        return mid;
                    }
                    else if(nums[mid]>nums[mid-1]){
                        beg = mid+1;
                    }
                    else{
                        end = mid-1;
                    }
                }

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
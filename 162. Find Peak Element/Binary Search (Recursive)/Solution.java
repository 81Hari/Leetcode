import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {

    public static int binarySearch(int[] nums,int beg,int end){
        if(beg<=end){
            int mid = (int)((beg+end)/2);
            if(mid == 0 && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(mid == nums.length-1 && nums[mid]>nums[mid-1]){
                return mid;
            }
            else if( (mid!=0 && mid!=nums.length-1) && (nums[mid]>nums[mid-1] && nums[mid+1]<nums[mid]) ){
                return mid;
            }
            else{
                if(mid!=0 && nums[mid]<nums[mid-1]){
                    return binarySearch(nums,beg,mid-1);
                }
                else{
                    return binarySearch(nums,mid+1,end);
                }
            }
        }
        else{
            return -1;
        }
    }
    public int findPeakElement(int[] nums) {
        
        if(nums.length == 1){
            return 0;
        }
        return binarySearch(nums,0,nums.length-1); 
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
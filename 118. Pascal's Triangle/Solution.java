import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Solution{
	
public static List<List<Integer>> generate(int numRows) {
		
	List<List<Integer>> A = new ArrayList<List<Integer>>();
	
	for(int i=0;i<numRows;i++) {
		A.add(new ArrayList<Integer>());
	}
	
	int k = 1;
	while(k<=numRows) {
		for(int j=0;j<k;j++) {
			if(j==0 || j == k-1) {
				A.get(k-1).add(1);
			}
			else {
				A.get(k-1).add(A.get(k-2).get(j)+A.get(k-2).get(j-1));
			}
		}
		k++;
	}
	
	return(A);
    }

	public static void main(String[] args)  {
		int n=-1;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			n = Integer.parseInt(br.readLine());
		} catch (Exception e) {
			System.out.println(e);
		}
		
		List<List<Integer>> arr = Solution.generate(n);
		
		System.out.print(arr);
		
		
		
		
		
	}
}
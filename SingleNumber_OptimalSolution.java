public class SingleNumber_OptimalSolution{
	public static void main(String[] args){
		int[] arr = {4, 2,3,5,6,4,2,3,5,6,8};
		System.out.println(singleNumber_OptimalSolution(arr));
	}

	public static int singleNumber_OptimalSolution(int[] nums){
		int xor = 0;
		for(int i = 0;i<nums.length;i++){
			xor^=nums[i];
		}
		return xor;
	}
}

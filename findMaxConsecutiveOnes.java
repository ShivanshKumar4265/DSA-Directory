class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max_counts = 0;
		int count = 0;
		for(int i = 0;i<nums.length;i++){
			if(nums[i] == 1){
				count++;
				if(count>max_counts){
					max_counts = count;
				}
			}else{
				
				count = 0;
			}
		}

		return max_counts;
    }
}

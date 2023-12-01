public class SingleNumber_BruteForce{
	public static void main (String[] args){
		int[] arr = {4, 6, 3, 2, 7, 4, 3, 6, 2, 1, 9, 7, 1, 8, 8, 9, 5, 5, 10, 10};
		System.out.println(singleNumber(arr));
	}

	public static int singleNumber(int[] arr){
		int num = 0;
		int count = 0;
		for(int i = 0;i<arr.length;i++){
			num = arr[i];
			for(int j = 0;j<arr.length;j++){
				if(arr[j] == num){
					count++;
				}

				if(count == 2){
					count = 0;
				}else if(count == 1){
					return num;
				}
			}
		}
		return -1;
	}

}

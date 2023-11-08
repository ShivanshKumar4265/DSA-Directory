import java.util.Scanner;
import java.util.Arrays;
public class LeftRotateByOnePlace{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n;
		System.out.println("Enter the size of array");
		n = in.nextInt();
		int[] arr = new int[n];
		System.out.println("Enter the element of array");

		for(int i = 0; i < n;i++){
			arr[i] = in.nextInt();
		}
		System.out.println(Arrays.toString(leftRotateArray(arr)));

	}

	static int[] leftRotateArray(int[] arr){
		int temp = arr[0];
		for(int i = 1 ;i<arr.length;i++){
			arr[i-1] = arr[i];
		}
		arr[arr.length -1] = temp;
		return arr;
	}
}

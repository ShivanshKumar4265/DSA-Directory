import java.util.Scanner;
import java.util.Arrays;
public class RightRotateByOnePlace{
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
		System.out.println(Arrays.toString(rightRotateArray(arr)));

	}
	static int[] rightRotateArray(int[] arr){
		int temp = arr[arr.length - 1];
		for(int i = arr.length - 1;i > 0 ;i--){
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
		System.out.println("This is right rotate array");
		return arr;
	}
}

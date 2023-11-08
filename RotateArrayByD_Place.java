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
    System.out.println("Enter the places to rotate the array");
		int b = in.nextInt();
		System.out.println(Arrays.toString(rotateArrayByD_Place(arr,b)));

	}

	static int[] leftRotateArray(int[] arr){
		int temp = arr[0];
		for(int i = 1 ;i<arr.length;i++){
			arr[i-1] = arr[i];
		}
		arr[arr.length -1] = temp;
		System.out.println("This is left rotate array");
		return arr;
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

	static int[] rotateArrayByD_Place(int[] arr,int d){

		int[] temp = new int[d];
		for(int i = 0;i<d;i++){
			temp[i] = arr[i];
		}

		for(int i  = d;i<arr.length;i++){

			arr[i - d] = arr[i];
		}
		System.out.println("Shifted Elements" + Arrays.toString(arr));

		for(int i = arr.length - d;i<arr.length;i++){
			arr[i] = temp[i - ( arr.length - d )];
		}

		return arr;

	}
}

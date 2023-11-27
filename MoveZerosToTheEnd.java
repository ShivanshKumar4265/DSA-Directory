import java.util.Scanner;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Set;
import java.util.HashSet;
public class MoveZerosToTheEnd{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n;
		System.out.println("Enter the size of array");
		n = in.nextInt();
		// System.out.println("Enter the places to rotate the array");
		// int b = in.nextInt();
		int[] arr = new int[n];
		System.out.println("Enter the element of array");

		for(int i = 0; i < n;i++){
			arr[i] = in.nextInt();
		}
		// System.out.println(Arrays.toString(leftRotateArray(arr)));
		// System.out.println(Arrays.toString(rightRotateArray(arr)));
		// System.out.println(Arrays.toString(rotateArrayByD_Place(arr,b)));


		// System.out.println("Reversed Array" + Arrays.toString(reverserArray(arr)));
		// System.out.println("Number of Unique Elements = " + (removeDuplicatesInPlaceFromSortedArray(arr)));

		System.out.println(Arrays.toString(moveZerosToTheEnd(arr)));
		

	}



static int[] moveZerosToTheEnd(int[] arr){

		ArrayList<Integer> list = new ArrayList<>();
		for(int i = 0;i<arr.length;i++){
			if(arr[i] > 0){
				list.add(arr[i]);
			}
		}

		for(int i = 0;i<list.size();i++){
			arr[i] = list.get(i);
		}

		for(int i = list.size();i<arr.length;i++){
			arr[i] = 0;
		}

		return arr;
	}

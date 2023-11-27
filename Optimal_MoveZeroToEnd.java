import java.util.Scanner;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Set;
import java.util.HashSet;
public class Optimal_MoveZeroToEnd{
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
		System.out.println(Arrays.toString(optimal_MoveZeroToEnd(arr)));
	
	}


static int[] optimal_MoveZeroToEnd(int[] arr){
		
		int j = -1;
		for(int i = 0;i<arr.length;i++){
			if(arr[i] == 0){
				j = i;
				break;
			}
		}

		if(j  == -1){
			return arr;
		}

		for(int i = j + 1;i < arr.length;i++){
			if(arr[i] != 0){
				//swapping elements
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;

				j++;
			}
		}

		return arr;
	}

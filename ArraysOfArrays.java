import java.util.Scanner;
import java.util.Arrays;

public class ArraysOfArrays {
    public static void main(String[] args) {
        int[][] arr = new int[5][];
        int n;
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the size of array for row " + (i + 1) + ": ");
            n = sc.nextInt();

            // Initialize the row with the specified size
            arr[i] = new int[n];

            // Input values for the current row
            System.out.println("Enter " + n + " elements for row " + (i + 1) + ": ");
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        // Print the 2D array
        System.out.println("Entered 2D Array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(Arrays.toString(arr[i]));
        }

        sc.close();
    }
}

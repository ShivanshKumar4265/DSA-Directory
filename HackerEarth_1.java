import java.util.Arrays;
import java.util.Scanner;
public class HackerEarth_1{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int[] A = new int[N];
        int sum = 0;
        for(int i = 0;i<N;i++){
            A[i] = s.nextInt();
            sum+=A[i];
        }
        Arrays.sort(A);
        for(int i = 0;i<N;i++){
            if(A[i] * N > sum){
                System.out.print(A[i]);
                return;
            }
        }

	}
}

public class StartPatternWithContinuousCharacter{
	public static void main(String[] args){
		char print = 'A';
		for(int i = 0;i<7;i++){
			for(int j = 0; j < i + 1;j++ ){
				System.out.print((print) + " ");
				print++;
			}
			System.out.println();
		}
	}
}

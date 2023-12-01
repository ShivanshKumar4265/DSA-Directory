public class PalindromeChecker{
	public static void main(String[] args){
		// System.out.println(isPlindrome(1234554321));
		System.out.println(isPlindrome_ForString("qwertyuyrewq"));
	}

	public static boolean isPlindrome_ForNumber(int n){
		String num = Integer.toString(n);
		int start = 0;
		int end = num.length() - 1;
		while(start < end){
			if(num.charAt(start) != num.charAt(end)){
				return false;
			}
			start++;
			end--;
		}
		return true;

	}


	public static boolean isPlindrome_ForString(String n){
		int start = 0;
		int end = n.length() - 1;
		while(start < end){
			if(n.charAt(start) != n.charAt(end)){
				return false;
			}
			start++;
			end--;
		}
		return true;

	}
}

public class AnagramChecker{
	public static void main(String[] args){
		//Assumption : the input string str1 and str2 must be lowercase alphabet only
		// if you enter ansy other than that, below algo will not work
		String str1 = "anagram";
		String str2 = "uoiuoio";

		if(str1.length() != str2.length()){
			System.out.println("false");
			return;
		}

		int[] arr = new int[26];
		for(int i =0;i<str1.length();i++){
			arr[str1.charAt(i) - 'a']++;
			arr[str2.charAt(i) - 'a']--;
		}

		for(int count : arr){
			if(count != 0){
				System.out.println("false");
				return;
			}
		}

		System.out.println("true");
		return;

	}
}

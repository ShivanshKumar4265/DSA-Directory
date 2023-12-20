public class CountAstericks{
	public static void main(String[] args){
		String s = "||*||";
		System.out.println(countAstericks(s));
	}
	public static int countAstericks(String s){
		boolean start  = false;
		int count = 0;
		for(int i =0;i<s.length();i++){
			if(s.charAt(i) == '|'){
				start  = !start;
				continue;
			}
			if(start == false && s.charAt(i) == '*'){
				count++;
			}
		}
		return count;
	}
}

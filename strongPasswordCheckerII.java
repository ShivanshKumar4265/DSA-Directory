class Solution {
    public boolean strongPasswordCheckerII(String password) {
        boolean lower = false;
        boolean upper = false;
        boolean digit = false;
        boolean specialCharacter = false;
        String  specialCharacters = "!@#$%^&*()-+";
        char previous = '.';

        if(password.length()<8){

            return false;

        }

        ArrayList<Character> list = new ArrayList<>();

        for(int i = 0;i<password.length();i++){

            list.add(password.charAt(i));

        }

        for(int i = 0;i<list.size();i++){
            if(list.get(i) == previous){
                return false;
            }
            previous = list.get(i);

            if(list.get(i)>='a' && list.get(i)<='z'){
                lower  = true;
            }else if(list.get(i)>='A' && list.get(i)<='Z'){
                upper = true;
            }else if(list.get(i)>= '0' && list.get(i)<='9'){
                digit = true;
            }else if(specialCharacters.indexOf(list.get(i)) != -1){
                specialCharacter = true;
            }
        }

        return lower && upper && digit && specialCharacter;


      
    }
}

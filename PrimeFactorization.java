import java.util.ArrayList;

class PrimeFactorization {
    public static ArrayList<Integer> primeFactors(int n) {
        ArrayList<Integer> factors = new ArrayList<>();
        
        while (n % 2 == 0) {
            factors.add(2);
            n /= 2;
        }
        
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            while (n % i == 0) {
                factors.add(i);
                n /= i;
            }
        }
        
        if (n > 2) {
            factors.add(n);
        }
        
        return factors;
    }

    public static void main(String[] args) {
        int number = 56; // Change this to the number you want to factorize
        ArrayList<Integer> factors = primeFactors(number);
        
        System.out.println("Prime factors of " + number + " are: " + factors);
    }
}

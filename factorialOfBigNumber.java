import java.math.BigInteger;
import java.util.Scanner;

public class factorialOfBigNumber {
    public static BigInteger factorial(int n) {
        BigInteger b = new BigInteger("1");
        for (int i = 2; i <= n; i++) {
            b = b.multiply(BigInteger.valueOf(i));
        }

        return b;
    }

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number n");
        n = sc.nextInt();
        System.out.println("ans is " + factorial(n));
    }
}
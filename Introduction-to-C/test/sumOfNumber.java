import java.util.*;

public class sumOfNumber {
    public static void main(String args[]) {
        int i, n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        n = sc.nextInt();
        for (i = 0; i < n; i++) {
            sum = sum + i;
        }
        System.out.println("Sum of sriece = "+ sum);
    }

}

import java.util.*;
public class prime {
    public static void main(String[] args) {
        int i,n,prime;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value of n: ");
        n = sc.nextInt();
        for(i=2;i<=n;i++)
        {
            prime = 1;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    prime = 0;
                    break;
                }
            }
            if(prime==1)
            {
                System.out.println(i);
            }
        }
    }
}

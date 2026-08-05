import java.util.Scanner;

public class Pyramid {
    public static void main(String[] args) {

        //Display string in pyramid shape
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter String to print in pyramid shape: ");
        String str = sc.nextLine();
        
        int n = str.length();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

            for (int j = 1; j <= i; j++) {
                System.out.print(str.charAt(j-1) + " ");

                
            }

            System.out.println();
        }

        sc.close();
    }
}

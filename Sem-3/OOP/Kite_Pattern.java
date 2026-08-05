public class Kite_Pattern {
    public static void main(String[] args) {
        int n = 5;

        //upper half of the kite
        for (int i = 1; i <= n; i++) {
            for (int s = 1; s <= n - i; s++) {
                System.out.print("  ");
            }

            for (int j = 1; j <= i; j++) {
                System.out.print("*   ");
            }
            System.out.println();
        }

        for (int i = n - 1; i >= 1; i--) {
            for (int s = 1; s <= n - i; s++) {
                System.out.print("  ");
            }

            for (int j = 1; j <= i; j++) {
                System.out.print("*   ");
            }
            System.out.println();
        }
    }
}

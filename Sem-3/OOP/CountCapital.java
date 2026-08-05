import java.util.Scanner;

class CountCapital {
    
    public static void main(String[] args) {
        
        //Count no of word that have first letter capital in a string
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        String[] words = str.split(" ");
        int count = 0;

        for (String word : words) {
            if (word.charAt(0) >= 'A' && word.charAt(0) <= 'Z') {
                count++;
            }
        }
        
        System.out.println("Number of words with first letter capital: " + count);
        sc.close();
    }
}

import java.util.Scanner;

class Ask {

    String getStringInput() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        sc.close();
        return str;
    }

}

class VowelClass {
    
    public static void main(String[] args) {
        //Count each vowel in a string and get strings until user enters "quit"

        Ask ask = new Ask();
        while (true) {
            String str = ask.getStringInput();
            if (str.equalsIgnoreCase("quit")) {
                break;
            }

            int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
            int ACount = 0, ECount = 0, ICount = 0, OCount = 0, UCount = 0;

            for (int i = 0; i < str.length(); i++) {
                char ch = str.charAt(i);
                switch (ch) {
                    case 'a':
                        aCount++;
                        break;
                    case 'A':
                        ACount++;
                        break;

                    case 'e':
                        eCount++;
                        break;
                    case 'E':
                        ECount++;
                        break;

                    case 'i':
                        iCount++;
                        break;
                    case 'I':
                        ICount++;
                        break;

                    case 'o':
                        oCount++;
                        break;
                    case 'O':
                        OCount++;
                        break;

                    case 'u':
                        uCount++;
                        break;
                    case 'U':
                        UCount++;
                        break;
                }
            }

            System.out.println("Vowel counts:");
            System.out.println("a: " + aCount);
            System.out.println("A: " + ACount);

            System.out.println("e: " + eCount);
            System.out.println("E: " + ECount);

            System.out.println("i: " + iCount);
            System.out.println("I: " + ICount);

            System.out.println("o: " + oCount);
            System.out.println("O: " + OCount);

            System.out.println("u: " + uCount);
            System.out.println("U: " + UCount);
        }
    }
}

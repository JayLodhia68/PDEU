import java.util.Scanner;

class CountVowelConsonant {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");

        String str = sc.nextLine();
        int vowel = 0,consonant = 0;

        for(int i=0;i<str.length();i++){

            char ch = str.charAt(i);

            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                vowel++;
            }
            else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
                consonant++;
            }
        }

        System.out.println("Vowels: "+vowel);
        System.out.println("Consonants: "+consonant);

        sc.close();
    }
}
import java.util.*;

class GFG {
    public static void main(String args[]) {
        
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();      // integer
        float b = sc.nextFloat();  // float
        long c = sc.nextLong();    // long
        byte d = sc.nextByte();    // byte
        
        sc.nextLine(); // consume leftover newline
        
        String s = sc.nextLine();  // string
        
        // Print each value in a new line
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
        System.out.println(s);
    }
}
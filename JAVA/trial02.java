import java.util.*;


public class trial02 {
    public static void func(){
        System.out.println("Trial");
    }

    public static void sum(int a, int b){
        int x = a+b;
        System.out.println("Sum: "+ x);
    }
    
    public static void main(String[] args) {
        
        Scanner scn = new Scanner(System.in);
        String st = scn.nextLine();

        System.out.println(st);
        System.out.println("Hello");
        func();
        
        System.out.println("Enter first  num: ");
        int a = scn.nextInt();
        System.out.println("Enter second num: ");
        int b = scn.nextInt();
        
        sum(a,b);

        scn.close();
    }
    
}

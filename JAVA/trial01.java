import java.util.*;

class trial01{
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);

        int a = scn.nextInt();
        float f = scn.nextFloat();

        System.out.println("Enetered float Input: " + String.format("%.3f", f));

        if(a > 10){
            System.out.println(a + " is more than 10");
        }
        else{
            System.out.println(a + " is less than 10");
        }

        for(int i = 0; i < 10; i++){
            while(i < 5){
                System.out.println("Less than 5: i = " + i);
                i++;
            }
            System.out.println("More than 5 : i = " + i);
        }

        String x = "This is a string";

        int z = 25;
        int y = z / 5;

        System.out.println(z + " / 5 = " + y);
        System.out.println("This ia an Trial");
        System.out.println(x);
        System.out.println(z++);

        scn.close();

    }
}
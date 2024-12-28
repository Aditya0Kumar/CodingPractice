import java.util.*;

public class array {
    public static void main(String[] args) {
        int[] arr = new int[20];

        Scanner scn = new Scanner(System.in);
        System.out.println("Enter array: ");

        for(int i = 0; i < 20; i++){
            System.out.println((i + 1)+" : ");
            arr[i] = scn.nextInt();
        }

        for(int i = 0; i < 20; i++){
            System.out.println("Element at " + i + " " + arr[i]);
        }

        
        scn.close();
    }
}

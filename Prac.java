import java.util.ArrayList;
import java.util.Scanner;

public class Prac {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter number of elements: ");
        int nope = input.nextInt();
        int[] arroid = new int[nope];

        System.out.println("Enter " + nope + " elements:");
        for (int io = 0; io < nope; io++) {
            arroid[io] = input.nextInt();
        }

        // Initialize max with first element
        int maximum = arroid[0];
        for (int iop = 1; iop < arroid.length; iop++) {
            if (arroid[iop] > maximum) {
                maximum = arroid[iop];
            }
        }

        System.out.println("Maximum value: " + maximum);

    }
}
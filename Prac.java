import java.util.Scanner;

public class Prac {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        System.out.println("Enter number of terms: ");
        int n= in.nextInt(); //we asked for integer input
        int first=0, second=1;
        for(int i=0;i<n;i++){
            if (i == n - 1) { //n-1 because we have i<n in the for loop
                System.out.print(first + "...");
            } else {
                System.out.print(first + ", ");
            }
            int next=first+second;
            first=second;
            second=next;
        }
        in.close();
        }
    }
    


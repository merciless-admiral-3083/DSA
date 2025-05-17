//There is a difference between while and do while loop, in do while loop the do statement will be executed even if the while condition dosent allow it do so
import java.util.Scanner;

public class JAS_1 {
    public static void main(String[] args) {
        int n = 5;
        do {
            System.out.println("Hello World1");
            n++;
        } while (n < 3);

        int m = 5;
        while (m < 3) {
            System.out.println("Hello World");
            m++;
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Take user input
        Scanner in = new Scanner(System.in);

        System.out.println("Enter two numbers to get max value: ");
        int a = in.nextInt();
        int b = in.nextInt();

        // To get max value using Math function
        int max = Math.max(a, b);
        System.out.println("Maximum value: " + max);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // To get specific character
        System.out.println("Enter a string:");
        in.nextLine(); // to consume the leftover newline character
        String str = in.nextLine(); // read full line
        System.out.println("First character: " + str.charAt(0)); // print first character
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Fibonacci series
        System.out.print("Enter number of terms: ");
        int noice = in.nextInt(); //we asked for integer input
        //fibonacci series starts with 0 and 1 and the next number is the sum of previous two numbers 0,1,1,2,3,5,8,13,21,34,55...
        int first = 0, second = 1; 

        System.out.println("Fibonacci Series:");
        for (int i = 0; i < noice; i++) { 
            if (i == noice - 1) { //noice-1 because we have i<noice in the for loop
                System.out.print(first + "...");
            } else {
                System.out.print(first + ", ");
            }

            // generate next term
            int next = first + second;
            first = second;
            second = next;
        }
        System.out.println();
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Calculator which ends operation when x or X is input by user
        char operator;

        while (true) {
            System.out.println("Enter operator (+, -, *, /, %) or x to exit: ");
            operator = in.next().charAt(0);

            if (operator == 'x' || operator == 'X') {
                System.out.println("Exiting calculator. Goodbye!");
                break;
            }

            if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%') {
                System.out.print("Enter first number: ");
                double num1 = in.nextDouble();

                System.out.print("Enter second number: ");
                double num2 = in.nextDouble();

                switch (operator) { //be modern dont use break; etc use -> and just done
                    case '+'-> System.out.println("Result: " + (num1 + num2));
                        
                    case '-'->System.out.println("Result: " + (num1 - num2));
                        
                    case '*'->System.out.println("Result: " + (num1 * num2));
                        
                        
                    case '/'->{
                        if (num2 != 0) {
                            System.out.println("Result: " + (num1 / num2));
                        }
                    }
                    case '%'->{
                        if (num2 != 0) {
                            System.out.println("Result: " + (num1 % num2));
                        }
                    }
                    
                }
            } 
            else {
                System.out.println("Invalid operator! Try again.");
            }
        }
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Prime Number
        System.out.println("Enter the limit for prime numbers: ");
        int limit=in.nextInt();
        System.out.println("Prime numbers between 1 and " + limit + " are:");

        for (int number = 2; number <= limit; number++) {
            boolean isPrime = true;

            for (int i = 2; i <= Math.sqrt(number); i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                System.out.print(number + " ");
            }
        }
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Check if number is Armstrong or not
        System.out.print("Enter a number: ");
        int num = in.nextInt();
        int original = num;
        int result = 0;
        int digits = 0;

        // Count the number of digits
        int temp = num;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        // Calculate sum of digits raised to the power of number of digits
        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            result += Math.pow(digit, digits);
            temp /= 10;
        }

        // Check Armstrong condition
        if (result == original) {
            System.out.println(original + " is an Armstrong number.");
        } else {
            System.out.println(original + " is not an Armstrong number.");
        }
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Array Input
        System.out.println("Enter array length: ");
        int arrlength=in.nextInt();
        int[] arr = new int[arrlength]; 
        for(int i=0;i<arr.length;i++){
            arr[i]=in.nextInt();
            System.out.print(arr[i]+ "");
        }
        //we can convert an array to a string by Arrays.tostring(arr) method















































































        in.close(); // close only once at the end
    }
}
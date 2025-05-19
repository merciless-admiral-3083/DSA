//There is a difference between while and do while loop, in do while loop the do statement will be executed even if the while condition dosent allow it do so
import java.util.ArrayList;
import java.util.Scanner;

public class JAS_1 {

    public static int linearSearch(int[] rra, int target) {
        for (int itta = 0; itta < rra.length; itta++) {
            if (rra[itta] == target) {
                return itta; // Return the index where the target is found
            }
        }
        return -1; // Return -1 if the target is not found
    }

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
        Scanner input = new Scanner(System.in);

        System.out.println("Enter two numbers to get max value: ");
        int a = input.nextInt();
        int b = input.nextInt();

        // To get max value using Math function
        int max = Math.max(a, b);
        System.out.println("Maximum value: " + max);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // To get specific character
        System.out.println("Enter a string:");
        input.nextLine(); // to consume the leftover newline character
        String str = input.nextLine(); // read full line
        System.out.println("First character: " + str.charAt(0)); // print first character
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Fibonacci series
        System.out.print("Enter number of terms: ");
        int noice = input.nextInt(); //we asked for integer input
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
            operator = input.next().charAt(0);

            if (operator == 'x' || operator == 'X') {
                System.out.println("Exiting calculator. Goodbye!");
                break;
            }

            if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%') {
                System.out.print("Enter first number: ");
                double num1 = input.nextDouble();

                System.out.print("Enter second number: ");
                double num2 = input.nextDouble();

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
        int limit=input.nextInt();
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
        System.out.println();
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Check if number is Armstrong or not
        System.out.print("Enter a number: ");
        int num = input.nextInt();
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
        int arrlength=input.nextInt();
        int[] arr = new int[arrlength]; 
        for(int i=0;i<arr.length;i++){
            arr[i]=input.nextInt();
            System.out.print(arr[i]);
        }
        arr[1]= 5; //we are defining that no matter what the user input is, the second element of the array will be 5
        System.out.println("Updated array:");
        for (int point : arr) { //another way to iterate through an array
            System.out.print(point + " ");
        }

        //Now to convert an array to a string we can use Arrays.toString(arr) method, it will provide '[]' and ',' too
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //2D Array Input
        System.out.print("Enter number of rows: ");
        int rows = input.nextInt();

        System.out.print("Enter number of columns: ");
        int cols = input.nextInt();

        int[][] arr1 = new int[rows][cols];

        // Input array elements
        System.out.println("Enter array elements row-wise:");
        for (int i1 = 0; i1 < rows; i1++) {
            for (int j1 = 0; j1 < cols; j1++) {
                arr1[i1][j1] = input.nextInt();
            }
        }

        // Output the array
        System.out.println("Your 2D array:");
        for (int i2 = 0; i2 < rows; i2++) {
            for (int j2 = 0; j2 < cols; j2++) {
                System.out.print(arr1[i2][j2] + " ");
            }
            System.out.println();
        }
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Dynamic array
        ArrayList<Integer> dynamicArray = new ArrayList<>(); //This is the syntax for dynamic array, dynamic array have no limits
        dynamicArray.add(10);
        dynamicArray.add(20);
        dynamicArray.add(30);
        System.out.println("Dynamic array: " + dynamicArray);
        dynamicArray.remove(1); // remove first element
        dynamicArray.set(0,99);
        System.out.println("Dynamic array new one: " + dynamicArray);  
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // To get biggest value of the array
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
            if (arroid[iop] > maximum) { //just remember this for and if loop and simple
                maximum = arroid[iop];
            }
        }

        System.out.println("Maximum value: " + maximum);
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Reverse full array
        int night = input.nextInt();
        int[] arrays = new int[night];
        for (int info = 0; info < night; info++) arrays[info] = input.nextInt();

        for (int info = 0; info < night / 2; info++) {
            int tempo = arrays[info];
            arrays[info] = arrays[night - 1 - info];
            arrays[night - 1 - info] = tempo;
        }

        for (int val : arrays) System.out.print(val + " ");
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Linear Search, its class is above
        System.out.print("Enter the number of elements in the array: ");
        int size = input.nextInt();

        int[] rra = new int[size];

        // Input array elements
        System.out.println("Enter " + size + " integers:");
        for (int itta = 0; itta < size; itta++) {
            rra[itta] = input.nextInt();
        }

        // Input the target value to search
        System.out.print("Enter the element to search for: ");
        int target = input.nextInt();

        int resultor = linearSearch(rra, target);

        if (resultor == -1) {
            System.out.println("Element not found in the array.");
        } else {
            System.out.println("Element found at index: " + resultor);
        }










































































        input.close(); // close only once at the end
    }
}
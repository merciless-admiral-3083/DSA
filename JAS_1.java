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
    }        //Now we may be asked to find the element if it is present between index x and y example in betwween index 2 and 5, then just add int start and int end in the method and then itta=start and itta<=end
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    public static int binarySearch(int[] arr, int target) {
        int left = 0, right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return mid; // target found
            } else if (arr[mid] < target) {
                left = mid + 1; // search right half
            } else {
                right = mid - 1; // search left half
            }
        }

        return -1; // target not found
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    public static int orderAgnosticBinarySearch(int[] arr, int target) {
        int left = 0, right = arr.length - 1;
        boolean isAscending = arr[left] < arr[right];

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return mid; // target found
            }

            if (isAscending) {
                if (arr[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            } else { // descending order
                if (arr[mid] > target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return -1; // target not found
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    public static void SearchSortedMatrix(int[][] matrix, int target) {

    int row = 0;
    int col = matrix[0].length - 1;

    while (row < matrix.length && col >= 0) {
        if (matrix[row][col] == target) {
            System.out.println("Found at row " + row + ", col " + col);
            return;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;
        }
    }

    System.out.println("Not Found");

    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        boolean swapped;
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            // Last i elements are already in place
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            // If no two elements were swapped, array is sorted
            if (!swapped) {
                break;
            }
        }
    }

    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////


    public static void selectionSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            // Find the minimum element in unsorted array
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            // Swap the found minimum element with the first element of unsorted part
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// 
        public static void cycleSort(int[] arr) {
        int n = arr.length;

        for (int start = 0; start < n - 1; start++) {
            int item = arr[start];
            int pos = start;

            // Find the position where we should place the current item
            for (int i = start + 1; i < n; i++) {
                if (arr[i] < item) {
                    pos++;
                }
            }

            // If the item is already in the correct position, skip
            if (pos == start) {
                continue;
            }

            // Skip duplicates
            while (item == arr[pos]) {
                pos++;
            }

            // Swap the item into the correct position
            if (pos != start) {
                int temp = item;
                item = arr[pos];
                arr[pos] = temp;
            }

            // Rotate the rest of the cycle
            while (pos != start) {
                pos = start;
                for (int i = start + 1; i < n; i++) {
                    if (arr[i] < item) {
                        pos++;
                    }
                }

                while (item == arr[pos]) {
                    pos++;
                }

                int temp = item;
                item = arr[pos];
                arr[pos] = temp;
            }
        }
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
        
        System.out.print("Say Hi: ");
        String atomizer= input.nextLine(); //we can also use a.equalsIgnoreCase("hi") which will not depend on case sensitive letters like below
        if(atomizer.equals("Hi") || atomizer.equals("hi") || atomizer.equals("HI")){
        System.out.println("Hello, how are you?");
        }
        else{
            System.out.println("You didnt say hi to me, you said "+a);
        }

        //we can now create a new condition where if a particular word is present in the string then we use an output
        System.out.println("write anything: ");
        String scandal=input.nextLine();
        if(scandal.toLowerCase().contains("hi")){//this "hi" must always be in lowercase
            System.out.println("You just said 'Hi'");
        }
        else{
            System.out.println("you didnt say hi to me, you said" + scandal);
        }
        
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
        System.out.println();
        arr[1]= 5; //we are defining that no matter what the user input is, the second element of the array will be 5
        System.out.println("Updated array:");
        for (int point : arr) { //another way to iterate through an array
            System.out.print(point + " ");
        }

        //Now to convert an array to a string we can use Arrays.toString(arr) method, it will provide '[]' and ',' too
        // str.toCharArray() will convert string to char array
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
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Minimum value of the array
        int[] arrim = {5, 3, 8, 1, 9, 2};
        
        int min = arrim[0]; // Start by assuming first element is minimum
        
        for (int i = 1; i < arrim.length; i++) {
            if (arrim[i] < min) {
                min = arrim[i]; // Update min if current element is smaller
            }
        }
        
        System.out.println("Minimum number in the array is: " + min);
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // To search 2D array
        int[][] numbers = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int targeting = 5; // number to find
        boolean found = false;

        // Go through each row and each column
        for (int i = 0; i < numbers.length; i++) {
            for (int j = 0; j < numbers[i].length; j++) {
                if (numbers[i][j] == targeting) {
                    System.out.println("Found at row " + i + ", column " + j);
                    found = true;
                    break; // break inner loop
                }
            }
            if (found) {
                break; // break outer loop if found
            }
        }
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Count numbers with even number of digits
        int[] array_values = {12, 345, 2, 6, 7896};
        int counting_numbers = 0;

        for (int numerical : array_values) {
            int digital = (int) Math.log10(numerical) + 1;
            if (digital % 2 == 0) {
                counting_numbers++;
            }
        }

        System.out.println("Count of numbers with even number of digits: " + counting_numbers);
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Write a Java program to find the maximum total wealth among customers based on their bank account balances.
        System.out.print("Enter number of customers: ");
        int customers = input.nextInt();

        System.out.print("Enter number of banks per customer: ");
        int banks = input.nextInt();

        int[][] accounts = new int[customers][banks];

        // Input account balances
        for (int i = 0; i < customers; i++) {
            System.out.println("Enter balances for customer " + (i + 1) + ":");
            for (int j = 0; j < banks; j++) {
                accounts[i][j] = input.nextInt();
            }
        }

        int maxWealth = 0;

        // Calculate max wealth
        for (int i = 0; i < customers; i++) {
            int wealth = 0;
            for (int j = 0; j < banks; j++) {
                wealth += accounts[i][j];
            }
            if (wealth > maxWealth) {
                maxWealth = wealth;
            }
        }

        System.out.println("Maximum wealth: " + maxWealth);
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Binary Search, its class is above
        int[] arrow = {1, 3, 5, 7, 9, 11};
        int targetinge = 7;
        int index = binarySearch(arrow, targetinge);
        System.out.println("Index of target: " + index);
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Now there is an agnoustic binary search too, in this we have desending and ascending order of the array, now er need to search the array accordingly
        int[] ascending = {1, 3, 5, 7, 9};
        int[] descending = {9, 7, 5, 3, 1};

        System.out.println("Index in ascending: " + orderAgnosticBinarySearch(ascending, 5));  // Output: 2
        System.out.println("Index in descending: " + orderAgnosticBinarySearch(descending, 5));
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //There is one class above for SearchingSortedMatrix
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //BubbleSort
        int[] arrayss = {64, 34, 25, 12, 22, 11, 90};
        
        System.out.println("Original array:");
        printArray(arrayss);

        bubbleSort(arrayss);

        System.out.println("Sorted array:");
        printArray(arrayss);
    
        /*Theory of bubble sort:
        ----Its other names: 1.Sinking Sort 2.Exchange Sort 3.Comparison Sort 4.Straight Sort
        ----Time Complexity: 1.Best Case: O(n) 2.Average Case: O(n^2) 3.Worst Case: O(n^2)
        ----Space Complexity: O(1) (Constant space)
        ----Stable: Yes, it maintains the relative order of equal elements.
        ----In-Place: Yes, it requires only a constant amount of additional space.


        */


        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Selection Sort
        int[] arraysss = {64, 34, 25, 12, 22, 11, 90};

        System.out.println("Original array:");
        printArray(arraysss);

        selectionSort(arraysss);

        System.out.println("Sorted array:");
        printArray(arraysss);
        

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Cycle Sort
        //If the humbers are from 1 to N i.e. no gap, just 1,2,3... and we need to sort them in O(n) time complexity then we can use cycle sort, it is a non-comparison based sorting algorithm
        //we see that the index=value-1 i.e. for 2 in the array we hae its index as 1, so we will place the value at its index and then we will place the next value at its index and so on, this is how cycle sort works
        int[] armani = {5, 3, 1, 2, 4};

        System.out.println("Original array:");
        for (int val : armani) {
            System.out.print(val + " ");
        }

        cycleSort(armani);

        System.out.println("\nSorted array:");
        for (int val : armani) {
            System.out.print(val + " ");
        }
    




























































        input.close(); // close only once at the end
    }
}
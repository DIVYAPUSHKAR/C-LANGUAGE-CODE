import java.util.Scanner;

public class InsertionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input the size of the array
        System.out.println("Enter size of array:");
        int n = sc.nextInt();

        // Declare the array
        int[] a = new int[n];

        // Input the elements
        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        // Insertion Sort
        for (int i = 1; i < n; i++) {
            int key = a[i];  // Take the current element as key
            int j = i - 1;

            // Compare the key with previous elements
            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];  // Move elements that are greater than the key
                j--;
            }
            a[j + 1] = key;  // Insert the key into its correct position
        }

        // Output the sorted elements in ascending order
        System.out.println("Elements in ascending order:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();

        sc.close();  // Close the scanner to prevent resource leak
    }
}


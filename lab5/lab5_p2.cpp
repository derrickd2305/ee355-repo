#include <iostream>
#include <fstream>
#include <cstdlib> // for atoi
using namespace std;

// Function to extract and display command-line arguments using pointer-to-pointer
void extractCommandLineArgs(int argc, char** argv, ofstream &outputFile) {
    outputFile << "Extracted Command-Line Arguments:\n";
    for(int i = 0; i < argc; i++){
        outputFile << "\t" << "argv[" << i << "] = " << *(argv+i) << endl;
    }
}

// Function to swap two integers using pass-by-value (no effect)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers using pass-by-reference (modifies values)
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to modify array: Double each value (using pass-by-pointer)
void doubleValues(int* arr, int size) {
    for(int i = 0; i < size; i++){
        *(arr+i) *= 2;
    }
}

// Function to compute sum and product using pass-by-reference
void computeSumAndProduct(int* arr, int size, int &sum, int &product) {
    
}

// Function to reverse an array using pointers (without array indexing)
void reverseArray(int* arr, int size) {
    
}

// Main function
int main(int argc, char* argv[]) {

    
    // Convert command-line arguments to integers
    int* array = new int[argc];
    int size = argc - 1;
    for(int i = 0; i < size; i++){
        array[i] = atoi(argv[i+1]);
    }

    // Open output file
    ofstream output("output_Q2.txt");

    // Print original array
    output << "Original Numbers: ";
    for(int i = 0; i < size; i++){
        output << array[i] << " ";
    }
    output << endl << endl;

    // Extract command-line arguments using pointer-to-pointer
    extractCommandLineArgs(argc, argv, output);

    // Demonstrate pass-by-value (no effect)
    int a = array[0], b = array[1];
    swapByValue(a, b);
    output << endl << "Pass-by-Value Swap (No Effect):"<< endl;
    output << "\t" << "Swap("<<a<<", "<<b<<") -> a = "<<a<<", b = "<< b << " (Unchanged)" << endl << endl;
    
    // Demonstrate pass-by-reference (modifies values)
    swapByReference(a, b);
    output << "Pass-by-Reference Swap (Successful):"<< endl;
    output << "\t" << "Swap("<<a<<", "<<b<<") -> a = "<<a<<", b = "<< b << endl << endl;

    // Modify array (double values using pointer)
    doubleValues(array, size); // Fill in the arguments
    output << "Pass-by-Pointer Modification:" << endl;
    output << "\t" << "Doubled Values: ";
    for(int i = 0; i < size; i++){
        output << array[i] << " ";
    }
    output << endl << endl;
    
    // Compute sum and product
    // computeSumAndProduct(); // Fill in the arguments
    
    // Reverse array
    // reverseArray(); // Fill in the arguments
    
    delete [] array;
    return 0;
}

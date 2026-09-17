#include <iostream>
using namespace std;

// return the sum of all elements in ar
int sumArray(const int ar[], int size)
{
    //arrays are pass by ref by default
    int sum = 0; 

    for (int i = 0; i < size; i++)
    {
        sum += ar[i]; 
    }
    return sum;
}

// multiply all elements in ar and return the product
long productArray(const int ar[], int size)
{
    int product = ar[0]; //cannot be 0 product will be 0

    for (int i = 1; i <= size; i++)
    {
        product *= ar[i]; 

    }

    return product; 
}

// return the maximum element in ar
int maxArray(const int ar[], int size)
{
    //comparison
    int max = ar[0]; 

    for (int i = 1; i <= size; i++ )
    {
        if (ar[i] > max)
            max = ar[i]; 
    }

    return max;
}

// return the minimum element in ar
int minArray(const int ar[], int size)
{
    int min = ar[0]; //default case

    for (int i = 1; i <= size; i++)
    {
        if (ar[i] < min)
            min = ar[i];
    }
    
    return min;
}

int main()
{
    /*
    Q1: declare an integer array and initialize it with the first 10 prime numbers. You can manually initialize the values.
    */

    int array1[10] = {1,2,3,5,7,11,12,17,19,23};

    /*
    Q2. Complete the function definitions and test them using the following function calls.
    */
   int array2[6] = {10, 20, 30, 6, 50, -100};
   cout << "Sum of elements: " << sumArray(array2, 6) << endl;
   cout << "Product of elements: " << productArray(array2, 6) << endl;
   cout << "Maximum element: " << maxArray(array2, 6) << endl;
   cout << "Minimum element: " << minArray(array2, 6) << endl;

   /*
   Q3. Declare three floating-point arrays of size 4 x 4. Ask user to input values in the first array, and perform element-wise addition of first two arrays and store the result in third array. Print the third array.

   Example of element-wise addition (this is also known as matrix addition)
   10 45 20 -3                55 23 17 21                  65 68 37 18
   60 56 -6 81                -4 31 18 16                  56 87 12 97
   -2 -4 45 60     +          15 20 25 30        =         13 16 70 90
   22 14 16 38                -6 18 10 -9                  16 32 26 29
   */


}
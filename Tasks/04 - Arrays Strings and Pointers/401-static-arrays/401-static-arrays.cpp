#include <iostream>
using namespace std;

int main()
{
    //Create and initialise an array
    int nums[] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 111 };

    // Write out the size
    cout << "The array nums consumed " << sizeof(nums) << " bytes." << endl; // 11 * 4 = 44 bytes

    //We can actually calculate the length of the array as follows:
    int N = sizeof(nums) / sizeof(int); 

    cout << "The array nums contains " << N << " elements of type int" << endl; // 11 elements

    //Write the start address (just curious)
    cout << "The start address of the array nums is " << nums << " (hex)" << endl;

    //Write out all elements of the array
    for (unsigned int n = 0; n < N; n++) {
        int next = nums[n];                                             //Read by de-referencing
        cout << "Element " << n << " of nums = " << next << endl;       //Write to terminal // Element {1} of nums = 11
    }

    //Modify each element of the array
    for (unsigned int n = 0; n < N; n++) {
        int newValue = nums[n] + 3;             //Read (by de-referencing) and add one    
        nums[n] = newValue;                     //Write into the array (again, using de-referencing)
    }

    cout << "Add one...." << endl;

    //Write out all elements of the array again - shorter version this time
    for (unsigned int n = 0; n < N; n++) {
        cout << "Element " << n << " of nums = " << nums[n] << endl; // Element {1} of numbers {12}
    }



    // **************************************************************************
    // TASK 1 - calculate and display the SUM of all elements in the array nums *
    // **************************************************************************

    //Write task 1 solution here
    {
        int sum = 0;   //Result needs to be bigger than int to avoid overflow
        for (unsigned int i = 0; i < sizeof(nums) / sizeof(int); i += 1) {
            cout << "Adding index " << i << " with value " << nums[i] << " to existing result " << sum << endl;
            sum += nums[i];
        }

        cout << "Total length of nums array is equal to " << sum << endl;
    }

    // ***********************************************************************************************************************
    // TASK 2 - calculate the mean of all elements (this will be a fractional value) and display to 1 decimal place accuracy *
    // ***********************************************************************************************************************

    {
        int sum = 0;   //Result needs to be bigger than int to avoid overflow
        int arrayLength = sizeof(nums) / sizeof(int);
        for (unsigned int i = 0; i < arrayLength; i += 1) {
            sum += nums[i];
        }

        float mean = ceil(((float)sum / (float)arrayLength) * 10) / 10;
        cout << "The average result of the array - nums - is " << mean;
    }

    //Write task 2 solution here

}



#include <iostream>

using namespace std;

//Funtion to calculate the sum of non-negative values in an array
int sumNonNegative(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] >= 0) {
            sum += array[i];
        }
    }
    return sum;
}

//Function for user to enter array elements
void getArrayElements(int* arr, int capacity) {
    for (int i = 0; i < capacity; i++) {
        cout << "Enter element: " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {

    //For user to input the size of array
    int capacity;
    cout << "Enter number of elements: ";
    cin >> capacity;
    
    //For user to input array elements
    int* array = new int[capacity];
    getArrayElements(array, capacity);

    //To display and sum the non-negative values
    int sum = sumNonNegative(array, capacity);
    cout << "\nSum of non-negative numbers: " << sum;

    delete[] array;

    return 0;
}


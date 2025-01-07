#include <iostream>
using namespace std;

int main() {
    cout << "---------------- Question 1: ----------------" << endl;
    // Take integer inputs from the user and store them in an array. Again ask the user to give a number.
    // Now, tell user whether that number is present in array or not.
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter Array Element Number " << i + 1 << ": " << endl;
        cin >> array[i];
    }
    int x;
    cout << "Give a number: " << endl;
    cin >> x;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (x == array[i]) {
            found = true;
        }
    }
    if (found) {
        cout << x << " is indeed present in array." << endl;
    } else {
        cout << x << " is not present in array." << endl;
    }

    cout << " " << endl;

    cout << "---------------------------------------------" << endl;

    cout << " " << endl;

    cout << "---------------- Question 2: ----------------" << endl;
    // Write a program to find the sum and product of all elements of a dynamic array.
    int dynamic_size;
    cout << "Enter the size of a dynamic array: " << endl;
    cin >> dynamic_size;
    int *dynamic_array = new int(dynamic_size);
    for (int i = 0; i < dynamic_size; i++) {
        cout << "Enter Array Element Number " << i + 1 << ": " << endl;
        cin >> dynamic_array[i];
    }
    int sum = 0;
    int product = 1;
    for (int i = 0; i < dynamic_size; i++) {
        sum = sum + dynamic_array[i];
        product = product * dynamic_array[i];
    }
    cout << "The sum of the elements in this dynamic array is: " << sum << endl;
    cout << "The product of the elements in this dynamic array is: " << product << endl;

    delete dynamic_array;

    return 0;
}

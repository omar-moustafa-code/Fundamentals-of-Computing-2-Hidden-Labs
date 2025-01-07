#include <iostream>
using namespace std;

int main() {

    int rows, cols;

    cout << "Enter Rows: " << endl;
    cin >> rows;
    cout << "Enter Columns: " << endl;
    cin >> cols;

    int size = rows * cols;
    int *array = new int[size];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter ID for Student in Row " << i+1 << " and Column " << j+1 << ": " << endl;
            cin >> *(array + i * cols + j);
        }
    }

    int index;
    cout << "Which Row's IDs Would You Like To Print?" << endl;
    cin >> index;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == index) {
                cout << *(array + i * cols + j) << "\t";
            }
        }
    }

    return 0;

}

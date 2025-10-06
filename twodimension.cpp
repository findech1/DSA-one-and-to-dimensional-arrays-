//program to print out multiplication table
//using arrays
#include<iostream> 
using namespace std; 
int main() {
    const int ROWS = 3;
    const int COLS = 5;
    float num[ROWS][COLS]; // 3x5 table

    // Fill the table with multiplication values
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            num[i][j] = (i + 1) * (j + 1);
        }
    }

    // Print the multiplication table
    cout << "Multiplication Table (3x5):" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << num[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

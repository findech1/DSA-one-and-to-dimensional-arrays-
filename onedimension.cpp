//program to calculate the average score in 10 scores
//using arrays
#include <iostream>
using namespace std;

int main() {
    int i;
    float score[10];
    float sum, avg;

    sum = 0;

    for (i = 0; i < 10; i++) {
        cout << "Enter score number " << i + 1 << ": ";
        cin >> score[i];
        sum = sum + score[i];
    }

    avg = sum / 10;
    cout << "The average score is " << avg << endl;

    return 0;
}

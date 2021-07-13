#include <iostream> //048
using namespace std;

int main()
{
    char A[10];

    for (int i = 0; i <= 9; i++) {
        cin >> A[i];
    }
    for (int i = 0; i <= 9; i++) {
        if (A[i] == '5') {
            A[i] = '#';
        }
        else if (A[i] == '1') {
            A[i] = '*';
        }
        else if (A[i] == '0') {
            A[i] = '*';
        }
    }
    for (int i = 0; i <= 9; i++) {
        cout << A[i] << " ";
    }
    return 0;
}

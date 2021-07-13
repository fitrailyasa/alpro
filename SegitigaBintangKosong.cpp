#include<iostream>
using namespace std;
 
int main(){
    int rows, i, j, space;
 
    cout << "Masukkan jumlah baris: ";
    cin >> rows;
 
    for (i = rows; i >= 1; i--){
        for (space = i; space < rows; space++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++){
            if (i == rows || j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}

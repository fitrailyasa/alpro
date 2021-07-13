#include <iostream>
using namespace std;

int tukarBola(int &p, int &q){
   return p, q;
}

int main(){
    int n, t, x, y, pPointer, qPointer;
    char p, q;
    cin >> n;
    int arr[2][n];
    int *arrPointer = &arr[2][n];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }    
    
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> p >> x >> q >> y;
        pPointer = p - 65;
        qPointer = q - 65;
        tukarBola(arr[pPointer][x-1], arr[qPointer][y-1]);
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j];
            if(j != n-1){
                cout << " ";
            } else {
                cout << endl;
            } 
        }
    }
    cout << endl;
	return 0;
}

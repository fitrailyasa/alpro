#include <iostream>
using namespace std;
 
int main(){
    int i,j,n;      
    cout << "Masukan nilai n = ";
    cin >> n;
    for (i=0; i<=n; i++){
        for (j=i; j<n; j++){
            cout << (n-j); // segitiga kiri
        }
        for (j=1; j<=i; j++){
            cout << " "; // segitiga kanan
        }
        cout << endl;
    }
    return 0;
}

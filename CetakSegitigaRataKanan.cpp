#include <iostream>
using namespace std;
 
int main(){
    int i,j,n;      
    cout << "Masukan nilai n = ";
    cin >> n;
    for (i=1; i<=n; i++){
        for (j=i; j<n; j++){
            cout << " "; // segitiga kiri
        }
        for (j=1; j<=i; j++){
            cout << (n-j+1); // segitiga kanan
        }
        cout << endl;
    }
    cout << endl;
	system("pause");
    return 0;
}

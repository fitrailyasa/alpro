#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Masukkan bilangan faktorial: ";
    cin >> a;
    b = a;
    cout << a << "! = ";
    for(int i=1; i<=a; i++){
        cout<<i;
        if(i==a){
            cout << " =";
        }else{
            cout << " x ";
        }
    }
    for(int i=1; a>i;){
        a = a-1;
        b = a*b;
    }
    cout << b;
    cout << endl;
	system("pause");
    return 0;
}

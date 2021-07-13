#include <iostream>
using namespace std;

int aneh(int a, int b){
    return (a > b) ? a*b : b-a;
}
	
int main(){
    int a, b;
    cout << "Masukkan bilangan 1 : ";
    cin >> a;
    cout << "Masukkan bilangan 2 : ";
    cin >> b;

    cout << aneh(a, b);
    
    cout << endl;
	system("pause");
	return 0;
}

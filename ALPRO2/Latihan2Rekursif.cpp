#include <iostream>
using namespace std;

int exp(int a, int b){
	if (b == 0){
		return 1;
	}
	else{
		return (a * exp (a, b-1));
	}
}

int main(){
	int a, b, hasil_exp;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	cout << endl;
	hasil_exp = exp(a, b);
	cout << "Hasil " << a <<" pangkat "<< b;
	cout << " adalah " << hasil_exp;
	return 0;
}

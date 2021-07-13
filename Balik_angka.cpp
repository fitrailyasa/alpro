#include <iostream>
using namespace std;

int main(){
	int angka;
  	cin >> angka;
  	while(angka > 0){
  		cout<<angka%10;
		angka=(angka-angka%10)/10;
	}
	cout << endl;
	system("pause");
	return 0;
}

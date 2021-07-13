#include<iostream>
using namespace std;

int balik_angka(int angka){
  if (angka > 0)
    cout << angka%10;
    return balik_angka(angka=(angka-angka%10)/10);
}

int main(){
	int x,y;
	cin >> x;
	cin >> y;
	int angka = x + y;
	while (angka > 0){
	cout << balik_angka(angka);
	}
	return 0;	
}

#include <iostream>
using namespace std;

int kuadrat(int &a){
	a = a * a;
	return a;
}

int main(){
	int a2;
	cin >> a2;
	kuadrat(a2);
	
	cout << a2;
	
	return 0;
}

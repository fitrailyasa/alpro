#include <iostream>
using namespace std;

int n(int x, int i){ 
	if (i == 1) { 
		return 1; 
	} 
	else if (x % i == 0) { 
		return 1 + n(x, --i); 
		} else { 
		return 0 + n(x, --i); 
	} 
}
  
int coba(int x){ 
	if (x > 1) { 
		return (n(x, x) == 2);
	} 
	else 
		return false; 
}

int main(){
	
	int x;
	cin >> x;

	if (coba(x)){
		cout << "Prima" << endl;
	}else {
		cout << "Bukan Prima" << endl;
	}
	return 0;
} 

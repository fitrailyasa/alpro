#include <iostream>
using namespace std;

int main(){
    int a;
    
    cin >> a;
    
    for (int b = 1; b <= a; b++){
    	for (int c = 1; c <= b; c++){
    		cout << "*";
		}
		for (int d = a; d >= b; d--){
    		cout << " ";
		}
    cout << endl;
	}
    
    for (int x = 1; x <= a; x++){
    	for (int y = 1; y < x; y++){
    		cout << " ";
		}
		for (int z = a; z >= x; z--){
    		cout << "*";
		}
    cout << endl;
	}
	cin.get();
	return 0;
}
    


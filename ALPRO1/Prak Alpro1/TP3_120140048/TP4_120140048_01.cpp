#include <iostream>
using namespace std;

int main(){
    int a;
    
    cin >> a;
    
    for (int x = 1; x <= a; x++){
    	for (int y = 1; y < x; y++){
    		cout << " ";
		}
		for (int z = a; z >= (2*x - a); z--){
    		cout << "*";
		}
    cout << endl;
	}
	cin.get();
	return 0;
}
    


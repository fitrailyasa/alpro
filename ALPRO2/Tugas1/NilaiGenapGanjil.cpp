#include <iostream>
using namespace std;
	
	int main (){
    	int bil;
    	
     	cout << "PROGRAM GANJIL GENAP" << endl;
     	cout << "Masukan bilangan : ";
		cin >> bil;
		
		if(bil % 2 == 0){
			cout << bil << " merupakan bilangan genap";
		}else{
			cout << bil << " merupakan bilangan ganjil";
		}
		return 0;
	}

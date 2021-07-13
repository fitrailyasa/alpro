#include <iostream>
using namespace std;
	
	int main (){
    	int bil;
    	
     	cout << "PROGRAM BILANGAN POSITIF, NEGATIF DAN NOL" << endl;
     	cout << "Masukan bilangan : ";
		cin >> bil;
		
		if(bil > 0){
			cout << bil << " merupakan bilangan positif";
		}else if(bil < 0){
			cout << bil << " merupakan bilangan negatif";
		}else {
			cout << bil << " merupakan bilangan nol";
		}
		return 0;
	}

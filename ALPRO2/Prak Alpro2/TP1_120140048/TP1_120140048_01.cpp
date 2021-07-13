//120140048
#include <iostream>
using namespace std;

	int main(){
		int n;
		
		cin >> n;
		for (n; n >= 1; n--){
		  cout << "Tek kotek kotek kotek anak ayam turun " << n << endl;
  		  cout << "Tek kotek kotek kotek mati 1 tinggal ";
			if(n > 1){
				cout << n-1 << endl;
			}else {
				cout << "induknya" << endl;
			}	
		}
		
		

		return 0;
	}

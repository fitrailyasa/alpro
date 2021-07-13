//120140048
#include <iostream>
using namespace std;

	int maks(int n, int i){
		float jum = 0, maks = 0;
		 
		cin >> n;
		 
		int data[n];
		 
		for(i = 0; i < n; i++) {
			cin >> data[i];
		}
		maks = data[0];
		for(i = 0; i < n; i++) {
			jum = jum + data[i];
			if (maks < data[i]) {
				maks = data[i];
			}
		}
	
		cout << maks << endl;
		cout << jum/n;
		cout << endl;

	return 0;
	}
	
	
	int main (){
		int n, i;
		 
		cout << maks(n,i);
		 

	}

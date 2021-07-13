//120140048
#include <iostream>
using namespace std;
 
	int main () {
		int n = 0;
		int i;
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
	

	return 0;
	}

//120140048
#include <iostream>
using namespace std;
	
	int main(){
		int n, x;
		cin >> n;
		string nama[n];
		for(int i = 0; i < n; i++){
			cin >> nama[i];
			x++;
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				cout << nama[i] << " - " << nama[j] << endl;
			}
		}
		cout << "USD " << x*3;
		return 0; 
	}

//120140048
#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    int urut;

	cin >> n;
	int Arr[n];
	for(i = 1; i <= n; i++){
	    cin >> Arr[i];
	}
	
	for(i = 1; i <= n; i++){
	    for(j = i; j <= n; j++){
	        if(Arr[i] < Arr[j]){
	            urut = Arr[j];
	            Arr[j] = Arr[i];
	            Arr[i] = urut;
	        }
	    }
	}
	
	for(i = 1; i <= n; i++){
	       cout << Arr[i] << " ";
	}
	
	return 0;
}

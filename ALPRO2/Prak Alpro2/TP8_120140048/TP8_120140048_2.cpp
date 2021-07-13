//120140048
#include <iostream>
#include <string>
using namespace std;

struct kos{
	string nama;
	int harga;
};

int main(){
    int i,j,n;
    int urut;
    
	cin >> n;
	
	kos kos[n];
	for(i = 1; i <= n; i++){
	    getline (cin, kos[i].nama);
	    getline (cin, kos[i].nama);
	    cin >> kos[i].harga;
	}
	
	for(i = 1; i <= n; i++){
	    for(j = i; j <= n; j++){
	        if(kos[i].harga > kos[j].harga){
	            urut = kos[j].harga;
	            kos[j].harga = kos[i].harga;
	            kos[i].harga = urut;
	        }
	    }
	}
	
	cout << kos[i].harga;
	
	return 0;
}

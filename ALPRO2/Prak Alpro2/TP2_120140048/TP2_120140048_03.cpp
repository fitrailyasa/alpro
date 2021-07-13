//120140048
#include <iostream>
using namespace std;

	int enkripsi(string huruf){
	  string hasil;
	  int i, jumstr, jum = 0;
	  getline(cin, huruf);
	  while (huruf[jum] != '\0'){
	    jum++;
	  }
	  jumstr = jum - 1;
	  for (i = 0; i < jum; i++){
	    hasil[i] = huruf[jumstr];
	    jumstr--;
	  }
	  hasil[i] = '\0';
	  cout << hasil;
	  return 0;
	}

	int main(){
		string huruf[1000], hasil[1000];
		
		cout << hasil(huruf);
	
	}

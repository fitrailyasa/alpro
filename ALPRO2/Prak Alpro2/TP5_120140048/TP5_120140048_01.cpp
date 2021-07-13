#include <iostream>
using namespace std;

int deret_rekursif(int x){
	if (x==1)
		return 1;
    else
        return x + deret_rekursif(x-1);
} 

int pangkat_rekursif(int x, int y){
	if (y==0)
		return 1 ;
	else 
        return x * pangkat_rekursif(x,y-1);
}


int main(){
	int x, y, n;
	string rekursif;
	
	for(int i = 0; i < n; i++){
		cin >> rekursif;
		if(rekursif == "deret"){
			cin >> x;
			cout << deret_rekursif(x) << endl;
		} else if(rekursif == "pangkat"){
			cin >> x;
			cin >> y;
			cout << pangkat_rekursif(x,y) << endl;
		}
	}
	return 0;
}




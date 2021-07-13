//120140048
#include <iostream>
using namespace std;

	int trapesium(int s1, int s2, int t){
		float luas;
		luas = 0.5*(s1+s2)*t;
	
		return luas;
	}
	
	int belahKetupat(int d1, int d2){
		float luas;
		luas = 0.5*d1*d2;
	
		return luas;
	}
	
	int lingkaran(int r){
		int luas;
		int phi = 3.14;
		luas = 0.25*phi*r*r;
	
		return luas;
	}
	
	int main()
	{
		string x;
		int s1, s2, t;
		int d1, d2;
		int r; 
		
		cin >> x;
		
	    if(x == "Trapesium"){
	    	cin >> s1;
	    	cin >> s2;
	    	cin >> t;
	    	cout << trapesium(s1, s2, t);
		}else if(x == "Belahketupat"){
			cin >> d1;
			cin >> d2;
			cout << belahKetupat(d1, d2);
		}else if(x == "Lingkaran"){
			cin >> r;
			cout << lingkaran(r);
		}
	
	    return 0;
	}

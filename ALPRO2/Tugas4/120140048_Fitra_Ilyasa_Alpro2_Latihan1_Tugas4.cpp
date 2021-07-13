//120140048
#include <iostream>
using namespace std;

	int volKerucut (float r, float t, float volk){
	    float phi = 3.14;
	    volk = phi/3 * r * r * t;
	    cout << volk;
	    return volk;
	}
	
	int main ()
	{
	    int d,t;
	    float v;
	    float phi = 3.147;
	
	    cout << "Masukan panjang diameter = ";
	    cin >> d;
	    d *= 0.5;
	    cout << "Masukan tinggi kerucut = ";
	    cin >> t;
	    cout << "Volume Kerucut = ";
	    volKerucut (d,t,v);
	    return 0;
	}



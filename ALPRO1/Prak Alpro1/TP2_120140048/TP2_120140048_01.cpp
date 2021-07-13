#include <iostream>
using namespace std;

int main(){
    int n, m, lokasi;
    string simbol;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
    	for(int j = 0; j < n; j++)
    	{
    		lokasi = i + j;
    		if (lokasi % m == 0)
    		{
    			simbol = "X ";
			} else {
				simbol = "O ";
			}
			
			cout << simbol;
		}
		cout << endl;
	}
 
    
    return 0;
}

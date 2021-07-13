#include <iostream>

using namespace std;

int main(){
	int n, m, hasil = 1, _hasil = 1;
	
	//input data
	cin >> n >> m;
	
	for (int i = 0; i < m; i++)
	{
		hasil *= n;
	}
	
	cout << hasil << endl;

	for(int i = 0; i < n; i++)
	{
		
	_hasil *= hasil;
	}
	
	cout << _hasil;
		
return 0;
}

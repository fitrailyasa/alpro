#include <iostream>

using namespace std;

int main(){
	int n, i;
	
	// input data
	cin >> n;
	
	//loop 1
	for (i = 0; i < n; i++)
	{
		cout << i;
	}

	//loop 2
	i--;
	for (int j = i; j >= 0; j--)
	{
		cout << j;
	}

    return 0;
}

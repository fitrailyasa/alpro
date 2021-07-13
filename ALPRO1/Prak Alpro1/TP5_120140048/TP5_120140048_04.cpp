#include <iostream>
using namespace std;

int a(int x, int y)
{
	return x*y;
}

int main()
{
	int n;
	cin >> n;

	while (n % 2 != 0){
		cin >> n;
	}

	int m[n];

	for (int i = 0; i < n; i++){
		cin >> m[i];
	}

	int j = 0;
	int k = n-1;
	int hasil_[n/2];
	
	for (int i = 0; i < n / 2; i++){
		hasil_[j] = a(m[j], m[k]);
		j++;
		k--;
	}
	
	cout << endl;
	for (int i = 0; i < n / 2; i++){
		cout << hasil_[i] << " ";
	}
	return 0;
}

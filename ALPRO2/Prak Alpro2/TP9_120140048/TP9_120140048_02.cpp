#include <iostream>
using namespace std;

int polapoli(int x, int y){
	if(x <= 2){
		return 0;
	}else if(y <= x-2){
		cout << y << " + ";
		return polapoli(x, y+2);
	}
}
int main(){
	int n;
	cin >> n;
	polapoli(n, 2);
	return 0;
}

//Fitra Ilyasa 120140048

#include <iostream>
using namespace std;

int main(){
	
char A[10][10];
int a, b;

	cin >> a >> b;
	
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (int j = 0 || j % 2 == 0){
				cout << "X "; 
			} else {
				cout << "O ";
			}
		}
		cout << endl;
	}
}

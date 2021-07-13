#include <iostream> //048
using namespace std;

int main()
{
	int A, B;
	int Arr_;
	
	cin >> A;
	cin >> B;
	
	 for (int i = 0; i < A; i++){
        for (int j = 0; j < B; j++){
                cin >> Arr_[i][j];
            }cout << endl;
      }
      
	
	for(int i = 0; i < A; i++)
	{
		for(int j = 0; j < B; j++)
		{
			cout << Arr_[i][j] << " ";
		}
		cout<<endl;
	}
	cout<<endl;
		for(int i = A-1; i >= 0; i--)
	{
		for(int j = 0; j < B; j++)
		{
			cout << Arr_[i][j] << " ";
		}
		cout<<endl;
	}
}


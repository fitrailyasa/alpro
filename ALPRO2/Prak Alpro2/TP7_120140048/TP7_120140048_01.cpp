//120140048
#include <iostream>
using namespace std;

int data(int *array, int size, int key)
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == key)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int size;
	cin >> size;

	int array[size];
	int key;

	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	cin >> key;

	int index = data(array, size, key);
	if (index != -1)
	{
		cout << "Angka "<<key<< " ditemukan ";
	}
	else{
		cout << "Bilangan "<<key<<" tidak ditemukan";
	}

	return 0;
}

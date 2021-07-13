#include <iostream>
#include<math.h>
using namespace std;

struct koordinat{
    int x, y;
};

int fungsiJarak(int &x){
	if(x <= 0){
        cout<<"Error";
        exit(0);
    }

    int min = 0;
    int pilih;

    koordinat data[x];

    int jarak;
    for (int i = 0; i < x; ++i)
    {
        cin >> data[i].x;
        cin >> data[i].y;

        jarak = sqrt(pow((data[i].x-0), 2) + pow((data[i].y-0), 2));

        if(jarak <= 0){
            cout<<"Error";
            exit(0);
        }

        if(i == 0)
            min = jarak;

        if(jarak < min)
        {
            min = jarak;
            pilih = i;
        }
    }

    cout << data[pilih].x << " ";
    cout << data[pilih].y;
	return x;
}

int main(){
    int x;
    int *varPointer = &x;
    cin >> x;
    fungsiJarak(x);
    return 0;
}

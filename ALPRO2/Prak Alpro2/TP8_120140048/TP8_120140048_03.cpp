#include <iostream>
using namespace std;

void tukar(float *a, float * b){
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void tukarstr(string *a, string *b){
    string temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

struct pencatur
{
    string nama;
    float nilai;
};



int main (){
    int n;
    cin >> n;
    
    pencatur catur[n];

    for (int i = 0; i < n; i++)
    {

        cin >> catur[i].nama;
        cin >> catur[i].nilai;

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (catur[j].nilai < catur[j + 1].nilai)
            {
                tukar(&catur[j].nilai, &catur[j+1].nilai);
                tukarstr(&catur[j].nama, &catur[j+1].nama);
            }
            
        }
        
    }

    string nama;
    cin >> nama;

    for (int i = 0; i < n; i++)
    {
        if (nama == catur[i].nama)
        {
            cout <<"peringkat "<< i + 1;
        }
        
    }
    
    return 0;
}

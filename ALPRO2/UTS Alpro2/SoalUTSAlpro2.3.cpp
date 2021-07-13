#include <iostream>
using namespace std;
struct karyawan{
    string nama;
    int j_anak,gaji,total,tunjangan,istri;
    int anak;
};

int main(){   
    cout<<"Ada istri x[i].istri==1/Tidak Ada Istri x[i].istri==0"<<endl;
    int n;
    cin>>n;
    karyawan x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i].nama;
        cin>>x[i].gaji;
        cin>>x[i].j_anak;
        if(x[i].j_anak>0){
            x[i].anak=1;
        }
        cin>>x[i].istri;
        x[i].tunjangan=(0.15*x[i].gaji*x[i].istri)+(0.1*x[i].anak*x[i].gaji);
        x[i].total=x[i].gaji+x[i].tunjangan;
    }
   return 0; 
}

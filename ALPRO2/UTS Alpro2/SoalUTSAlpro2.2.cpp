#include<iostream>
using namespace std;
struct karyawan{
	string nama;
	int jumlah_anak, gaji_pokok, total_gaji;
	

};
int main(){
	int n,i, tunjangan_anak=0, tunjangan_istri=0;
	
	cout<<"Masukkan Banyak Karyawan ";
	cin>>n;
	karyawan x[n];
	char istri[n];
	for(int i=0; i<n; i++){
		cout<<"Masukkan nama : ";
		cin>>x[i].nama;
		cout<<"Masukkan Jumlah Anak : ";
		cin>>x[i].jumlah_anak;
		cout<<"Apakah Punya Istrii (Y/N) : ";
		cin>>istri[i];
		cout<<"Masukkan gaji pokok : ";
		cin>>x[i].gaji_pokok;

		
	}
	if(x[i].jumlah_anak>=1){
		tunjangan_anak=(x[i].gaji_pokok*10)/100;
		if(istri[i]=='Y'|| istri[i]=='y'){
			tunjangan_istri=(x[i].gaji_pokok*15)/100;
		}
		x[i].total_gaji=x[i].gaji_pokok+tunjangan_istri+tunjangan_anak;
	}
	if(istri[i]=='Y'|| istri[i]=='y' && x[i].jumlah_anak==2 && x[i].total_gaji>3000000){
		cout<<"Nama Karyawan : "<<x[i].nama<<endl;
		cout<<"Jumlah Anak : "<<x[i].jumlah_anak<<" Orang"<<endl;
		cout<<"Punya Istri : "<<istri[i]<<endl;
		cout<<"Gaji Pokok : "<<x[i].gaji_pokok<<endl;
		cout<<"Total Gaji : "<<x[i].total_gaji<<endl;
	}
	else if(istri[i]=='N'|| istri[i]=='n' && x[i].jumlah_anak==1 && x[i].total_gaji<2000000){
		cout<<"Nama Karyawan : "<<x[i].nama<<endl;
		cout<<"Jumlah Anak : "<<x[i].jumlah_anak<<" Orang"<<endl;
		cout<<"Punya Istri : "<<istri[i]<<endl;
		cout<<"Gaji Pokok : "<<x[i].gaji_pokok<<endl;
		cout<<"Total Gaji :"<<x[i].total_gaji<<endl;
	}
	return 0;
}

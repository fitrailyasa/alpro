#include <iostream>
using namespace std;


struct jodoh_orang{
    string nama[5]={"Raditya Diki", "Atta Geledek", "Dilan Da Musibah", "Roi Ricis"}; 
    string pekerjaan[5]={"Komika","Youtuber","Artis","Pengusaha"};
    int umur[5]={35,25,21,23};
    long mahar[5]={1000000000,1546780000,1800000000,987130000};
};



int main(){
	
    jodoh_orang calon_jodoh;
    int x,y;
    cin>>calon_jodoh.nama[4];
	cin>>calon_jodoh.pekerjaan[4];
	cin>>calon_jodoh.umur[4];
	cin>>calon_jodoh.mahar[4];
    cin>>x>>y;
    
    if(calon_jodoh.umur[4] <= 0 || calon_jodoh.mahar[4]<=0 || x<=0 || y<=0 || calon_jodoh.mahar[4]<=0){
        cout<<"Error";
        exit(0);
    }
    int index=0;
    bool cek=false;
    
    for(int i=0;i<5;i++){
        if(calon_jodoh.umur[i]>=x && calon_jodoh.umur[i]<=y){
            cek=true;
            if(calon_jodoh.umur[i]>=x && calon_jodoh.umur[i]<=y){
                if(calon_jodoh.umur[i]<calon_jodoh.umur[index]){
                    index=i;
                }else if(calon_jodoh.umur[i] == calon_jodoh.umur[index] && calon_jodoh.mahar[i]>calon_jodoh.mahar[index]){
                    index=i;
                }
            }
        }
    }
    
    if(!cek){
        cout<<"Selamat mencoba lagi"<<endl;
        exit(0);
    }
    cout<<"Jodoh anda adalah"<< endl;
    cout<<"Nama : "<<calon_jodoh.nama[index]<<endl;
    cout<<"Pekerjaan : "<<calon_jodoh.pekerjaan[index]<<endl;
    cout<<"Umur : "<<calon_jodoh.umur[index]<<endl;
    cout<<"Melamarmu dengan mahar : Rp. "<<calon_jodoh.mahar[index]<<" ,-"<<endl;
    

    return 0;
}

#include<iostream>
using namespace std;
int main(){
      int sisi;
      cout<<"Menghitung luas persegi"<<endl;
      cout<<"Sisi = ";cin>>sisi;

      cout<<"Luas persegi = "<<sisi*sisi<<endl;
      
      cout<<endl;
      
	  float jari;
      const float phi = 3.142857; //konstanta
     
      cout<<"Menghitung luas lingkaran"<<endl;
      cout<<"Jari-jari = "; cin>>jari;
      cout<<"Luas lingkaran = "<<phi * jari * jari<<endl;
      
      cout<<endl;
      
      float alas,tinggi;
      cout<<"Menghitung luas segitiga"<<endl;

      cout<<"Alas = ";cin>>alas;
      cout<<"Tinggi = ";cin>>tinggi;


      cout<<"Luas segitiga = "<<0.5 * alas * tinggi;


}

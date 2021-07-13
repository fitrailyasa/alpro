//Fitra Ilyasa_120140048
#include <iostream>
using namespace std; 
  
   int main() {
      
       int angka, jumlah, max, min;

       cout << "Masukkan jumlah bilangan: ";
	   cin >> jumlah;
       cout << endl;
    
       for (int i = 0; i < jumlah; i++) {
     
       cout << "Masukkan Angka ke  " << i + 1 << " : "; cin >> angka;
   
       if ( i == 1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else {}
           }
    
       cout << endl;
       cout << "Nilai terkecil           : " <<  min << endl;
       cout << "Nilai terbesar           : " <<  max << endl;
    
       return 0;
       }

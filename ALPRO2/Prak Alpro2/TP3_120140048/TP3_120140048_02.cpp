 #include <iostream>
using namespace std;

struct mobil{
    string merk, tipe, warna;
    int tahun;
};


int main() {
    int n, harga;
    cin >> n;
    mobil m[n];
    
    
    for (int x = 0; x < n; x++){
        cin >> m[x].merk;
        cin >> m[x].tipe;
        cin >> m[x].tahun;
        cin >> m[x].warna;
    }
    for (int x = 0; x < n; x++){
        cout << "Merek Mobil: " << m[x].merk;
        cout << " Tipe Mobil: " << m[x].tipe;
        cout << " Tahun Terbit: " << m[x].tahun;
        cout << " Warna: " << m[x].warna;
        if(m[x].tipe == "sedan"){
            harga = 150*(90%(2021-m[x].tahun))*3;
        } else if(m[x].tipe == "mini_bus"){
            harga = 150*(90%(2021-m[x].tahun))*2;
        } else if(m[x].tipe == "pick_up"){
            harga = 150*(90%(2021-m[x].tahun))*1;
        } else {
           harga = 0;
        }
        
        cout << " Harga: " << harga << " juta.";
    }
	return 0; 
}

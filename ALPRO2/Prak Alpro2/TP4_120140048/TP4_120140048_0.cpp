#include <iostream>
using namespace std;
  
string enkripsi(string teks, int s){
    string hasil = "";
  
    for (int i = 0; i < teks.length(); i++)
    {
        if (isupper(teks[i]))
            hasil += char(int(teks[i]+s-65)%26 +65);
    else
        hasil += char(int(teks[i]+s-97)%26 +97);
    }
  
    return hasil;
}

string dekripsi(string teks, int s){
    string hasil = "";
  
    for (int i = 0; i < teks.length(); i++)
    {
        if (isupper(teks[i]))
            hasil += char(int(teks[i]-s+65)%26 -65);
    else
        hasil += char(int(teks[i]-s+97)%26 -97);
    }
  
    return hasil;
}

int main(){
    string teks;
    int s;
    string x;
    
    cin >> x;
    cin >> s;
    getline (cin, teks);
    getline (cin, teks);
    cout << x << endl;
    cout << s << endl;
    if ( x == "encrypt"){
    	cout << enkripsi(teks, s);
	} else if ( x == "decrypt"){
    	cout << dekripsi(teks, s);
	}
    
    
    return 0;
}

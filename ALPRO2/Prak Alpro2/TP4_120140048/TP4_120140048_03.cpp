#include <iostream>
using namespace std;

string abjad = "abcdefghijklmnopqrstuvwxyz";
int indeks;

int Encrypt(char a, char b, int c) {    
    for ( int i = 0; i < 26; i++ ) {
        if ( a == abjad[i] ) {
            indeks = ( i + c );
            while (indeks > 25) {
                indeks = indeks - 26;
            }
            return indeks;
        }
    }
}

int Decrypt(char a, char b, int c) {
    for ( int i = 25; i >= 0; i-- ) {
        if ( a == abjad[i] ) {
            indeks = i - c;
            while ( indeks < 0 ) {
                indeks = indeks + 26;
            }
            return indeks;
       }
    }
}

int main () {
    string pilihan, kalimat;
    int shift, penukaran;
    cin >> pilihan;
    cin >> shift;
    getline(cin >> ws, kalimat);
    penukaran = shift % 26;
    int n = kalimat.length();
    if ( pilihan == "encrypt" ) {
        for ( int i = 0; i < n; i++ ) {
            if ( kalimat[i] == ' ' ) {
                continue;
            }
            else {
                kalimat[i] = abjad[Encrypt(kalimat[i], n, penukaran)];
            }
        }    
    }
    else if ( pilihan == "decrypt" ) {
         for ( int i = 0; i < n; i++ ) {
             if ( kalimat[i] == ' ' ) {
                continue;
            }
            else {
                kalimat[i] = abjad[Decrypt(kalimat[i], n, penukaran)];
            }
        }
    }
    for ( int i = 0; i < n; i++ ) {
        cout << kalimat[i];
    }
    cout << endl;
	system("pause");
	return 0;
}

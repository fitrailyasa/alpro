#include <iostream>
using namespace std;

string abjad = "abcdefghijklmnopqrstuvwxyz";
int indeks;

int encrypt(char &a, char &b, int &c) {    
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

int decrypt(char &a, char &b, int &c) {
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
    int n;
    int *shiftPointer = &shift;
    
    cin >> pilihan;
    cin >> shift;
    getline(cin >> ws, kalimat);
    penukaran = shift % 26;
	n = kalimat.length();
  
    if ( pilihan == "encrypt" ) {
        for ( int i = 0; i < n; i++ ) {
            if ( kalimat[i] == ' ' ) {
                continue;
            }
            else {
                kalimat[i] = abjad[encrypt(kalimat[i], n, penukaran)];
            }
        }    
    }
    else if ( pilihan == "decrypt" ) {
         for ( int i = 0; i < n; i++ ) {
             if ( kalimat[i] == ' ' ) {
                continue;
            }
            else {
                kalimat[i] = abjad[decrypt(kalimat[i], n, penukaran)];
            }
        }
    }
    for ( int i = 0; i < n; i++ ) {
        cout << kalimat[i];
    }
    cout << endl;

	return 0;
}

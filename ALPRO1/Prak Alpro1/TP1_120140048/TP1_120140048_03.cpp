#include <iostream>
using namespace std;

int main(){
    string nama = "qwerty";
    string nim = "12345";
    string username;
    string password;
    
    cin >> username;
    cin >> password;
    
    if(username == nama && password == nim){
    	cout << "Login sukses";
	}else {
    	cout << "Login gagal";
	}
    
    
  
    
    
    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int main( void )
{

 bool authentication = false;
 char cUsername[ 10 ];
 char cPassword[ 10 ];

 cout<< "before accepting values"<<endl;
 cout<< "username address"<< &cUsername << endl;
 cout<< "username value:"<< cUsername << endl;
 cout<< "Password address"<< &cPassword << endl;
 cout<< "Password value:"<< cPassword << endl;
 cout << "authentication addr: "<< &authentication <<endl;
 cout << "authentication value: "<< authentication <<endl;
 
 cout <<"Enter username:";
 cin >> cUsername;

 cout<< "After accepting values"<<endl;
 cout<< "username address"<< &cUsername << endl;
 cout<< "username value:"<< cUsername << endl;
 cout<< "Password address"<< &cPassword << endl;
 cout<< "Password value:"<< cPassword << endl;
 cout << "authentication addr: "<< &authentication <<endl;
 cout << "authentication value: "<< authentication <<endl;
 
 cout << "Password: " <<endl;
 cin >> cPassword;

 cout<< "After accepting both uname & password values"<<endl;
 cout<< "username value:"<< cUsername << endl;
 cout<< "Password value:"<< cPassword << endl;
 cout << "authentication value: "<< authentication <<endl;
 
 if( strcmp( cUsername, "admin" ) == 0 && strcmp( cPassword, "adminpass" ) == 0 )
 {
  authentication = true;
  cout <<"Authentication variable is set"<< authentication <<endl;
 }
 if( authentication )
 {
  cout << "Access granted\n" <<endl;
  ///cout <<"Authentication variable is set" << authentication;
 }
 else
 {
  cout << "Wrong username and password\n";
 }

 return ( 0 );
}
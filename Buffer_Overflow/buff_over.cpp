#include <iostream>
#include <string.h>
using namespace std;
int main( void )
{
 bool authentication = false;
 char cUsername[ 10 ];
 char cPassword[ 10 ];
 cout << "Username: " <<endl;
 cin >> cUsername;
 cout << "Pass: " <<endl;
 cin >> cPassword;
 if( strcmp( cUsername, "admin" ) == 0 && strcmp( cPassword, "adminpass" ) == 0 )
 {
  authentication = true;
 // cout << authentication <<endl;
 }
 if( authentication )
 {
  cout << "Access granted\n" <<endl;
  //cout << authentication;
 }
 else
 {
  cout << "Wrong username and password\n";
 }
 return ( 0 );
}
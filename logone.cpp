#include <iostream>
#include <string>

#define USER "Admin001"
#define PASS "19809"

using namespace std;

int main(){

string user, password;

int contador = 0;

bool input = false;

do{
	cout<< "\t\t\tLOGIN OF USER"<<endl;
	cout<< "\t\t\t----------------"<<endl;
	//username
	
	cout<<"\n\tUSERNAME: ";
	getline(cin, user);
	
	//password
	cout<<"\tPASSWORD: ";
	getline(cin, password);
	
	//conditions
	if (user == USER && password == PASS){
		input = true;	
	} else {
		cout<<"\n\tThe username or password are incorrect. Please try again in a few seconds."<<endl;
		contador++;
		}
   } while (input == false && contador < 3);   
	
   	if (input == false){
		cout <<"\n\tUnable to enter the system. Please try again in 24 hours, thank you.\n"<<endl;
	} else {
		cout<<"\n\tWelcome To System"<<endl;
		}
	
	
	
	cin.get();
	return 0;
}

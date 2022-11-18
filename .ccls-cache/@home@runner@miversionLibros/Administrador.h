#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

class Account{
public:
	void login(int mode){
		system("cls");
		int count;
		string userId;
		string password; 
		string id;
		string pass; 
		string cad = "library/";

		cout << "\tPlease enter the username and password: " << endl;
		cout << "\t\tUSERNAME: ";
		cin >> userId;
		cout << "\t\tPASSWORD: ";
		cin >> password;

		if(mode==1){
			cad += "administrator/adminInfo.txt";
		}else if(mode==2){
			cad += "students/studentsInfo.txt";
		}
		ifstream input(cad);

		while(input>>id>>pass){
			if(id==userId && pass==password){
				count=1;
				system("cls");
			}
		}
		input.close();

		if(count==1){
			cout<<userId<<"\n Your LOGIN is successful \n Thanks for logging in \n";
			//loginManager();
		} else{
			cout<<"\n LOGIN ERROR \n Please check your username and password\n";
			//loginManager();
		}
	}
}
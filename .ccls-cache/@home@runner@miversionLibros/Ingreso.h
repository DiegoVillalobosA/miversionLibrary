#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

class ingresar{
public:
  void loginAdmin();
  void registrationAdmin();
  void forgotAdmin();
  void loginStudent();
  void registrationStudent();
  void forgotStudent();
};


void ingresar::loginAdmin(){
  system("cls");
  int verificacion;
  string username;
  string password; 
  string id;
  string pass; 
  string cad = "adminInfo.txt";

  cout << "\tPlease enter the username and password: " << endl;
  cout << "\t\tUSERNAME: ";
  cin >> username;
  cout << "\t\tPASSWORD: ";
  cin >> password;


  ifstream input(cad);

  while(input>>id>>pass){
    if(id==username && pass==password){
      verificacion=1;
      system("cls");
    }
  }
  input.close();

  if(verificacion==1){
    cout<<username<<",   Your LOGIN is successful \n Thanks for logging in \n";

  } else{
    cout<<"\n LOGIN ERROR \n Please check your username and password\n";

  }
}

void ingresar::registrationAdmin(){
  string ruserId;
  string rpassword; 
  string rid;
  string rpass;
  string cad = "adminInfo.txt";
  system("cls");
  cout<<"\t\tEnter the username: ";
  cin>>ruserId;
  cout<<"\t\tEnter the password: ";
  cin>>rpassword;


  ofstream data(cad, ios::app);

  data<<ruserId;
  data<<' ';
  data<<rpassword;
  data<<'\n';    
  system("cls");
  cout<<"\n\t\t\t Registration is successful  \n";
  data.close();

}

void ingresar::forgotAdmin(){
  string cad = "adminInfo.txt";
      int count{0};
      string suserId;
      string sId;
      string spass;
      cout<<"\n\t\tEnter the username you remember: ";
      cin>>suserId;


      ifstream data(cad);
      while(data>>sId>>spass){
        if(sId==suserId){
          count=1;
          break;
        }
      }
      data.close();

      if(count==1){
        cout<<"\n\n Your account is found! \n";
        cout<<"\n\n Your password is: "<<spass;

      }else{
        cout<<"\n\t Sorry! your account is not found! \n"; 

      }
}








void ingresar::loginStudent(){
  system("cls");
  int verificacion;
  string username;
  string password; 
  string id;
  string pass; 
  string cad = "studentInfo.txt";

  cout << "\tPlease enter the username and password: " << endl;
  cout << "\t\tUSERNAME: ";
  cin >> username;
  cout << "\t\tPASSWORD: ";
  cin >> password;


  ifstream input(cad);

  while(input>>id>>pass){
    if(id==username && pass==password){
      verificacion=1;
      system("cls");
    }
  }
  input.close();

  if(verificacion==1){
    cout<<username<<",   Your LOGIN is successful \n Thanks for logging in \n";

  } else{
    cout<<"\n LOGIN ERROR \n Please check your username and password\n";

  }
}

void ingresar::registrationStudent(){
  string ruserId;
  string rpassword; 
  string rid;
  string rpass;
  string cad = "studentInfo.txt";
  system("cls");
  cout<<"\t\tEnter the username: ";
  cin>>ruserId;
  cout<<"\t\tEnter the password: ";
  cin>>rpassword;


  ofstream data(cad, ios::app);

  data<<ruserId;
  data<<' ';
  data<<rpassword;
  data<<'\n';    
  system("cls");
  cout<<"\n\t\t\t Registration is successful  \n";
  data.close();

}

void ingresar::forgotStudent(){
  string cad = "studentInfo.txt";
      int count{0};
      string suserId;
      string sId;
      string spass;
      cout<<"\n\t\tEnter the username you remember: ";
      cin>>suserId;


      ifstream data(cad);
      while(data>>sId>>spass){
        if(sId==suserId){
          count=1;
          break;
        }
      }
      data.close();

      if(count==1){
        cout<<"\n\n Your account is found! \n";
        cout<<"\n\n Your password is: "<<spass;

      }else{
        cout<<"\n\t Sorry! your account is not found! \n"; 

      }
}
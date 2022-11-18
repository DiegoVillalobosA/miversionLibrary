#include <bits/stdc++.h>
#include <unistd.h>

#include "FuncionesAdicionales.h"
#include "BookData.h"
#pragma once
using namespace std;


class Persona{
  public:
  void verListaDeLibros();
  void buscarBook();

  private:
  string id;
  string password;
};
//---------------------------------------------------------------------------------------------------------------
  void Persona::verListaDeLibros(){ifstream file;
     std::cout<<"  _______________________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                                | "<<std::endl;
    std::cout<<" |     VIEW BOOK LIST----------------------------------------                     | "<<std::endl;
    std::cout<<" |________________________________________________________________________________| "<<std::endl;
    std::cout<<"\n\t ID  \t  Title  \t  Author \t  Gender  \t  pages"<<std::endl;
    std::cout<<"  --------------------------------------------------------------------------------"<<std::endl;
    BookData book;

    file.open("dataBook.txt", ios::in);
    if(file.is_open()){ //para comprobar que el archivo no existe
    file>>book.bookID;
    while(!file.eof()){
        file>>book.bookTitle;
        file>>book.bookAuthor;
        file>>book.bookGender;
        file>>book.numberPage;
        
        cout<<"\t"<<book.bookID<<"  \t  ";
        cout<<book.bookTitle<<"  \t  ";
        cout<<book.bookAuthor<<"  \t  ";
        cout<<book.bookGender<<"  \t  ";
        cout<<book.numberPage<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;

        file>>book.bookID;
    }
    file.close();
    }else{
        cout<<"Error"<<endl;
    }
  }


void Persona::buscarBook(){
    system("cls");
    ifstream file;
    int option;
    std::cout<<"  _________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |     SEARCH BOOK----------------------------------------         | "<<std::endl;
    std::cout<<" |_________________________________________________________________| "<<std::endl;
    cout<< "(1) Search by bookID"; cout << endl;
    cout<< "(2) Search by Author"; cout << endl;
    cout<<"Choose a method for search: ";
    cin >>option;
    cout<<std::endl;
    if(option == 1){
      file.open("dataBook.txt", ios::in);
      BookData book;
      string auxcode;
      bool found = false;
      cout<<"Enter Book ID: ";
      cin>>auxcode;
      file>>book.bookID;
      while(!file.eof()&& !found){
          file>>book.bookTitle;
          file>>book.bookAuthor;
          file>>book.bookGender;
          file>>book.numberPage;
          
          if(book.bookID == auxcode){
              cout<<" > Book ID: "<<book.bookID<<endl;
              cout<<" > Book Title: "<< book.bookTitle<<endl;
              cout<<" > Author's Name: "<<book.bookAuthor<<endl;
               cout<<" > Book Gender: "<<book.bookGender<<endl;
              cout<<" > Number of pages: "<<book.numberPage<<endl;
              cout<<".............................................................."<<endl;
              found = true;
          }
          file>>book.bookID;  
      }
      file.close();
      if(!found)
          cout<<"Data not found!..."<<endl;
      system("pause");
    }
  if(option == 2){
      file.open("dataBook.txt", ios::in);
      BookData book;
      string auxAuthor;
      bool found = false;
      cout<<"Enter an Author: ";
      cin>>auxAuthor;
      file>>book.bookAuthor;
      while(!file.eof()){
          file>>book.bookTitle;
          file>>book.bookAuthor;
          file>>book.bookGender;
          file>>book.numberPage;
          
          if(book.bookAuthor == auxAuthor){
              cout<<" > Book ID: "<<book.bookID<<endl;
              cout<<" > Book Title: "<< book.bookTitle<<endl;
              cout<<" > Author's Name: "<<book.bookAuthor<<endl;
               cout<<" > Book Gender: "<<book.bookGender<<endl;
              cout<<" > Number of pages: "<<book.numberPage<<endl;
              cout<<".............................................................."<<endl;
              endl3();
          }
          file>>book.bookAuthor;  
      }
      file.close();
      if(!found)
          cout<<"Data not found!..."<<endl;
      system("pause");
  }
}
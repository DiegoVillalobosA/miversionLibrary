#include <bits/stdc++.h>
#include <unistd.h>

#include "Persona.h"
#include "FuncionesAdicionales.h"
#include "BookData.h"
#pragma once

using namespace std;

class Admin : public Persona{
  public:
  void agregarBook();
  void modificarDetalle();
  friend class ingresar;

  private:
  static string superSecretPassword;
};

string Admin::superSecretPassword = "202215";

void Admin::agregarBook(){
    system("cls");
    ofstream ofp;

    std::cout<<"  _________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |     ADD BOOK----------------------------------------            | "<<std::endl;
    std::cout<<" |_________________________________________________________________| "<<std::endl;

    ofp.open("dataBook.txt", ios :: out| ios :: app);

    if(!ofp){
        cerr<<"Unable to open file"<<endl;
        return;
    }
    BookData book;
    cout<<" > Enter book ID: "; cin>>book.bookID;
    cout<<" > Enter book Title: "; cin>>book.bookTitle;
    cout<<" > Enter Author's Name: "; cin>>book.bookAuthor;
    cout<<" > Enter book Gender: "; cin>>book.bookGender;
    cout<<" > Enter number page book: "; cin>>book.numberPage;

    ofp<<book.bookID<<" "<<book.bookTitle<<" "<<book.bookAuthor<<" "<<book.bookGender<<" "<<book.numberPage<<endl;
    //ofp.write((char*)&book,sizeof(BookData));
    ofp.close();    

}




void Admin::modificarDetalle(){
    system("cls");
    ifstream file;
    std::cout<<"  _________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |     CHANGE DETAIL BOOK----------------------------------------  | "<<std::endl;
    std::cout<<" |_________________________________________________________________| "<<std::endl;
    file.open("dataBook.txt", ios::in);
    BookData book;
    string auxcode;
    string auxtitle;
    ofstream aux("auxiliar.txt", ios::out);
    if(file.is_open()){
        cout<<"Enter Book ID: ";
        cin>>auxcode;
        file>>book.bookID;
        while(!file.eof()){
            file>>book.bookTitle;
            file>>book.bookAuthor;
            file>>book.bookGender;
            file>>book.numberPage;

            if(book.bookID == auxcode){
                cout<<"Enter new Title: ";
                cin>>auxtitle;

                aux<<book.bookID<<" "<<auxtitle<<" "<<book.bookAuthor<<" "<<book.bookGender<<" "<<book.numberPage<<"\n";
                //aux<<nameaux<<" "<<surname<<" "<<code<<"\n";

            }else{
                aux<<book.bookID<<" "<<book.bookTitle<<" "<<book.bookAuthor<<" "<<book.bookGender<<" "<<book.numberPage<<endl;
                //aux<<name<<" "<<surname<<" "<<code<<"\n";
            }
            file>>book.bookID;
        }
        file.close();
        aux.close();
    }
    else{
        cout<<"Error FILE!"<<endl;
    }

    remove("dataBook.txt");
    rename("auxiliar.txt","dataBook.txt");

}
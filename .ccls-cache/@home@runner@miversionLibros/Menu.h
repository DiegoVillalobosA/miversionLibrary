#include <bits/stdc++.h>
#include <unistd.h>

#pragma once
using namespace std;


class Menu {
    public:
    
    void mainMenu();
    void menuAdminstrator();
    void menuStudent(); 
    void menuLogin();
};

void Menu::mainMenu(){

    std::cout<<"  _________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |          WELCOME TO LIBRARY MANAGEMENT SYSTEM                   | "<<std::endl;
    std::cout<<" |_________________________________________________________________| "<<std::endl;

    std::cout<<"  _________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |     LOGIN-------------------------------------------------      | "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |          Type User:                                             | "<<std::endl;
    std::cout<<" |          (0) Quit                                               | "<<std::endl;
    std::cout<<" |          (1) Administrator                                      | "<<std::endl;
    std::cout<<" |          (2) Student                                            | "<<std::endl;
    std::cout<<" |_________________________________________________________________| "<<std::endl;
    //std::cout<<"\n\tchoose an option:\t"<<std::endl;

}


void Menu::menuAdminstrator(){
    std::cout<<"  _________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |     ADMINISTRATOR-----------------------------------            | "<<std::endl;
    std::cout<<" |_________________________________________________________________| "<<std::endl;
    std::cout<<"\n\t[1] Add Book:\t"<<std::endl;
    std::cout<<"\t[2] View All Book List\t"<<std::endl;
    std::cout<<"\t[3] Search Book \t"<<std::endl;
    std::cout<<"\t[4] Modify Details Book\t"<<std::endl;
    std::cout<<"\t[5] Back\t"<<std::endl;
    

}

void Menu::menuLogin(){
    std::cout<<"  _________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |     WELCOME-----------------------------------------------      | "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |          (1) Log in                                             | "<<std::endl;
    std::cout<<" |          (2) Create Account                                     | "<<std::endl;
    std::cout<<" |          (3) I Forgot My Password !!                            | "<<std::endl;
    std::cout<<" |_________________________________________________________________| "<<std::endl;
    //std::cout<<"\n\tchoose an option:\t"<<std::endl;    
}





void Menu::menuStudent(){
    std::cout<<"  _________________________________________________________________  "<<std::endl;
    std::cout<<" |                                                                 | "<<std::endl;
    std::cout<<" |     STUDENT-----------------------------------------            | "<<std::endl;
    std::cout<<" |_________________________________________________________________| "<<std::endl;
    std::cout<<"\n\t[1] View All Book List\t"<<std::endl;
    std::cout<<"\t[2] Search Book \t"<<std::endl;
    std::cout<<"\t[5] Back\t"<<std::endl;
}
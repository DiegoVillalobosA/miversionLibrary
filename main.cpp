#include <bits/stdc++.h>
#include <unistd.h>

#include "BookData.h"
#include "FuncionesAdicionales.h"
#include "Ingreso.h"
#include "Menu.h"
#include "Persona.h"
#include "PersonaAdmin.h"
#include "PersonaEstudiante.h"
using namespace std;

int main() {
  Menu menu;
  Persona persona;
  ingresar ingresar;
  int choice;
  int option;
  int forgotOption;
  int dentroDePrograma{0};

  do {
    system("cls");
    menu.mainMenu();
    std::cout << "\n\tchoose an option: "; //--------------ELEGIR__ADMIN_STUDENT
    cin >> choice;
    switch (choice) {
    case 1: {
      system("cls");
      menu.menuLogin();
      std::cout << "\n\tchoose an option: "; //--------------ELEGIR__LOG_CREATE
      cin >> choice;
      switch (choice) {
      case 1:
        ingresar.loginAdmin();
        dentroDePrograma=1;
        endl3();
        break;
      case 2:
        ingresar.registrationAdmin();
        endl3();
        break;
      case 3:
        ingresar.forgotAdmin();
        endl3();
        break;

      default:
        cout << "Wrong input recieved!" << endl;
      }
      if(dentroDePrograma==1){
        menu.menuAdminstrator();
        std::cout << "\n\tchoose an option: ";
        cin >> choice;
        Admin admin;
        switch (choice) {
        case 1:
          admin.agregarBook();
          endl3();
          break;
        case 2:
          admin.verListaDeLibros();
          endl3();
          break;
        case 3:
          admin.buscarBook();
          endl3();
          break;
        case 4:
          admin.modificarDetalle();
          endl3();
          break;
  
        default:
          cout << "Wrong input recieved!" << endl;
        }
      }
      break;
    }

    case 2:
      system("cls");
      menu.menuLogin();
      std::cout << "\n\tchoose an option: "; //--------------ELEGIR__LOG_CREATE
      cin >> choice;
      switch (choice) {
      case 1:
        ingresar.loginStudent();
        dentroDePrograma=1;
        endl3();
        break;
      case 2:
        ingresar.registrationStudent();
        endl3();
        break;
      case 3:
        ingresar.forgotStudent();
        endl3();
        break;

      default:
        cout << "Wrong input recieved!" << endl;
      }
      if(dentroDePrograma==1){
        menu.menuStudent();
        std::cout << "\n\tchoose an option: ";
        cin >> choice;
        Student student;
        switch (choice) {
        case 1:
          student.verListaDeLibros();
          endl3();
          break;
        case 2:
          student.buscarBook();
          endl3();
          break;
  
        default:
          cout << "Wrong input recieved!" << endl;
        }
      }
      break;
    }

  } while (choice != 0);

  return 0;
}
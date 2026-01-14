#include "Pessoa.h"
#include <iostream>
using namespace std;

Pessoa::Pessoa(int t, std::string n, std::string tel, std::string c)
{
    tipo = t;
    nome = n;
    telelefone = tel;
    cpf = c;
}

void Pessoa::exibePessoa(){
    cout << nome << ", tel: " << telelefone;
    if (tipo = 2){
        cout << " cpf: " << cpf <<endl;
    } else {
        cout << endl;
    }

}

/*void Pessoa::salvaPessoa(fstream &fp){
     fp << tipo << endl;
     fp << nome << endl
     fp << telelefone << endl;
    if (tipo = 2){
        fp << " cpf: " << cpf <<endl;
    } else {
        fp << endl;
    }

*/




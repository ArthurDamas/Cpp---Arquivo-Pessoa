#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

class Pessoa
{
    public:
        Pessoa(int t, std::string n, std::string tel, std::string c = "");
        //virtual ~Pessoa();
        void exibePessoa();
       // void salvaPessoa(std::fstream &fp);

    private:
        int tipo;
        std::string nome;
        std::string telelefone;
        std::string cpf;
};

#endif // PESSOA_H

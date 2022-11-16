#include "usuario.h"

Usuario::Usuario(){
    nome = Nome();
    matricula = Matricula();
    senha = Senha();
};

string Usuario::getNome(){
    return nome.getNome();
};

void Usuario::setNome(string vNome){
    this->nome.setNome(vNome);
};

string Usuario::getMatricula(){
    return matricula.getMatricula();
};

void Usuario::setMatricula(string vMatricula){
    this->matricula.setMatricula(vMatricula);
};

string Usuario::getSenha(){
    return senha.getSenha();
};

void Usuario::setSenha(string vSenha){
    this->senha.setSenha(vSenha);
};

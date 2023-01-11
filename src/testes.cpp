#include "testes.h"
#include <iostream>

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = true;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testeSucesso(){
    try{
        codigo->setValor("12345678917");
        if (codigo->getValor() != "12345678917")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUCodigo::testeFalha(){
    try{
        codigo->setValor("12345678910");
        estado = false;
    } catch (...) {
        if (codigo->getValor() == "12345678910")
            estado = false;
    }
}

bool TUCodigo::run(){
    setUp();
    testeSucesso();
    testeFalha();
    tearDown();
    return estado;
}

void TUData::setUp(){
    data = new Data();
    estado = true;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testeSucesso(){
    try{
        data->setValor("12-12-12");
        if (data->getValor() != "12-12-12")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUData::testeFalha(){
    try{
        data->setValor("32-13-15");
        estado = false;
    } catch (...) {
        if (data->getValor() == "32-13-15")
            estado = false;
    }
}

bool TUData::run(){
    setUp();
    testeSucesso();
    testeFalha();
    tearDown();
    return estado;
}

void TUDisciplina::setUp(){
    disc = new Disciplina();
    estado = true;
}

void TUDisciplina::tearDown(){
    delete disc;
}

void TUDisciplina::testeSucesso(){
    try{
        disc->setValor("Desenvolvimento");
        if (disc->getValor() != "Desenvolvimento")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUDisciplina::testeFalha(){
    try{
        disc->setValor("Tecnicas de programacao 1");
        estado = false;
    } catch (...) {
        if (disc->getValor() == "Tecnicas de programacao 1")
            estado = false;
    }
}

bool TUDisciplina::run(){
    setUp();
    testeSucesso();
    testeFalha();
    tearDown();
    return estado;
}

void TUMatricula::setUp(){
    mat = new Matricula();
    estado = true;
}

void TUMatricula::tearDown(){
    delete mat;
}

void TUMatricula::testeSucesso(){
    try{
        mat->setValor("ABCD1234");
        if (mat->getValor() != "ABCD1234")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUMatricula::testeFalha(){
    try{
        mat->setValor("12345678");
        estado = false;
    } catch (...) {
        if (mat->getValor() == "12345678")
            estado = false;
    }
}

bool TUMatricula::run(){
    setUp();
    testeSucesso();
    testeFalha();
    tearDown();
    return estado;
}

void TUNome::setUp(){
    nome = new Nome();
    estado = true;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testeSucesso(){
    try{
        nome->setValor("Jose Silva Souza");
        if (nome->getValor() != "Jose Silva Souza")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUNome::testeFalha(){
    try{
        nome->setValor("Cleiton");
        estado = false;
    } catch (...) {
        if (nome->getValor() == "Cleiton")
            estado = false;
    }
}

bool TUNome::run(){
    setUp();
    testeSucesso();
    testeFalha();
    tearDown();
    return estado;
}

void TUSenha::setUp(){
    senha = new Senha();
    estado = true;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testeSucesso(){
    try{
        senha->setValor("1ABCD2");
        if (senha->getValor() != "1ABCD2")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUSenha::testeFalha(){
    try{
        senha->setValor("123456");
        estado = false;
    } catch (...) {
        if (senha->getValor() == "123456")
            estado = false;
    }
}

bool TUSenha::run(){
    setUp();
    testeSucesso();
    testeFalha();
    tearDown();
    return estado;
}

void TUTexto::setUp(){
    texto = new Texto();
    estado = true;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testeSucesso(){
    try{
        texto->setValor("bla bla bla bla");
        if (texto->getValor() != "bla bla bla bla")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUTexto::testeFalha(){
    try{
        texto->setValor("bla");
        estado = false;
    } catch (...) {
        if (texto->getValor() == "bla")
            estado = false;
    }
}

bool TUTexto::run(){
    setUp();
    testeSucesso();
    testeFalha();
    tearDown();
    return estado;
}

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = true;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testeSucesso(){
    Nome nome;
    Matricula mat;
    Senha senha;

    try {
        nome.setValor("Jose Silva Souza");
        mat.setValor("ABCD1234");
        senha.setValor("A1B2CD");

        usuario->setMatricula(mat);
        usuario->setNome(nome);
        usuario->setSenha(senha);
    } catch (...) {
        estado = false;
    }

    if (usuario->getMatricula().getValor() != "ABCD1234")
        estado = false;
    if (usuario->getNome().getValor() != "Jose Silva Souza")
        estado = false;
    if (usuario->getSenha().getValor() != "A1B2CD")
        estado = false;
}

bool TUUsuario::run(){
    setUp();
    testeSucesso();
    tearDown();
    return estado;
}

void TUTarefa::setUp(){
    tarefa = new Tarefa();
    estado = true;
}

void TUTarefa::tearDown(){
    delete tarefa;
}

void TUTarefa::testeSucesso(){
    Texto nome;
    Codigo codigo;
    Data inicio;
    Data termino;
    Disciplina disc;

    try{
        nome.setValor("Desenvolver classes");
        codigo.setValor("12345678917");
        inicio.setValor("12-12-12");
        termino.setValor("12-12-13");
        disc.setValor("Arquitetura");

        tarefa->setNome(nome);
        tarefa->setCodigo(codigo);
        tarefa->setInicio(inicio);
        tarefa->setTermino(termino);
        tarefa->setDisciplina(disc);
    } catch(...){
        estado = false;
    }

    if (tarefa->getNome().getValor() != "Desenvolver classes")
        estado = false;
    if (tarefa->getCodigo().getValor() != "12345678917")
        estado = false;
    if (tarefa->getInicio().getValor() != "12-12-12")
        estado = false;
    if (tarefa->getTermino().getValor() != "12-12-13")
        estado = false;
    if (tarefa->getDisciplina().getValor() != "Arquitetura")
        estado = false;
}

bool TUTarefa::run(){
    setUp();
    testeSucesso();
    tearDown();
    return estado;
}

void TUProjeto::setUp(){
    projeto = new Projeto();
    estado = true;
}

void TUProjeto::tearDown(){
    delete projeto;
}

void TUProjeto::testeSucesso(){
    Texto nome;
    Codigo codigo;
    Texto descricao;

    try {
        nome.setValor("texto valido");
        codigo.setValor("12345678917");
        descricao.setValor("texto valido");

        projeto->setNome(nome);
        projeto->setCodigo(codigo);
        projeto->setDescricao(descricao);
    } catch (...) {
        estado = false;
    }

    if (projeto->getNome().getValor() != "texto valido")
        estado = false;
    if (projeto->getCodigo().getValor() != "12345678917")
        estado = false;
    if (projeto->getDescricao().getValor() != "texto valido")
        estado = false;
}

bool TUProjeto::run(){
    setUp();
    testeSucesso();
    tearDown();
    return estado;
}

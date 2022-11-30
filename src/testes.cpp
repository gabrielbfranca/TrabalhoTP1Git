#include "testes.h"

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = true;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testeSucesso(){
    try{
        codigo->setCodigo("12345678917");
        if (codigo->getCodigo() != "12345678917")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUCodigo::testeFalha(){
    try{
        codigo->setCodigo("12345678910");
        estado = false;
    } catch (...) {
        if (codigo->getCodigo() == "12345678910")
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
        data->setData("12-12-12");
        if (data->getData() != "12-12-12")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUData::testeFalha(){
    try{
        data->setData("32-13-15");
        estado = false;
    } catch (...) {
        if (data->getData() == "32-13-15")
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
        disc->setDisciplina("Desenvolvimento");
        if (disc->getDisciplina() != "Desenvolvimento")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUDisciplina::testeFalha(){
    try{
        disc->setDisciplina("Tecnicas de programacao 1");
        estado = false;
    } catch (...) {
        if (disc->getDisciplina() == "Tecnicas de programacao 1")
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
        mat->setMatricula("ABCD1234");
        if (mat->getMatricula() != "ABCD1234")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUMatricula::testeFalha(){
    try{
        mat->setMatricula("12345678");
        estado = false;
    } catch (...) {
        if (mat->getMatricula() == "12345678")
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
        nome->setNome("Jose Silva Souza");
        if (nome->getNome() != "Jose Silva Souza")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUNome::testeFalha(){
    try{
        nome->setNome("Cleiton");
        estado = false;
    } catch (...) {
        if (nome->getNome() == "Cleiton")
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
        senha->setSenha("1ABCD2");
        if (senha->getSenha() != "1ABCD2")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUSenha::testeFalha(){
    try{
        senha->setSenha("123456");
        estado = false;
    } catch (...) {
        if (senha->getSenha() == "123456")
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
        texto->setTexto("1ABCD2");
        if (texto->getTexto() != "1ABCD2")
            estado = false;
    } catch (...){
        estado = false;
    }
}

void TUTexto::testeFalha(){
    try{
        texto->setTexto("123456");
        estado = false;
    } catch (...) {
        if (texto->getTexto() == "123456")
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
        nome.setNome("Jose Silva Souza");
        mat.setMatricula("ABCD1234");
        senha.setSenha("A1B2CD");

        usuario->setMatricula(mat);
        usuario->setNome(nome);
        usuario->setSenha(senha);
    } catch (...) {
        estado = false;
    }

    if (usuario->getMatricula().getMatricula() != "ABCD1234")
        estado = false;
    if (usuario->getNome().getNome() != "Jose Silva Souza")
        estado = false;
    if (usuario->getSenha().getSenha() != "A1B2CD")
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

    try {
        nome.setTexto("Desenvolver classe abstrata");
        codigo.setCodigo("12345678917");
        inicio.setData("12-12-17");
        termino.setData("13-12-17");
        disc.setDisciplina("Arquitetura");

        tarefa->setCodigo(codigo);
        tarefa->setNome(nome);
        tarefa->setInicio(inicio);
        tarefa->setTermino(termino);
        tarefa->setDisciplina(disc);
    } catch (...) {
        estado = false;
    }

    if (tarefa->getCodigo().getCodigo() != "12345678917")
        estado = false;
    if (tarefa->getNome().getTexto() != "Jose Silva Souza")
        estado = false;
    if (tarefa->getInicio().getData() != "12-12-17")
        estado = false;
    if (tarefa->getTermino().getData() != "13-12-17")
        estado = false;
    if (tarefa->getDisciplina().getDisciplina() != "Arquitetura")
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
        nome.setTexto("texto valido");
        codigo.setCodigo("12345678917");
        descricao.setTexto("texto valido");

        projeto->setNome(nome);
        projeto->setCodigo(codigo);
        projeto->setDescricao(descricao);
    } catch (...) {
        estado = false;
    }

    if (projeto->getNome().getTexto() != "texto valido")
        estado = false;
    if (projeto->getCodigo().getCodigo() != "12345678917")
        estado = false;
    if (projeto->getDescricao().getTexto() != "texto valido")
        estado = false;
}

bool TUProjeto::run(){
    setUp();
    testeSucesso();
    tearDown();
    return estado;
}

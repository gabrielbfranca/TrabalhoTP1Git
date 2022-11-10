#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

class Dominio {
    private:
        int valor;
        void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

inline int Dominio::getValor() const{
    return valor;
}

#endif // DOMINIOS_H_INCLUDED

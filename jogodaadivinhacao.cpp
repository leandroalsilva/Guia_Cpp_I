#include <iostream>
using namespace std; //indica que as funções serão usadas com frequência

int main (){
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl;

    int numero_secreto = 42;
    cout << "O número secreto é " << numero_secreto << ". Não conte para ninguém!" <<endl;
}

//Para compilar no cmd, estando na pasta do arquivo:
//g++ jogodaadivinhacao.cpp -o jogodaadivinhacao.out
//Para build:
//./jogodaadivinhacao.out
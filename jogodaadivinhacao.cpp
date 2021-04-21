#include <iostream>
using namespace std; //indica que as funções serão usadas com frequência

int main (){
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl;

    int numero_secreto = 42;
    int chute;
    cout << "Qual seu chute? ";
    cin >> chute;
    cout << "O valor do seu chute é: " << chute << endl;

    if (chute == numero_secreto){
        cout << "Parabéns! Você acertou o número secreto!" << endl;
    }else if (chute > numero_secreto){
        cout << "Seu chute foi maior que o número secreto!" << endl;
    }else {
        cout << "Seu chute foi menor que o número secreto!" << endl;
    }
}

//Para compilar no cmd, estando na pasta do arquivo:
//g++ jogodaadivinhacao.cpp -o jogodaadivinhacao.out
//Para build:
//./jogodaadivinhacao.out
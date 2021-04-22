#include <iostream>
using namespace std; //indica que as funções serão usadas com frequência

int main()
{
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl;

    //Variáveis
    const int NUMERO_SECRETO = 42;
    bool nao_acertou = true;
    int tentativas = 0;

    while (nao_acertou)
    {
        int chute;
        tentativas++;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> chute;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        cout << "O valor do seu chute é: " << chute << endl;
            
        if (acertou)
        {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            nao_acertou = false;
        }
        else if (maior)
        {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }
    cout << "Fim de jogo!" << endl;
    cout << "Você acertou o número secreto em " << tentativas << " tentativas" << endl;
}

//Para compilar no cmd, estando na pasta do arquivo:
//g++ jogodaadivinhacao.cpp -o jogodaadivinhacao.out
//Para build:
//./jogodaadivinhacao.out
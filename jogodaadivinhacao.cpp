#include <iostream>
using namespace std; //indica que as funções serão usadas com frequência

int main()
{
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl;
    cout << "Escolha o seu nível de dificuldade" << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;

    //Variáveis
    const int NUMERO_SECRETO = 42;
    bool nao_acertou = true;
    int tentativas;
    double pontos = 1000;
    char dificuldade;
    int numero_tentativas;

    cin >> dificuldade;

    if (dificuldade == 'F')
    {
        numero_tentativas = 15;
    }
    else if (dificuldade == 'M')
    {
        numero_tentativas = 10;
    }
    else
    {
        numero_tentativas = 5;
    }

    for (tentativas = 1; tentativas <= numero_tentativas; tentativas++)
    {
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> chute;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        double pontos_perdidos = abs((long)((chute - NUMERO_SECRETO) / 2.0));

        cout << "O valor do seu chute é: " << chute << endl;

        if (acertou)
        {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            nao_acertou = false;
            break;
        }
        else if (maior)
        {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
        pontos = pontos - pontos_perdidos;
    }
    cout << "Fim de jogo!" << endl;
    if (nao_acertou)
    {
        cout << "Você perdeu! Tente novamente!" << endl;
    }else 
    {
        cout << "Você acertou o número secreto em " << tentativas << " tentativas" << endl;
        cout.precision(2); //precisão das casas decimais
        cout << fixed;     //modificador fixo da vírgula
        cout << "Sua pontuação é " << pontos << endl; 
    }

}

//Para compilar no cmd, estando na pasta do arquivo:
//g++ jogodaadivinhacao.cpp -o jogodaadivinhacao.out
//Para build:
//./jogodaadivinhacao.out
#include <iostream>
#include <string>
using namespace std; //indica que as funções serão usadas com frequência

const string PALAVRA_SECRETA = "MELANCIA";

bool letra_existe(char c)
{
    for (int i = 0; i < PALAVRA_SECRETA.size(); i++)
    {
        if (c == PALAVRA_SECRETA[i])
        {
            return true;
        }
    }
    return false;  
}

int main()
{
    cout << PALAVRA_SECRETA << endl;

    //Variáveis
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou)
    {
        char chute;
        cin >> chute;
        cout << "O seu chute foi: " << chute << endl;

        if (letra_existe(chute))
        {
            cout << "Você acertou! Seu chute está na palavra" << endl;
        }
        else
        {
            cout << "Você errou! Seu chute não está na palavra" << endl;
        }
    }
}
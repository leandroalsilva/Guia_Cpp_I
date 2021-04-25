#include <iostream>
#include <string>
#include <map>
using namespace std; //indica que as funções serão usadas com frequência

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;

bool letra_existe(char chute)
{
    for (char letra : PALAVRA_SECRETA)
    {
        if (chute == letra)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    //Variáveis
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou)
    {
        for (char letra : PALAVRA_SECRETA)
        {
            if (chutou[letra]) //Mapeia a ocorrência de uma letra na palavra
            {
                cout << letra << " ";
            } else
            {
                cout << "_ ";
            }
            
        }
        cout << endl << "Escolha uma letra para chutar: " << endl;
        char chute;
        cin >> chute;
        chutou [chute] = true;

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
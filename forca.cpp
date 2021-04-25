#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std; //indica que as funções serão usadas com frequência

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char> chutes_errados;

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
    cout << "*****************" << endl;
    cout << "* Jogo da Forca *" << endl;
    cout << "*****************" << endl;
    //Variáveis
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou)
    {
        cout << "Seus chutes errados: ";
        for (char letra : chutes_errados)
        {
            cout << letra << " ";
        }
        cout << endl;

        for (char letra : PALAVRA_SECRETA)
        {
            if (chutou[letra]) //Mapeia a ocorrência de uma letra na palavra
            {
                cout << letra << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl
             << "Escolha uma letra para chutar: " << endl;
        char chute;
        cin >> chute;
        chutou[chute] = true;

        cout << "O seu chute foi: " << chute << endl;

        if (letra_existe(chute))
        {
            cout << "Você acertou! Seu chute está na palavra" << endl;
        }
        else
        {
            cout << "Você errou! Seu chute não está na palavra" << endl;
            chutes_errados.push_back(chute);
        }
        cout << endl;
    }
}
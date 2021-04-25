#include <iostream>
#include <string>
using namespace std; //indica que as funções serão usadas com frequência

int main()
{
    string palavra_secreta = "MELANCIA";
    cout << palavra_secreta <<endl;

    //Variáveis
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou)
    {
        char chute;
        cin >> chute;
        cout << "O seu chute foi: " << chute <<endl;
    }
    
}

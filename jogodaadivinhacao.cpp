#include <iostream>

using namespace std;

int main (){
    cout << "***************************************" << endl;
    cout << "* Boas vindas ao Jogo da adivinha��o! *" << endl;
    cout << "***************************************" << endl;

    const int NUMERO_SECRETO = 42;

    cout << "Qual seu chute? ";
    int chute;
    cin >> chute;
    cout << "O valor do seu chute �: " << chute << endl;

    if (chute == NUMERO_SECRETO)
        cout << "Parab�ns! Voc� acertou" << endl;
    else if (chute > NUMERO_SECRETO)
        cout << "Seu chute foi maior do que o n�mero secreto" << endl;
    else
        cout << "Seu chute foi menor do que o n�mero secreto" << endl;
}
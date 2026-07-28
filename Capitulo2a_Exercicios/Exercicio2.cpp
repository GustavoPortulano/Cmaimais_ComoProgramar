//27 de jullho de 2026. Segunda-feira. Tarde fria.

#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//A função main() inicia o programa
int main()
{
    int numero1;
    int numero2;
    int numero3;
    int produto;

    //Solicita ao usuário a digitação de três números inteiros:
    cout << "Digite três númermos inteiros: ";
    //Numeros digitados pelo usuário:
    cin >> numero1 >> numero2 >> numero3;
    //Realização da multiplicação:
    produto = numero1 * numero2 * numero3;
    //Exibição do resultado:
    
    cout << "\n";
    cout << "O produto dos três números digitados é " << produto << endl;
    
    cout << "\n";

    return 0;
}


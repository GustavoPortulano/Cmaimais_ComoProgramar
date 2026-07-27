//22 de julho de 2026. Quarta-feira. Noite fria.
//Figura 2.13: fig02_13.cpp
//Comparando inteiros utilizando instruções if, operadores relacionais
//e operadores de igualdade.

#include <iostream> //permite ao programa raalizar entrada e saida

using std::cout;    //o programa utiliza cout
using std::cin;     //o programa utiliza cin
using std::endl;    //o programa utiliza endl

//a função main inicia a execução do programa
int main()

{
    int number1;    //primeiro inteiro a comparar
    int number2;    //segundo inteiro a comparar

    cout << "\n";
    cout << "Enter two integer to compare: ";   //solicita dados ao usuário
    cin >> number1 >> number2;  //lê dois ineiros fornecidos pelo usuário

    if (number1 == number2)
        cout << number1 << " == " << number2 << endl;
    
    if (number1 != number2)
        cout << number1 << " != " << number2 << endl;
    
    if (number1 < number2)
        cout << number1 << " < " << number2 << endl;
    
    if (number1 > number2)
        cout << number1 << " > " << number2 << endl;
    
    if (number1 <= number2)
        cout << number1 << " <= " << number2 << endl;
    
    if (number1 >= number2)
        cout << number1 << " >= " << number2 << endl;
    
    cout << "\n";
    //Fim do programa 
    return 0;
}
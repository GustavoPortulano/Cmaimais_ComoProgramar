//22 de julho de 2026. Quarta-feria. Inicio de madrugada fria
//Figura 2.5
//Programa de adição que exibe a soma de dois números

#include <iostream> //permite que o programa gera saida de dados na tela

//a função main inicia a execução do programa
int main()
{
    //declaração de variáveis
    int number1;    //primeiro inteiro a adicionar;
    int number2;    //segundo inteiro a adicionar;
    int sum;        //soma de number1 e number2;
    
    std::cout << "Enter first interger: ";  //solicita dados ao usuário
    std::cin >> number1; //lê primeiro inteiro inserido elo usuário em mumbe1

    std::cout << "Enter second integer: "; //solicita dados do usuário
    std::cin >> number2; //adiciona os números; armazena o resultado em sum

    sum = number1 + number2; //adiciona os números; armazena o resultado em sum

    std::cout << "Sum is " << sum << std::endl; //exibe sim, termina a linha

    return 0; //indica que o programa terminou com sucesso.

}   //fim da função main
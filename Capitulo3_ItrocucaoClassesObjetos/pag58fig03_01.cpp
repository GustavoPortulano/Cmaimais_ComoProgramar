//27 de julho de 2026. Segunda-feira. Noite fria. Figura 3.1: fig03_01.cpp
//Define a classe GradeBook com uma função-membro displayMessage;
//Cria um objeto GradeBook e chama sua função displayMessage.
#include <iostream>
using std::cout;
using std::endl;

//Definição da classe GradeBook
class GradeBook //nome da classe inicia-se em maiúscula e demais palavras em maiúsculas
{
public:
    //função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void displayMessage() //nome de função inicia-se com minuscula e demais palavras em maiúsculas
    {
        cout << "\nWelcome to the Grade Book!\n" << endl;
    }   //fim da função displaayMesaage
};      //fim da classe GradeBook

//a função main inicia a execução do programa
int main()
{
    GradeBook myGradeBook; //cria um objeto GradeBook chamado myGradebook
    myGradeBook.displayMessage(); //chama a função displayMessage do objeto
    return 0;   //indica terminação bem-sucedida
}//fim de main

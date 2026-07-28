//27 de julho de 2026. Segunda-feira. Noite fria. Figura 3.3: fig 03_03.cpp
//Define a classe GradeBook com uma função-membro que aceita um parâmetro;
//Cria um objeto GradBook e chama sua função-membro displayMessage.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>    //o programa utiliza classe de string padrão C++
using std::string;
using std::getline;

//definição da classe GradeBook
class GradeBook
{
public:
    //função que exibe uma mensagem de boas-vindas ao usu´rio do GradeBook
    void displayMessage(string courseName)
    {
        cout << "Welcome to the grade book for\n" << courseName << "!" 
            << endl;
    }   //fim da função displayMessage
};      //fim da classe GradeBook

//a função main inicia a execução do programa
int main()
{
    string nameOfCourse;     //strings de caracteres para armazeanr o nome do curso
    GradeBook myGradeBook;  //cria um objeto GradeBook chamad myGradeBook
    
    //prompt para entrada do nome do curso
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse);
    cout << endl;

    //chama a função desplayMessage de myGradeBook
    //e passa nameOfCourse com um argumento
    myGradeBook.displayMessage(nameOfCourse);
    return 0;   //indica terminação bem sucedida
}   //fim de main
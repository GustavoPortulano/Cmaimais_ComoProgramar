//27 de julho de 2026. Segunda-feria. Noite fria. Figura 3.5: fig03_05.cpp
//Define a classe GrandeBook que contém um membro de dados courseName
//e funções-membro para configurar e obter seu valo;
//Cria e manipula um objeto GradeBook com essas funções.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>   //o programa utiliza classes de string padrão C++
using std::string;
using std::getline;

//definição da classe GradeBook
class GradeBook
{
public:
    //função que configura o nome do curso
    void setCourseName(string name)
    {
        courseName = name;  //armazena o nome do curso no objeto
    }   // da função setCoursename

    //Função que obtém o nome do curso
    string getCourseName()
    {
        return courseName;  //retorna o courseName do objeto
    }   //fim da função getCourseName

    //função que exibe uma mensagem de boas-vindas
    void displayMessage()
    {
        //essa instrução chama getCoursename para obter o
        //nome do curso que esse GradeBook representa
        cout << "Welcome to the grade book for\n" << getCourseName() << "!"
            << endl;
    }   //fim da função dislayMessage
    private:
        string courseName;  //nome do curso para esse GradeBook
};  //fim da classe GradeBook

//  a função main inicia a execução do programa
int main()
{
    string nameOfCourse;    //strings de caracteres para armazenar o nome do curso
    GradeBook myGradeBook;  //cria um objeto GradeBook chamado myGradeBook

    //exibe valor inicial de courseName
     cout << "Initial course name is: " << myGradeBook.getCourseName()
        << endl;

    //solicita, insere e configura o nome do curso
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse); //lê o nome de um curso com espaços em branco
    myGradeBook.setCourseName(nameOfCourse);    //configura o nome do curso

    cout << endl;   //gera saída de uma linha em branco
    myGradeBook.displayMessage();   //exibe a mensagem com o novo nome do curso
    return 0;   //indica terminação bem-sucedida
}   //fim de main
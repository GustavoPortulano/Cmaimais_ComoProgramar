//31 de julho de 2026. Sexta-feira. Dia frio. Figura 3.7: fig03_07.cpp
//Instanciando múltiplos objetos da classe GradeBook e utilizando
//o construtor GradeBook para especificar o nome do curso
//quando cada objeto GradeBook é criado.
#include <iostream>
using std::cout;
using std::endl;

#include <string>   //o programa utiliza calsse de string padrão C++
using std::string;

//Definição da classe GradeBook
class GradeBook
{
public:
    //o construtor incializa coursename com a string fornecida como argumento
    GradeBook ( string name )
    {
        setCourseName( name );  //chama a função set para inicializar courseName
    }   //fim do construtor GradeBook

    //função para configurar o nome do curso
    void setCourseName( string name)
    {
        courseName = name;  //armazena o nome do curso no objeto
    }   //fin da função setCourseName

    //função para obtero nome do curso
    string getCourseName()
    {
        return courseName;  //retorna courseName do objeto
    }   //fim da função getCoursename

    //exibe uma mensagem de boas-vindas para o usuário GradeBook
    void displayMessage()
    {
        //chama getCourseName para obter o coureName
        cout << "Welcome to the grade book for\n" << getCourseName() 
            << "!" << endl;
    }   //fim da classe display Message
private:
    string courseName;  //nome do curso para esse GradeBook
};  //fim da ckasse GradeBook

//a função main inicia a execução do programa
int main()
{
    //cria dois objetos GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    //exibe valor inicial de courseName para cada GradeBook
    cout << "\ngradeBook1 created for course: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
    
    cout << "\n";
}   //fim de main




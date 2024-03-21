#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cadastro //nome da classe
{
private:

    string Nome;
    string Matricula;
    string Curso;

public:

    void setNome(const string &n)
    {
        Nome = n;
    }

    void setMatricula(const string &m) 
    {
        Matricula = m;
    }

    void setCurso(const string &c)
    {
        Curso = c;
    }

    void consulta() const 
    {
        cout << "Nome: " << Nome << endl;
        cout << "Matrícula: " << Matricula << endl;
        cout << "Curso: " << Curso << endl;
    }
};

int main() 
   {
    int x;// quantidade de alunos

    cout << "Quantos alunos deseja cadastrar? ";
    cin >> x;

    vector<cadastro> aluno(x); // vetor que vai armazenar a classe cadastro

    for (int i = 0; i < x; ++i) 
    {
        string nome, matricula, curso;

        cout << "Nome do aluno " << i + 1 << ": ";
        cin >> nome;
        aluno[i].setNome(nome);

        cout << "Matrícula do aluno " << i + 1 << ": ";
        cin >> matricula;
        aluno[i].setMatricula(matricula);

        cout << "Curso do aluno " << i + 1 << ": ";
        cin >> curso;
        aluno[i].setCurso(curso);
    }

    cout << "\nDados dos alunos cadastrados:\n";
    for (int i = 0; i < x; ++i)
    {
        cout << "\nAluno " << i + 1 << ":\n"<<endl;
        aluno[i].consulta();
    }

    return 0;
}

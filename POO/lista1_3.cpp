#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cadastro
{
private:
    string Nome;
    string Matricula;
    string Curso;
    double Nota;
    int Falta;

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

    void setNota(double n)
    {
        Nota = n;
    }

    void setFalta(int f)
    {
        Falta = f;
    }

    void consulta() const 
    {
        cout << "Nome: " << Nome << endl;
        cout << "Matrícula: " << Matricula << endl;
        cout << "Curso: " << Curso << endl;
        cout << "Nota: " << Nota << endl;
        cout << "Falta: " << Falta << endl;
    }
};

int main() 
{
    int x;

    cout << "Quantos alunos deseja cadastrar? ";
    cin >> x;

    vector<cadastro> aluno(x);

    for (int i = 0; i < x; ++i)
    {
        string nome, matricula, curso;
        double nota;
        int falta;

        cout << "Nome do aluno " << i + 1 << ": ";
        cin >> nome;
        aluno[i].setNome(nome);

        cout << "Matrícula do aluno " << i + 1 << ": ";
        cin >> matricula;
        aluno[i].setMatricula(matricula);

        cout << "Curso do aluno " << i + 1 << ": ";
        cin >> curso;
        aluno[i].setCurso(curso);

        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> nota;
        aluno[i].setNota(nota);

        cout << "Faltas do aluno " << i + 1 << ": ";
        cin >> falta;
        aluno[i].setFalta(falta);
    }

    cout << "\nDados dos alunos cadastrados:\n";
    for (int i = 0; i < x; ++i) 
    {
        cout << "\nAluno " << i + 1 << ":\n" << endl;
        aluno[i].consulta();
    }

    return 0;
}

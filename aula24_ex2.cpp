#include <iostream>
#include <string>
#include <vector>

using namespace std;


//classe
class Aluno
{
private:
    string nome;
    int matricula;

public:
//construtor
    Aluno(const string& n, int m)
    {
//atributos
        nome = n;
        matricula = m;
    }
//método
    void exibirDetalhes()
    {
        cout << "Nome" << nome; cout << " - Matricula " << matricula << endl;
    }
};

// 2° classe
class Turma {   
    private:
//atributos
    string disciplinas;
    vector <Aluno*> alunos;

    public:
//construtor
    Turma(const string& d)
    {
    disciplinas = d;
    }
//método
    void adicionarAluno(Aluno *aluno)
    {
        alunos.push_back(aluno);
        cout << "Um Aluno adicionado a lista. " << endl;
    }
//metodo 2
    void listarAlunos()
    {
        cout << "Turma de " << disciplinas << endl;
        for (Aluno* aluno: alunos) 
        {
        aluno -> exibirDetalhes();

        }
    }

};





int main()
{

    Aluno a1("Jose", 1);
    Aluno a2("Geovan", 2);
    Aluno a3("Gilmara", 3);
    Aluno a4("Jilmar", 4);

    Turma t("Geografia");

    t.adicionarAluno(&a1);
    t.adicionarAluno(&a2);
    t.adicionarAluno(&a3);
    t.adicionarAluno(&a4);

    
    t.listarAlunos();

    return 0;

}
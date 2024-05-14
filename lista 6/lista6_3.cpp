#include <iostream>
#include <queue> //biblioteca fila 
#include <string>

using namespace std;

struct Aviao
{
    string nome;
    string modelo;
    string cor;
    int capacidade;
};

class Decolagem 
{
private:
    queue<Aviao> fila; // Fila de decolagem dos aviões

public:
    void adicionar(const Aviao& aviao) //Listar numero  dos aviões na fila de espera;
    {
        fila.push(aviao); // botar aviao 
        cout << "Avião adicionado à fila de espera.\n";
    }

    void listarNumeroAvioes()  //Listar numero  dos aviões na fila de espera;
    {
        cout << "Número de aviões aguardando na fila : " << fila.size() << endl;
    }

    void autorizarDecolagem() 
    {
        if (!fila.empty()) // se a decolagem diferente de vazio
        {
            cout << "Decolagem autorizada para o avião: " << fila.front().nome << endl; // aviao da frente
            fila.pop(); // retiro ele da fila , primeiro a entrar é o primeiro a sair
        } 
        
        else 
        {
            cout << "Não há aviões na fila.\n";
        }
    }

    void listarListadeEspera() // Listar todos os aviões na fila de espera; 
    {
        if (fila.empty()) 
        {
            cout << "Não há aviões na fila de espera.\n";
        } 
      
        else 
        {
            cout << "Aviões na fila de espera:\n";
            queue<Aviao> temp = fila; // copia da  fila 
            while (!temp.empty()) // enquanto ela nao estiver vazia
            {
                cout << temp.front().nome  << endl; // mostrar lista 
                temp.pop(); // tiro o aviao da frente
            }
        }
    }

    void Caracteristicas()
    {
        if (!fila.empty())
        {
            cout << "Características do primeiro avião na fila:\n"
                 << "Nome: " << fila.front().nome << ", Modelo: " << fila.front().modelo << ", Cor: " 
                 << fila.front().cor << ", Capacidade: " << fila.front().capacidade << endl;
        } 
        else
        {
            cout << "Não há aviões na fila.\n";
        }
    }
};

int main()
{
    Decolagem controle;

    while (true) 
    {
        cout << "\nEscolha uma opção:\n"
             << "a) Listar o número de aviões aguardando na fila de decolagem\n"
             << "b) Autorizar a decolagem do primeiro avião da fila\n"
             << "c) Adicionar um avião à fila de espera\n"
             << "d) Listar todos os aviões na fila de espera\n"
             << "e) Listar as características do primeiro avião da fila\n"
             << "f) Sair\n";
             
        char opcao;
        cin >> opcao;

        switch (opcao)
        {
            case 'a': 
            {
                controle.listarNumeroAvioes();
                break;
            }
            case 'b':
            {
                controle.autorizarDecolagem();
                break;
            }
            case 'c': 
            {
                Aviao novo;
                cout << "Digite o nome do avião: ";
                cin >> novo.nome;
                cout << "Digite o modelo do avião: ";
                cin >> novo.modelo;
                cout << "Digite a cor do avião: ";
                cin >> novo.cor;
                cout << "Digite a capacidade do avião: ";
                cin >> novo.capacidade;
                controle.adicionar(novo);
                break;
            }
            case 'd': 
            {
                controle.listarListadeEspera();
                break;
            }
            case 'e':
            {
                controle.Caracteristicas();
                break;
            }
            case 'f': 
            {
                cout << "Encerrando o programa.\n";
                return 0;
            }
            default: 
            {
                cout << "Opção inválida. Por favor, tente novamente.\n";
                break;
            }
        }
    }

    return 0;
}

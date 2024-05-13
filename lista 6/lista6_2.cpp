#include <iostream>
#include <stack>// biblioteca de pilha slide
#include <string>

using namespace std;

string inverter(const string& texto) 
{
    stack<char> pilha;
    for (char c : texto) 
    {
        pilha.push(c);// primeiro caractere vira o ultimo
    }

    string invertido;
    
    while (!pilha.empty()) // enquanto a pilha nn ta vazia 
    {
        invertido += pilha.top();// texto invertido vai pro topo 
        pilha.pop();// retira o elemento para a pilha ir esvaziando
    }

    return invertido; 
}

bool palindromo(const string& texto) 
{
    int esquerda = 0;
    int direita = texto.size() - 1;
    while (esquerda < direita) 
    {
        if (texto[esquerda] != texto[direita]) //vendo se é um palindromo 
        {
            return false; // se for diferente retornaa falso 
        }
        esquerda++;
        direita--;
    }
    return true;
}

int main()
{
    string texto;

    cout << "DIgite uma palavra com caracteres minusculos : ";
    cin >> texto; 

    cout << "Texto invertido: " << inverter(texto) << endl;

    if (palindromo(texto)) 
    {
        cout << "O texto é um palíndromo." << endl;
    } 
    else 
    {
        cout << "O texto não é um palíndromo." << endl;
    }

    return 0;
}

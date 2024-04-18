#include <iostream>
#include <vector>
using namespace std;

int pesqbin(vector<int>& v, int x) 
{
    int i = 0;
    int f = v.size() - 1;

    while (i <= f) 
    {
        int meio = (i + f) / 2;

        if (v[meio] == x) // se o meio = x valor encontrado
        {
            return meio; // Elemento encontrado
        }
        else if (v[meio] < x) 
        {
            i = meio + 1; // vai procurar na metade direita
        }
        else
        {
            f = meio - 1; // Procura na metade esquerda
        }
    }
    return -1; // Elemento não encontrado
}

int main() 
{
    vector<int> v = {1, 2, 37, 43, 45, 67, 78}; 
    int x = 45;
    int posicao = pesqbin(v, x);
    
    if (posicao != -1) 
    {
        cout << "O elemento " << x << " foi encontrado na posição " << posicao << endl;
    }
    else
    {
        cout << "O elemento " << x << " não encontrado no vetor." << endl;
    }
    
    return 0;
}

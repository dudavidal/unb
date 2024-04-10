#include <iostream>
#include <vector>

using namespace std;

int pesqseq( vector<int> v, int x) 
{
    for (int i = 0; i < v.size(); ++i) 
    {
        if (v[i] == x) 
        {
            return i; // Elemento encontrado, retorna a posição
        }
    }
    return -1; 
}

int main()
{
    vector<int> v = {3, 10, 2, 19, 12,20,32,54,11};
    int x = 54; //valor procurado
    int posicao = pesqseq(v, x); // eniva o vetor e o numero procurado
    
    if (posicao != -1) 
    {
        cout << "O elemento " << x << " foi encontrado na posição " << posicao << endl;
    } 
    
else
    {
        cout << "O elemnto " << x << " não foi encontrado no vetor." << endl;
    }
    
    return 0;
}

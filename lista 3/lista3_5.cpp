#include <iostream>
#include <vector>
using namespace std;

int sent(vector<int>& v, int x) 
{
    int s = v[v.size() - 1];
    v[v.size() - 1] = x;

    int i = 0;
    while (v[i] != x)
    {
        i++;
    }

    v[v.size() - 1] = s;

    if (i < v.size() || v[i] == x) 
    {
        return i; 
    } 
    else 
    {
        return -1; 
    }
}

int main() 
{
    vector<int> v = {5, 7, 10, 45, 65, 78, 97, 32}; 
    int x = 32; 
    int posicao = sent(v, x);
    
    if (posicao != -1)
    {
        cout << "O elemento " << x << " está na posição: " << posicao << endl;
    }
    else
    {
        cout << "O elemento " << x << " não foi encontrado no vetor." << endl;
    }

    return 0;
}

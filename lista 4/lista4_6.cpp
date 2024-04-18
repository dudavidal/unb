#include <iostream>
#include <vector>
using namespace std;

int pesqbin(vector<int>& v, int x)
{
    int y = 0; // Contador de iterações
    int i = 0;
    int f = v.size() - 1;

    while (i <= f)
    {
        y++;
        int meio = (i + f) / 2;

        if (v[meio] == x)
        {
            return y;
        }
        else if (v[meio] < x)
        {
            i = meio + 1;
        }
        else {
            f = meio - 1;
        }
    }
    return y;
}

int pesqsent(vector<int>& v, int x) 
{
    int y = 0; // Contador de iterações
    int s = v[v.size() - 1];
    v[v.size() - 1] = x;

    int i = 0;
    while (v[i] != x)
    {
        y++;
        i++;
    }

    v[v.size() - 1] = s;

    if (i < v.size() - 1 || v[v.size() - 1] == x)
    {
        return y;
    } 
    else 
    {
        return y;
    }
}

int main() 
{
    vector<int> v = {5,7,10,45,65,78,97,32}; 
    int x = 45; 

    int bin = pesqbin(v, x); 
    int sent= pesqsent(v, x); 

    cout << "Pesquisa Binária: " << bin << " iterações" << endl;
    cout << "Pesquisa com Sentinela: " << sent << " iterações" << endl;

    if (bin < sent)
    {
        cout << "\nMenor: Binária" << endl;
        cout << "Maior: Com Sentinela" << endl;
    } 
    else if (sent < bin)
    {
        cout << "Menor: Com Sentinela" << endl;
        cout << "Maior: Binária" << endl;
    } 
    else
    {
        cout << "Ambos iguais." << endl;
    }

    return 0;
}

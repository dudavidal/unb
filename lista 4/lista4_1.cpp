#include <iostream>
#include <vector>

using namespace std;

vector<int> preencher(int x)
{
    vector<int> v; //vetor vazio
    
    for (int i = 0; i < x; ++i)
    {
        int y; //valor de cada posição
        cout << "Digite o valor para a posição " << i << ": ";
        cin >> y;
        v.push_back(y);// adiciona o valor ao vetor
    }
    return v;//retornar o vetor
}

int main()
{
    int x; //tamanho
    cout << "Digite o tamanho do vetor: ";
    cin >> x;
    vector<int> v = preencher(x);
   
    cout << "Vetor:";
    for (int i = 0; i < v.size(); ++i) 
    {
        cout <<"\n"<< v[i];
    }
    cout << endl;
    return 0;
}

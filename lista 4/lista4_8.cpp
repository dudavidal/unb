#include <iostream>
using namespace std;

int main()
   {
    int n;
    
    do 
   {
     cout << "Qual o tamanho do vetor? ";
     cin >> n;
   } while (n <= 0);
    
    int X[n];
    
    for (int i = 0; i < n; i++)
    {
     cout << "Qual o valor do elemento " << i << " do vetor? ";
     cin >> X[i];
    }
   
    int maior = X[0];
    int posicao = 0;
   
    for (int i = 1; i < n; i++) 
    {
        if (X[i] > maior)
        {
          maior = X[i];
          posicao = i;
        }
    }
   
    cout << "Maior elemento: " << maior << endl;
    cout << "Posição: " << posicao << endl;
   
    return 0;
}

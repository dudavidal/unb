#include <iostream>
#include <string>
using namespace std;

void insertionSort (string nomes[], int tamanho)
{
    for (int j = 1; j < tamanho; ++j) //j=1 para permitir a comparação do segundo nome com o primeiro.
    {
        string chave = nomes[j];
        int i = j - 1; // parcela ordenada
        
        while (i >= 0 && nomes[i] > chave) // continua se tiver elementos a esquerda e é maior que a chave
        {
            
            nomes[i + 1] = nomes[i]; // joga o i pra um na frente
            i = i - 1; //atualiza para apontar para o próximo elemento à esquerda
        }
        
        nomes[i + 1] = chave; // troca de lugar 
    }
}

int main()
{
    int n;
    cout << "Quantos nomes você deseja inserir? ";
    cin >> n;

    string nomes[n]; 
    
    for (int i = 0; i < n; ++i) // le todos os nomes
    {
        cout << "Insira o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    insertionSort(nomes, n);

    cout << "\nNomes ordenados:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << i+1 <<  "° " <<  nomes[i] << endl;
    }

    return 0;
}

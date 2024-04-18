#include <iostream>
#include <string>
using namespace std;


void swap(string &a, string &b) 
{
    string temp = a;
    a = b;
    b = temp;
}


void selectionSort(string nomes[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; ++i) 
    {
        int menor = i;
        for (int j = i + 1; j < tamanho; ++j)
        {
            if (nomes[j].size() < nomes[menor].size()) // se o tamanho do j for menor que o menor, o menor  vira o j
            {
                menor = j;
            }
        }
        
        if (menor != i) // se o i for diferente do menor 
        {
            swap(nomes[i], nomes[menor]); //troca eles
        }
    }
}

int main()
{
    int n;
    cout << "Quantos nomes serão inseridos? ";
    cin >> n;

    string nomes[n];
    
    for (int i = 0; i < n; ++i) //ler os nomes
    {
        cout << "Insira o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    selectionSort(nomes, n);

    cout << "\nNomes ordenados pelo tamanho:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << nomes[i] << endl;
    }

    return 0;
}

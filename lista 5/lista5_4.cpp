#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void bubbleSort(float arr[], int n) //Bubble Sort
{
    for (int i = 0; i < n - 1; i++) // processo se repete 1 loop externo para tudo estar ordenado  
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) //elemento da direita sendo comparado ao da esquerda
            {
                float temp = arr[j]; // se o da esquerda for maior troca e o da esquerda compara com o resto
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    srand(time(NULL)); //numeros aleatorios

    int x = 100; //quantidade de alturas calculadaas
    float alturas[x];


    for (int i = 0; i < x; i++) 
    {
        alturas[i] = 1.0 + rand() % 201 / 100.0; // 1.00 e 3.00
    }

    cout << "\nAlturas:" << endl;
    for (int i = 0; i < x; i++) 
    {
        cout << alturas[i] << " ";
    }
    cout<<endl;
    
    bubbleSort(alturas, x);

    cout << "\nAlturas ordenadas:" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << alturas[i] << " ";
    }
    cout << endl;

    return 0;
}

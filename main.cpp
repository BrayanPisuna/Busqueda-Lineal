#include <iostream>
using namespace std;

void ingresarElementos(int arr[], int n);
void busquedaLineal (int arr[], int n, int x);
void mostrarElemento (int arr[], int n);


int main()
{

    int arreglo[5]={2,6,8,16,20};
    int m, pi=0, pf=4;
    m=(pi+pf)/2;
    cout<<endl;
    cout<<arreglo[m];
}

void ingresarElementos(int arr[], int n)
{
    cout<<"Ingrese los elementos"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

void busquedaLineal (int arr[], int n, int x)
{
    bool cambio=false;
    for (int i=0; i<n; i++)
    {
        if(x==arr[i])
        {
            cout<<"Elemento encontrado en la posicion: "<<i+1<<endl;
            cambio=true;
        }
        /*if(cambio==false)
        {
            cout<<"Elemento no encontrado en la posicion: "<<i+1<<endl;
        }*/
    }
}

void mostrarElemento (int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

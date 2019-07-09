#include <iostream>

using namespace std;

void ingresarElementos(int arr[], int n);
void mostrarElementos(int arr[],int n);
void algoritmoInserccion(int arr[], int n);
bool algoritmoInterpolacion
(int arr[], int n, int num,int c);


int main()
{
    int t;
    cout<<"INGRESE EL TAMANIO";
    cin>>t;
    int arr[t];
    ingresarElementos(arr,t);
    cout<<endl;
    mostrarElementos(arr,t);
    cout<<endl;
    algoritmoInserccion(arr,t);
    cout<<endl;
    mostrarElementos(arr,t);
    cout<<endl;
    int num;
    cout<<"INGRESE EL NUM A BUSCAR:";
    cin>>num;
    int c=0;
    if (algoritmoInterpolacion(arr,t,num,c)==true)
        {
            cout<<"ELEMENTO ENCONTRADO";
        }
        else{
            cout<<"ELEMENTO NO ENCONTRADO";
        }

    cout<<endl;



    return 0;
}

void ingresarElementos(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

}
void mostrarElementos(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"|"<<arr[i]<<"|";
    }

}
void algoritmoInserccion(int arr[], int n)
{
    //ALGORITMOO X INSERCCIÓN
    for(int i=0; i<n; i++)
    {

        int aux=arr[i];
        for(int j=i; j>0 ; j--)
        {
            if(arr[j-1]>aux)
            {
                arr[j]=arr[j-1];
                arr[j-1]=aux;
            }
        }
    }
}
bool algoritmoInterpolacion
(int arr[], int n, int num,int c)
{
    //ALGORITMO X INTERPOLACIÓN

    int primero=0;

    int ultimo=n-1;

    int medio;



    medio= primero+((num-arr[primero])*(ultimo -primero))/(arr[ultimo]-arr[primero]);

    if(c<n)
    {
        if(arr[medio]<num)
        {
            primero=medio+1;
        }

        if(arr[medio]>num)
        {
            ultimo=medio-1;
        }

        else
            primero=medio;

            algoritmoInterpolacion(arr,n,num,c+1);

    }

    if(arr[primero]==num)
        return true;
    else
         return false;



}

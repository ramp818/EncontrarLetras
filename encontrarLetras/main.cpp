#include <iostream>
#include <string>

using namespace std;


void funcion(string palabra1,string palabra2)
{
    string palabra3;
    int encuentra,cantidad=0;
    for(int i=0;i<palabra1.length();i++)
    {
        encuentra=palabra2.find(palabra1[i]);
        if(encuentra!=-1)
        {
            palabra2.erase(encuentra,1);
            palabra3+=palabra1[i];
            char aux;
            for(int j=0;j<cantidad;j++)
            {
                if(palabra3[j]>palabra3[cantidad])
                {
                    aux=palabra3[j];
                    palabra3[j]=palabra3[cantidad];
                    palabra3[cantidad]=aux;
                }
            }
        ++cantidad;
        }
    }
    cout<<palabra3<<endl;
}

int main()
{
    int veces;
    string palabra1,palabra2;
    cin>>veces;
    while(veces>0)
    {
        cin>>palabra1;
        cin>>palabra2;
        funcion(palabra1,palabra2);
        veces--;
    }
    return 0;
}

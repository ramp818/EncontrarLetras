#include <iostream>
#include <string>

using namespace std;

void funcion(string palabra1,string palabra2)
{
    string palabra3;
    int encuentra,encuentra2=1;
    for(int i=0;i<palabra1.length();i++)
    {
        encuentra=palabra2.find(palabra1[i]);
        encuentra2=palabra3.find(palabra1[i]);
        if(encuentra!=-1 && encuentra2 ==-1)
        {
            palabra3+=palabra1[i];
        }
    }
    cout<<palabra3;
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

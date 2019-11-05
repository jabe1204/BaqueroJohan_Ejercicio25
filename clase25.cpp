#include <iostream>
#include <cmath>
#include <stdlib.h>


int main()
{
    int x;

    std::cout<<"Escriba un número del 3 al 11"<<std::endl;
    std::cin>> x;
    
    if(x<3||x>11)
    {
        std::cout<<"El número no se encuentra en el rango pedido"<<std::endl;
    }
    else
    {
        float M[x+2][x];
    }
    return 0;
}

int relleno(int a,float M[0][0])
{
    for (int i = 0; i<a;i++)
    {
        for(int j =0; j <(a+2);j++)
        {
            M[j][i] = i+j;
        }
    }
}

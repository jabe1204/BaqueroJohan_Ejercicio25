#include<iostream>

void relleno(int l,float **m);
void ImprimeCabezas(int l,float **m);
void imprime(int l,float **m);

int main()
{
  std::cout<<"Escriba un numero del 3 al 11"<<std::endl;
  int x;
  std::cin>>x;
  std::cout<<"\n"<<std::endl;  
    
  if(x>=3 && x<=11)
  {
    float **matriz = new float *[x];

    for (int i = 0; i<x; i++)
    {
      matriz[i] = new float[x+2];
    }
    relleno(x,matriz);
    std::cout<<"\n"<<std::endl;
    ImprimeCabezas(x,matriz);
    std::cout<<"\n"<<std::endl;
    imprime(x,matriz);
  }
  
  else
  {
    std::cout<<"El numero no se encuentra en el rango pedido"<<std::endl;
  }
    
return 0;
}


void relleno(int l,float **m)
{
  for(int i = 0;i<(l+2);i++)
  {
    for(int j = 0; j<l; j++)
    {
      m[j][i] = i+j;
    }
  }
}

void ImprimeCabezas(int l,float **m)
{
  float sumacumulada=0;
  std::cout<<"Fila numero 0"<<"\t"<<"Suma acumulada"<<"\n"<<std::endl;  
  for (int i =0; i <l;i++) 
    {
      sumacumulada += m[i][0];
      std::cout<<m[i][0]<<"                     "<<sumacumulada<<"\n";
    }
}

void imprime(int l,float **m)
{
  for (int i =0; i < (l+2) ;i++) 
  {
    for ( int j = 0; j<l;j++) 
    { 
        std::cout<<" "<<m[j][i]<<" ";
    }
    std::cout<<std::endl;
  }
}
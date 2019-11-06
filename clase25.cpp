#include<iostream>

using namespace std;

void relleno(int l,float **m);

void ImprimeCabezas(int l,float **m);

void imprime(int l,float **m);

int main()
{
  cout<<"Escriba un numero del 3 al 11"<<endl;
  int l;
  cin>>l;
  cout<<"\n"<<endl;  
    
  if(l>=3 && l<=11)
  {

    float **matriz = new float *[l];

    for (int i = 0; i<l; i++)
    {
      matriz[i] = new float[l+2];
    }
    relleno(l,matriz);
    cout<<"\n"<<endl;
    ImprimeCabezas(l,matriz);
    cout<<"\n"<<endl;
    imprime(l,matriz);
  }
  
  else
  {
    cout<<"El numero no esta en el rango valido"<<endl;
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
  float sum=0;
  cout<<"Fila numero 0"<<"\t"<<"Suma acumulada"<<"\n"<<endl;  
  for (int i =0; i <l;i++) 
    {
      sum+=m[i][0];
      cout<<m[i][0]<<"                     "<<sum<<"\n";
    }
}



void imprime(int l,float **m)
{

  for (int i =0; i < l+2 ;i++) 
  {
    for ( int j = 0; j<l;j++) 
    { 
        cout<<" "<<m[j][i]<<" ";
    }
    cout<<endl;
  }
}
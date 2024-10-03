#include <iostream>
using namespace std;
void fun_c(double*a,int n, double *promedio,double*suma){
    int i;
    *suma=0.0;
    for(i=0; i<n;i++)
    *suma +=a[i];
    *promedio=*suma/n;
    cout<<"Resusltado"<<promedio<<endl;//imprime la direccion ya que es un puntero
    //ya dentro del main es un variable
}

int main(){
    double array[]={10.0,30.0, 40.0};
    int n= 3;
    double suma, promedio;
    fun_c(array,n,&promedio,&suma);

    cout<< "Suma: "<<suma<<endl;
    cout<< "Promedio: " <<promedio<<endl;
    return 0;
}
//los errores son tres suma = 0.0; debe ir con el *
//suma += (a + i); sumando direcciones de memoria no lo valores
//promedio = suma / n; promedio y suma son punteros 
#include<iostream>
#include<math.h>

 using namespace std;

 int main()
 {
     float Area, radio,pi;

     cout<< "PROGRAMA PARA HALLAR EL AREA DE UNA FIGURA PLANA"<<endl<<endl;
     cout<< "Digite el radio de la figura: "<<endl;
     cin>> radio;
     cout<< endl;

     pi=3.1416;
     Area=pi*(pow(radio,2));

     cout<<"El Area del Circulo es: "<<Area<<endl<<endl;
     cout<<"Sindy Dayana Cortes Toscano"<<endl;
     system("pause");
     return EXIT_SUCCESS;
 }
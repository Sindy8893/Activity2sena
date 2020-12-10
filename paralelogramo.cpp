#include<iostream>

 using namespace std;

 int main()
 {
     float Area, Base, Altura;

     cout<< "PROGRAMA PARA HALLAR EL AREA DE UNA FIGURA PLANA"<<endl<<endl;
     cout<< "Digite la base de la figura: "<<endl;
     cin>> Base;
     cout<< endl;

     cout<< "Digite la altura de la figura: "<<endl;
     cin>> Altura;
     cout<<endl;

     Area= Base*Altura;
     
     cout<<"El Area del Paralelogramo es: "<<Area<<endl<<endl;
     cout<<"Sindy Dayana Cortes Toscano"<<endl;
     system("pause");
     return EXIT_SUCCESS;
 }
#include<iostream>

 using namespace std;

 int main()
 {
     float Area, Base_mayor,base_menor, Altura;

     cout<< "PROGRAMA PARA HALLAR EL AREA DE UNA FIGURA PLANA"<<endl<<endl;
     cout<< "Digite la base mayor de la figura: "<<endl;
     cin>> Base_mayor;
     cout<< endl;

     cout<<"Digite la base menor de la figura: "<<endl;
     cin>>base_menor;
     cout<< endl;

     cout<< "Digite la altura de la figura: "<<endl;
     cin>> Altura;
     cout<<endl;

     Area= ((base_menor*Base_mayor)/2)*Altura;
     
     cout<<"El Area del Trapesio es: "<<Area<<endl<<endl;
     cout<<"Sindy Dayana Cortes Toscano"<<endl;
     system("pause");
     return EXIT_SUCCESS;
 }
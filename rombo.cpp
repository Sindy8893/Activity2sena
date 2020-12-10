#include<iostream>

 using namespace std;

 int main()
 {
     float Area, D_1, d_1;

     cout<< "PROGRAMA PARA HALLAR EL AREA DE UNA FIGURA PLANA"<<endl<<endl;
     cout<< "Digite la diagonal mayor de la figura: "<<endl;
     cin>> D_1;
     cout<< endl;

     cout<< "Digite la diagonal menor de la figura: "<<endl;
     cin>> d_1;
     cout<<endl;

     Area= (D_1*d_1)/2;
     
     cout<<"El Area del Rombo es: "<<Area<<endl<<endl;
     cout<<"Sindy Dayana Cortes Toscano"<<endl;
     system("pause");
     return EXIT_SUCCESS;
 }
#include<iostream>

using namespace std;

int main()
{
    float Area, base, altura;

    cout<< "PROGRAMA PARA HALLAR EL AREA DE UNA FIGURA PLANA"<<endl<<endl;
    cout<< "Digite la base: "<<endl;
    cin>> base;
    cout<<endl;

    cout<<"Digite la altura: "<<endl;
    cin>>altura;
    cout<<endl;

    Area= (base*altura)/2;

    cout<< "El Area del Triangulo es: "<<Area<<endl<<endl;
    cout<<"Sindy Dayana Cortes Toscano"<<endl;
    system("pause");
    return EXIT_SUCCESS;   
}
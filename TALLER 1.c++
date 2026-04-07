#include <iostream>
using namespace std;
int main() {
int op;
cout << "Lenguaje compilado: se traduce antes." << endl;
cout << "Lenguaje interpretado: se ejecuta directo." << endl;
cout << "C++ es compilado." << endl;
cout << "1. Estructurado  2. POO: ";
cin >> op;
if(op == 1){
    cout << "Estructurado: pasos ordenados." << endl;
}else{
    cout << "POO: usa objetos." << endl;
}
return 0;
}

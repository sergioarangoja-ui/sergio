#include 
using namespace std;
int main() 
{
double num1, num2;
double suma, resta, multiplicacion, division;
cout << "Ingrese el primer numero: ";
cin >> num1;
cout << "Ingrese el segundo numero: ";
cin >> num2;
suma = num1 + num2;
resta = num1 - num2;
multiplicacion = num1 * num2;
cout << "Suma: " << suma << endl;
cout << "Resta: " << resta << endl;
cout << "Multiplicacion: " << multiplicacion << endl;
if (num2 != 0) {
division = num1 / num2;
cout << "Division: " << division << endl;
} else {
cout << "No se puede dividir entre cero." << endl;
}
if (num1 > num2) {
cout << "El primer numero es mayor." << endl;
} else if (num1 < num2) {
cout << "El segundo numero es mayor." << endl;
} else {
cout << "Ambos numeros son iguales." << endl;
}
cout << "\nPrograma finalizado." << endl;
return 0;
}

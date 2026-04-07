#include <iostream>
#include <ctime>
using namespace std;

int main()
 {

string nombre;
getline(cin,nombre);

cout << nombre.length() << endl;

time_t t = time(0);
cout << ctime(&t);

cout << nombre.substr(0,3) << "2026";

return 0;
}

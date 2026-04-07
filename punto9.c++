#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream f("datos.txt", ios::app);
string nombre;
cin >> nombre;
f << nombre << endl;
f.close();
return 0;
}

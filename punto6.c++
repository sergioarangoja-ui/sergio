#include <iostream>
using namespace std;
int main() 
{
int n;
cin >> n;
double *a = new double[n];
for(int i=0;i<n;i++){
    cin >> a[i];
}
double suma=0;

for(int i=0;i<n;i++){
    suma += a[i];
}
cout << suma/n;
delete[] a;
return 0;
}

#include <iostream>
using namespace std;
int main() 
{
int n, suma=0;
bool primo = true;
cin >> n;
for(int i=1;i<=10;i++){
    cout << n*i << endl;
}

for(int i=1;i<=n;i++){
    suma += i;
}
cout << suma << endl;
for(int i=2;i<n;i++){
    if(n%i==0){
        primo = false;
    }
}
if(primo && n>1)
    cout << "Primo";
else
    cout << "No primo";
return 0;
}

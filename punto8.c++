#include <iostream>
using namespace std;
int main() 
{
int n;
try{
    cin >> n;
    if(n < 0){
        throw 1;
    }
}
catch(...){
    cout << "Error";
}
return 0;
}

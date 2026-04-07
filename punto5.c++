#include <iostream>
using namespace std;
int main()
 {
int op;
cin >> op;

if(op == 1){
    double r;
    cin >> r;
    cout << 3.14*r*r;
}
else if(op == 2){
    int n, f=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    cout << f;
}
else{
    int n;
    cin >> n;
    if(n%2==0)
        cout << "Par";
    else
        cout << "Impar";
}
return 0;
}



#include
using namespace std;
int main() {
double n;
cin >> n;
if(n < 0 || n > 5){
    cout << "Error";
}else if(n < 3){
    cout << "Reprueba";
}else if(n <= 4.5){
    cout << "Aprueba";
}else{
    cout << "Excelente";
}
return 0;
}

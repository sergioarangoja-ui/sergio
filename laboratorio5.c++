//LABORATORIO NUM5
#include <iostream>
using namespace std;
const int MAX = 15;
void ingresar(int m[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
       for (int j = 0; j < c; j++)
        cin >> m[i][j];
    }
}
void mostrar(int m[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}
void sumar(int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
     for (int j = 0; j < c; j++)
   r[i][j] = a[i][j] + b[i][j];
    }
}
void restar(int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
            r[i][j] = a[i][j] - b[i][j];
    }
}
void multiplicar(int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            r[i][j] = 0;
            for (int k = 0; k < c; k++)
                r[i][j] += a[i][k] * b[k][j];
        }
    }
}
int main()
{
    int a[MAX][MAX], b[MAX][MAX], r[MAX][MAX];
    int f, c;
    cout << "filas y columnas: ";
    cin >> f >> c;
    cout << "matriz A:\n";
    ingresar(a, f, c);
    cout << "matriz B:\n";
    ingresar(b, f, c);
    cout << "Resultado suma:\n";
    sumar(a, b, r, f, c);
    mostrar(r, f, c);
    cout << "Resultado resta:\n";
    restar(a, b, r, f, c);
    mostrar(r, f, c);
    cout << "Resultado multiplicacion:\n";
    multiplicar(a, b, r, f, c);
    mostrar(r, f, c);
    return 0;
}

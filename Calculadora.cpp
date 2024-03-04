#include <functional>
#include <iostream>
using namespace std;
// Función de suma
int add(int x, int y)
{
    return x + y;
}
// Función de resta
int subtraction(int x, int y)
{
    return x - y;
}
// Función de multiplicación
int multiply(int x, int y)
{
    return x * y;
}
 // Función de división
int division (int x, int y)
{
    return x / y;
}
// Función que invoca a otras funciones
int invoke (int x, int y, function<int(int,int)>func)
{
    return func(x , y);
}

int main ()
{   //Suma: 20 + 10
    cout << "Addition of 20 and 10 is ";
    cout << invoke(20, 10, &add)
    << '\n';
    //Resta 20 -10
    cout << "subtration of 20 minus 10 is ";
    cout << invoke(20, 10, &subtraction)
    << '\n';
    // multiplica 20 *10
    cout << "multiply of 20 for 10 is ";
    cout << invoke(20, 10, &multiply)
    << '\n';
    //Divide 20 / 10
    cout << "division of 20 by 10 is ";
    cout << invoke(20, 10, &division);

    return 0;
}
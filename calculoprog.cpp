#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main (){



// 2x^2*3x^3
// 3x^4*x^5
// x^2*x^2
// 4x^3*2x^4
// 7x^6*4x^3
// 3x^2/x^2
// x^3/2x^2
// 3x^2/5x^3
// 2x^4/3x^5
// 4x^5/x^6

int mult1, mult2,e1, e2, v, res;
char sinal1, sinal2, x, x2, tipo;

cout << "Indique o tipo( '\' para quociente, '*' para produto";
cin >> tipo;

cout <<"Insira o multiplicador da primeira váriavel : " << endl;
    cin >> mult1;

cout << "Insira expoente acompanhado da primeira váriavel x : " << endl;
    cin >> e1;

 cout <<"Insira o multiplicador da segunda váriavel : " << endl;
    cin >> mult2;

cout << "Insira expoente acompanhado da segunda váriavel x : " << endl;
    cin >> e2;







    if(tipo == '*'){
    cout <<  "F(X) = " << mult1 * e1 << "x" << "^" << (e1-1) << " * " << mult2 << "x^" << e2 << " + " << mult1 << "x^" << e1 << " * " << mult2 * e2 << "x^" << (e2-1) << endl;
    }
    else if(tipo == '/'){
    cout <<  "F(X) = (" << mult1 * e1 << "x" << "^" << (e1-1) << " * " << mult2 << "x^" << e2 << " - " << mult1 << "x^" << e1 << " * " << mult2 * e2 << "x^" << (e2-1) << ") / (" << mult2 * e2 << "x^" << (e2-1)  << ")^2" << endl;
    }




return 0;
}

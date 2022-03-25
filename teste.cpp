#include <iostream> // inclus�o das bibliotecas necess�rias
#include <cmath>
using namespace std;
const float G = 6.67 * pow(10,-11); // declara��o da constante, escopo global
int main() {
int r12, r23, r13; // declara��o de vari�veis, escopo local do main
 float m1, m2, m3, energia;
// corpo de instru��es
 cout << "massas m1, m2, m3 em gramas: "; // informa ao usuario oq ele deve digitar
 cin >> m1 >> m2 >> m3; // faz a leitura da informacao
 cout << "distancias r12, r13, r23 em m: ";
 cin >> r12 >> r13 >> r23;
 m1 = m1/1000; // converter gramas para kg em fcao de G
 m2 = m2/1000;
 m3 = m3/1000;
 energia = G * (m1*m2/r12 + m1*m3/r13 + m2*m3/r23); // calculo final

 cout << "Energia de coesao = " << energia << endl; // apresenta��o do resultado
return 1;
}

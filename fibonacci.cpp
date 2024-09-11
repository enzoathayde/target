#include<iostream>

using namespace std;

void fibonacci(int valor) {

  int numeros[10000];
  bool verified = false;

  for (int i = 0; i < 40; i++)
  {
    if( i == 0 ) {
      numeros[i] = 0;
    } else if (i == 1) {
        numeros[i] = 1;
    } else {
      numeros[i] = numeros[i-1] + numeros[i-2];
    }
    if(valor == numeros[i]) {
      cout << "Pertence\n";
      verified = true;
    }  
  }

  if(!verified) {  cout << "N pertence\n"; }

  
}


int main() {
    int numero = 0;
    cout << "Informe um valor: ";
    cin >> numero;
    fibonacci(numero);
}
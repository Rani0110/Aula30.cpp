#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    int resultado = 0;
    
    cout << "Digite um inteiro e saiba o quadrado desse número: ";
    cin >> numero;

    while (numero != 0) {
        resultado = numero * numero;
        cout << "O quadrado de " << numero << " é " << resultado << endl;
        
        cout << "Digite o próximo número (ou 0 para sair): ";
        cin >> numero;
    }
    
    return 0;
}

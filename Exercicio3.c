#include <iostream>
using namespace std;

int main() {
    int indice = 12;
    int soma = 0;
    int k = 1;

    while (k < indice) {
        k = k + 1;
        soma = soma + k;
    }

    cout << "O valor final de SOMA é: " << soma << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

//exercicio2
int main() {
    string texto;
    int contador = 0;

    cout << "Informe uma string: ";
    getline(cin, texto);

    for (char c : texto) {
        if (c == 'a' || c == 'A') {
            contador++;
        }
    }

    if (contador > 0) {
        cout << "A letra 'a' (maiúscula ou minúscula) ocorre " << contador << " vezes." << endl;
    } else {
        cout << "A letra 'a' (maiúscula ou minúscula) não foi encontrada." << endl;
    }

    return 0;
}

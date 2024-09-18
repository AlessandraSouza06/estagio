#include <iostream>
using namespace std;

//exercicio1
bool pertence_fibonacci(int num) {
    int a = 0, b = 1, c = 0;
    
    if (num == 0 || num == 1) {
        return true;
    }

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    return (c == num);
}

int main() {
    int num;
    
    cout << "Informe o número (por entrada de teclado): ";
    cin >> num;

    if (pertence_fibonacci(num)) {
        cout << "O número " << num << " pertence à sequência." << endl;
    } else {
        cout << "O número " << num << " não pertence à sequência." << endl;
    }

    return 0;
}

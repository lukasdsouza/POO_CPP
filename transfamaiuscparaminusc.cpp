#include <iostream>

using namespace std;

char toUpper(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return letra - 32;
    }
    return letra;
}

char toLower(char letra) {
    if (letra >= 'A' && letra <= 'Z') {
        return letra + 32;
    }
    return letra;
}

int main() {
    char frase[100];

    cout << "Digite uma frase: ";
    cin.get(frase, 100);

    cout << "Frase em maiúsculas: ";
    for (int i = 0; frase[i] != '\0'; i++) {
        cout << toUpper(frase[i]);
    }
    cout << endl;

    cout << "Frase em minúsculas: ";
    for (int i = 0; frase[i] != '\0'; i++) {
        cout << toLower(frase[i]);
    }
    cout << endl;

    return 0;
}

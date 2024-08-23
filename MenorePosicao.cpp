#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> X(N);
    
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int menorValor = X[0];
    int posicao = 0;
    
    for (int i = 1; i < N; i++) {
        if (X[i] < menorValor) {
            menorValor = X[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menorValor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}

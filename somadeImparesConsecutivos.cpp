#include <iostream>

using namespace std;

int main() {
    int N;
    
    cin >> N;
    
    while (N--) {
        int X, Y;
        cin >> X >> Y;

        if (X % 2 == 0) {
            X++;
        }
        
        int soma = 0;
        
        for (int i = 0; i < Y; i++) {
            soma += X;
            X += 2;
        }
        
        cout << soma << endl;
    }

    return 0;
}

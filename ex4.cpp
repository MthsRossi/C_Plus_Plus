#include <iostream>
using namespace std;

void verificaSimetria() {
    int N, matriz[20][20], i, j;

    cout << "Digite o tamanho da matriz (N x N): ";
    cin >> N;

    cout << "Digite a matriz:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    bool simetrica = true;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = false;
                break;
            }
        }
    }

    if (simetrica) {
        cout << endl << "A matriz é simétrica." << endl;
    } else {
        cout << endl << "A matriz não é simétrica." << endl;
    }
}

int main() {
    verificaSimetria();
    return 0;
}

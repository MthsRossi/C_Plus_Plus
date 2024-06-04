#include <iostream>
using namespace std;

void calculaTransposta() {
    int N, matriz[20][20], i, j;

    cout << "Digite o tamanho da matriz (N x N): ";
    cin >> N;

    cout << "Digite a matriz:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << endl << "Transposta:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    calculaTransposta();
    return 0;
}

#include <iostream>
using namespace std;

void buscaValorNaMatriz() {
    int N, matriz[20][20], X, i, j;

    cout << "Digite o tamanho da matriz (N x N): ";
    cin >> N;

    cout << "Digite a matriz:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o valor a ser buscado: ";
    cin >> X;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matriz[i][j] == X) {
                cout << "Valor encontrado na linha " << i+1 << " e coluna " << j+1 << "." << endl;
                return;
            }
        }
    }

    cout << "NÃO ENCONTRADO" << endl;
}

int main() {
    buscaValorNaMatriz();
    return 0;
}

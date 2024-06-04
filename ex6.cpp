#include <iostream>
using namespace std;

void calculaSomaColunas() {
    int N, M, matriz[20][20], i, j, somaColuna[20];

    cout << "Digite o número de linhas (N): ";
    cin >> N;

    cout << "Digite o número de colunas (M): ";
    cin >> M;

    cout << "Digite a matriz:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cin >> matriz[i][j];
        }
    }

    for (j = 0; j < M; j++) {
        somaColuna[j] = 0;
        for (i = 0; i < N; i++) {
            somaColuna[j] += matriz[i][j];
        }
    }

    cout << endl << "Soma dos elementos de cada coluna:" << endl;
    for (j = 0; j < M; j++) {
        cout << somaColuna[j] << " ";
    }
    cout << endl;
}

int main() {
    calculaSomaColunas();
    return 0;
}

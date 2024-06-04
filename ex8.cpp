#include <iostream>
using namespace std;

void calculaProdutoMatrizes() {
    int N, M, P, Q, matrizA[20][20], matrizB[20][20], matrizC[20][20], i, j, k;

    cout << "Digite o número de linhas da matriz A (N): ";
    cin >> N;

    cout << "Digite o número de colunas da matriz A (M): ";
    cin >> M;

    cout << "Digite o número de linhas da matriz B (P): ";
    cin >> P;

    cout << "Digite o número de colunas da matriz B (Q): ";
    cin >> Q;

    if (M != P) {
        cout << endl << "Não é possível calcular o produto das matrizes." << endl;
        return;
    }

    cout << "Digite a matriz A:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cin >> matrizA[i][j];
        }
    }

    cout << "Digite a matriz B:" << endl;
    for (i = 0; i < P; i++) {
        for (j = 0; j < Q; j++) {
            cin >> matrizB[i][j];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < Q; j++) {
            matrizC[i][j] = 0;
            for (k = 0; k < M; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    cout << endl << "Matriz C (resultado do produto):" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < Q; j++) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    calculaProdutoMatrizes();
    return 0;
}

#include <iostream>
using namespace std;

void calculaSomaMatriz() {
    int M[5][5], i, j, somaLinha4, somaColuna2, somaDiagonalPrincipal, somaDiagonalSecundaria, somaTotal = 0;

    cout << "Digite a matriz M (5x5):" << endl;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> M[i][j];
        }
    }

    somaLinha4 = 0;
    for (j = 0; j < 5; j++) {
        somaLinha4 += M[4][j];
    }

    somaColuna2 = 0;
    for (i = 0; i < 5; i++) {
        somaColuna2 += M[i][2];
    }

    somaDiagonalPrincipal = 0;
    for (i = 0; i < 5; i++) {
        somaDiagonalPrincipal += M[i][i];
    }

    somaDiagonalSecundaria = 0;
    for (i = 0; i < 5; i++) {
        somaDiagonalSecundaria += M[i][4-i];
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            somaTotal += M[i][j];
        }
    }

    cout << endl << "Soma da linha 4: " << somaLinha4 << endl;
    cout << "Soma da coluna 2: " << somaColuna2 << endl;
    cout << "Soma da diagonal principal: " << somaDiagonalPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << somaDiagonalSecundaria << endl;
    cout << "Soma de todos os elementos da matriz: " << somaTotal << endl;

    cout << endl << "Matriz M:" << endl;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    calculaSomaMatriz();
    return 0;
}

#include <iostream>
using namespace std;

int main() {
   int MAT[20][20], NEW[20][20];

   // Lê a matriz de 20 x 20 elementos
   for (int l = 0; l < 20; l++) {
      for (int c = 0; c < 20; c++) {
         cout << "Digite o elemento M[" << l << "][" << c << "]: ";
         cin >> MAT[l][c];
      }
   }

   // Divide cada elemento de uma linha da matriz pelo elemento da diagonal principal desta linha
   for (int l = 0; l < 20; l++) {
      for (int c = 0; c < 20; c++) {
         if (MAT[l][c] != 0) {
            NEW[l][c] = MAT[l][c] / MAT[l][l];
         } else {
            NEW[l][c] = 0;
         }
      }
   }

   // Imprime a nova matriz
   cout << "Nova matriz:" << endl;
   for (int l = 0; l < 20; l++) {
      for (int c = 0; c < 20; c++) {
         cout << NEW[l][c] << " ";
      }
      cout << endl;
   }

   return 0;
}

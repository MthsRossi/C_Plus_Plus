#include <iostream>
using namespace std;

int main() {
   int MAT[5][5];

   // Preenche a matriz com 1 na diagonal principal e 0 nos demais elementos
   for (int l = 0; l < 5; l++) {
      for (int c = 0; c < 5; c++) {
         if (l == c) {
            MAT[l][c] = 1;
         } else {
            MAT[l][c] = 0;
         }
      }
   }

   // Imprime a matriz
   cout << "Matriz:" << endl;
   for (int l = 0; l < 5; l++) {
      for (int c = 0; c < 5; c++) {
         cout << MAT[l][c] << " ";
      }
      cout << endl;
   }

   return 0;
}

#include <iostream>
using namespace std;

int main() {
   int n, MAT[10][10];

   cout << "Digite o tamanho da matriz (n<10): ";
   cin >> n;

   // Preenche a matriz com n�meros digitados pelo usu�rio
   for (int l = 0; l < n; l++) {
      for (int c = 0; c < n; c++) {
         cout << "Digite o elemento M[" << l << "][" << c << "]: ";
         cin >> MAT[l][c];
      }
   }

   // Verifica se a matriz � triangular superior
   for (int l = 0; l < n; l++) {
      for (int c = 0; c < l; c++) {
         if (MAT[l][c] != 0) {
            cout << "A matriz n�o � triangular superior." << endl;
            return 0;
         }
      }
   }

   cout << "A matriz � triangular superior." << endl;

   return 0;
}

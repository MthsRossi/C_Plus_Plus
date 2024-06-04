#include <iostream>
using namespace std;

int main() {
   int MAT[5][6], SOMALINHA[5], TOTAL = 0;

   // Preenche a matriz com números aleatórios
   for (int l = 0; l < 5; l++) {
      SOMALINHA[l] = 0;
      for (int c = 0; c < 6; c++) {
         MAT[l][c] = rand() % 100;
         SOMALINHA[l] += MAT[l][c];
      }
      cout << "A soma da linha " << l << " e': " << SOMALINHA[l] << endl;
      TOTAL += SOMALINHA[l];
   }

   cout << "A soma total e': " << TOTAL << endl;

   return 0;
}

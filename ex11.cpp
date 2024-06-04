#include <iostream>
using namespace std;

void calculaMediaTurma() {
    int N, matriz[120][3], i, j;
    float mediaTurma = 0, mediaAluno, aprovados = 0, exame = 0, dp = 0;

    cout << "Digite o número de alunos (máximo de 120): ";
    cin >> N;

    cout << "Digite as notas dos alunos:" << endl;
    for (i = 0; i < N; i++) {
        matriz[i][0] = i+1;
        for (j = 1; j < 3; j++) {
            cin >> matriz[i][j];
            mediaTurma += matriz[i][j];
        }
        mediaAluno = (matriz[i][1] + matriz[i][2]) / 2;
        if (mediaAluno >= 7) {
            aprovados++;
        } else if (mediaAluno >= 5) {
            exame++;
        } else {
            dp++;
        }
    }

    mediaTurma /= (N * 2);

    cout << endl << "Notas" << endl;
    cout << "No do aluno 1o Bimestre 2o Bimestre Média Situação" << endl;
    for (i = 0; i < N; i++) {
        mediaAluno = (matriz[i][1] + matriz[i][2]) / 2;
        if (mediaAluno >= 7) {
            cout << matriz[i][0] << " " << matriz[i][1] << " " << matriz[i][2] << " " << mediaAluno << " Aprovado" << endl;
        } else if (mediaAluno >= 5) {
            cout << matriz[i][0] << " " << matriz[i][1] << " " << matriz[i][2] << " " << mediaAluno << " Exame" << endl;
        } else {
            cout << matriz[i][0] << " " << matriz[i][1] << " " << matriz[i][2] << " " << mediaAluno << " DP" << endl;
        }
    }

    cout << endl << "Média da turma: " << mediaTurma << endl;
    cout << "Situação No de alunos % do total" << endl;
    cout << "Aprovado " << aprovados << " " << (aprovados / N) * 100 << "%" << endl;
    cout << "Exame " << exame << " " << (exame / N) * 100 << "%" << endl;
    cout << "DP " << dp << " " << (dp / N) * 100 << "%" << endl;
}

int main() {
    calculaMediaTurma();
    return 0;
}

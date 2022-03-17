#include <stdio.h>
#include <stdlib.h>

#define QTDA 50

typedef struct {
    int codigo; // entre 1 e 50
    char nome[35];
    float nota; // entre 0 e 10
} Turma; // 50 alunos

int main() {
    Turma aluno;
    int cont = 0;

    FILE *arq = fopen("turmas.dat", "wb");

    if (arq == NULL) { // erro de abertura
        printf("Erro na abertura do arquivo!");
        return 1;
    } else {
        for (cont = 0; cont < QTDA; cont++) {
            printf("\n\nAluno numero [%d]\n\n", cont + 1);

            do {
                printf("Codigo (1 a 50): ");
                scanf("%d", &aluno.codigo);
            } while (aluno.codigo < 1 || aluno.codigo > QTDA);

            printf("Nome: ");
            scanf("%s", &aluno.nome);

            do {
                printf("Nota (0 a 10): ");
                scanf("%f", &aluno.nota);
            } while (aluno.nota < 0 || aluno.nota > 10); 

            // deslocamento do cursor para a posição desejada
            fseek(arq, sizeof(Turma)*(aluno.codigo - 1), SEEK_SET);
            // gravando os dados dos alunos no arquivo
            fwrite(&aluno, sizeof(Turma), 1, arq);
        }
        fclose(arq);
    }
    return 0;
}
#include <stdio.h>

/* uso de fputs() e fgets()
    fputs(): escreve uma string inteira dentro de um arquivo
    fgets(): leitura do arquivo
*/

int main() {
    FILE *pont_arq; // criação do ponteiro
    int r; // recebe o retorno da fputs
    char texto_str[51];

    // abrindo  o arquivo para a gravação
    pont_arq = fopen("arquivo2.txt", "w"); // w = write

    // verificação 1
    if (pont_arq == NULL) {
        printf("Erro ao tentar abrir o arquivo!");
        exit(1); // saindo do programa
    }

    // fputs!!!!!!!!

    // gravando strings no arquivo
    r = fputs("Programa de Linguaguem em C? Sim!", pont_arq);

    // verificação 2
    if (r == EOF) {
        printf("Erro ao tentar gravar os dados\n!");
        exit(1); // saindo do programa
    } else {
        printf("Dados gravados com sucesso!");
    }

    // fechamento do arquivo
    fclose(pont_arq);

    // fgets!!!!!!!!

    printf("\n\n----- Leitura dos dados gravados no arquivo -----\n");

    // abrindo o arquivo para leitura
    pont_arq = fopen("arquivo2.txt", "r"); // r = read

    // enquanto ñ for fim de arquivo o looping será executado
    // e será lido o conteúdo do arquivo e impresso na tela com printf
    while (fgets(texto_str, 50, pont_arq) != NULL) {
        printf("%s\n", texto_str);
    }

    // fechamento do arquivo
    fclose(pont_arq);

    system("pause");

    return 0;
}


#include <stdio.h>

int main() {
    FILE *pont_arq; 
    int r; 
    char texto_str[51];

    pont_arq = fopen("arquivo2.txt", "w"); 

    if (pont_arq == NULL) {
        printf("Erro ao tentar abrir o arquivo!");
        exit(1); 
    }

    r = fputs("Programa de Linguaguem em C? Sim!", pont_arq);

    if (r == EOF) {
        printf("Erro ao tentar gravar os dados\n!");
        exit(1); 
    } else {
        printf("Dados gravados com sucesso!");
    }

    fclose(pont_arq);

    printf("\n\n----- Leitura dos dados gravados no arquivo -----\n");

    pont_arq = fopen("arquivo2.txt", "r"); 

    while (fgets(texto_str, 50, pont_arq) != NULL) {
        printf("%s\n", texto_str);
    }

    fclose(pont_arq);

    system("pause");

    return 0;
}


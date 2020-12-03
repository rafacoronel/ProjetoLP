int menu(int opcao) {
    printf("1-\n"); //opção 1
    printf("2-\n"); //opção 2
    printf("3-\n"); //opção 3

    do {
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
    } while (opcao > 3 || opcao < 1); //pedir até ser válida

    switch (opcao) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
    }
    return 0;
}

int dadosFunci(int codigo, char nome[30], int numeroTele) {
    do {
        printf("Insira o seu código: ");
        scanf("%d", &codigo);
    } while (codigo <= 0);

    printf("Insira o seu nome: ");
    scanf("%s", nome); //arranjar alternativas pq só guarda o primeiro nome

    int numero1 = 0, numero2 = 0, numero3 = 0;

    printf("Insira o seu número de telefone: ");
    scanf("%d", &numeroTele);
    return 0;
}

int main(int argc, char** argv) {
    int escolha = 0, chave = 0, telefone = 0;
    char titulo[30];

    menu(escolha);

    dadosFunci(chave, titulo, telefone);
    return (EXIT_SUCCESS);
}

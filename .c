struct Funcionarios{
   char nome[15];
   int num_telefone, num_filho, codigo;
   char data_saida[15];
};
struct Funcionarios V[2];

int inserirFuncionarios(struct Funcionarios *V){
    int i;
    
    for(i=0;i<2;i++){
        printf("Intro.o seu nome:");
        fgets(V[i].nome, 15, stdin);
        puts("------------------------");
        setbuf(stdin, NULL);
        printf("Intro.o numero telefone:");
        scanf("%d\n", &V[i].num_telefone);
        puts("------------------------");
        setbuf(stdin, NULL);
        printf("\nQtos filhos tem:");
        scanf("%d\n", &V[i].num_filho);
        puts("------------------------");
        setbuf(stdin, NULL);
        printf("Intro.o seu codigo:");
        scanf("%d\n", &V[i].codigo);
        puts("------------------------");
        setbuf(stdin, NULL);
        printf("Intro.a data que saiu da empresa:");
        fgets(V[i].data_saida, 15, stdin);
        puts("------------------------");
        setbuf(stdin, NULL);
        puts("\n\n");
        return i;
    }
    return -1;
}

int buscaCodigo(struct Funcionarios *V, int N, int elem){
    int i;
    for(i=0;i<N;i++){
        if(elem==V[i].codigo){
            return i;
        }
    }
    return -1;
}
int buscaNome(struct Funcionarios *V, int N, char *elem){
    int i;
    
    for(i=0;i<N;i++){
        if(strcmp(elem, V[i].nome)==0){
            return i;
        }
    }
    return -1;
}
int dadosFuncionarios(struct Funcionarios *V){
    int i;
    
    for(i=0;i<2;i++){
        printf("Nome do funcionario:\t%s\n", V[i].nome);
        printf("Numero de telefone do funcionario:\t%d\n", V[i].num_telefone);
        printf("Numero de filhos que possui:\t%d\n", V[i].num_filho);
        printf("O seu codigo:\t%d\n", V[i].codigo);
        printf("A data em que deixou a empresa:\t%s\n\n", V[i].data_saida);
    }
    return i;
}

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
    
    inserirFuncionarios(&V);
    dadosFuncionarios(&V);

    dadosFunci(chave, titulo, telefone);
    return (EXIT_SUCCESS);
}

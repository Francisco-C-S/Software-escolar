#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int fim = 5;
struct date {
        int dia;
        int mes;
        int ano;    
    };
 
struct disciplina{
        char nome[50];
        char professor[50];
        float notas[3];
    };
 
struct aluno{
        int matricula;
        char nome[50];
        char endereco[100];
        struct date dataNascimento;
        struct disciplina disciplinas;
}tipoAluno[20];
 
void cadastroAutomatico(){
     
tipoAluno[0].matricula = 20151740;
strcpy(tipoAluno[0].nome,"Francisco Carvalho Santos");
strcpy(tipoAluno[0].endereco,"Rua projetada, N: 58, Bairro: Juranir");
tipoAluno[0].dataNascimento.dia = 07;
tipoAluno[0].dataNascimento.mes = 07;
tipoAluno[0].dataNascimento.ano = 1997;
strcpy(tipoAluno[0].disciplinas.nome,"Laboratorio de programa��o");
strcpy(tipoAluno[0].disciplinas.professor,"Erinalda");
tipoAluno[0].disciplinas.notas[0] = 10.0;
tipoAluno[0].disciplinas.notas[1] = 9.5;
tipoAluno[0].disciplinas.notas[2] = 9.0;
     
tipoAluno[1].matricula = 03151740;
strcpy(tipoAluno[1].nome,"Matheus Carvalho Santos");
strcpy(tipoAluno[1].endereco,"Soisao, SN");
tipoAluno[1].dataNascimento.dia = 03;
tipoAluno[1].dataNascimento.mes = 01;
tipoAluno[1].dataNascimento.ano = 2009;
strcpy(tipoAluno[1].disciplinas.nome,"Artes");
strcpy(tipoAluno[1].disciplinas.professor,"Rubinha");
tipoAluno[1].disciplinas.notas[0] = 9.5;
tipoAluno[1].disciplinas.notas[1] = 9.8;
tipoAluno[1].disciplinas.notas[2] = 10.0;
 
tipoAluno[2].matricula = 20081740;
strcpy(tipoAluno[2].nome,"Jorge Carvalho Santos");
strcpy(tipoAluno[2].endereco,"Sao Luis do Maranhao");
tipoAluno[2].dataNascimento.dia = 20;
tipoAluno[2].dataNascimento.mes = 8;
tipoAluno[2].dataNascimento.ano = 1999;
strcpy(tipoAluno[2].disciplinas.nome,"Quimica");
strcpy(tipoAluno[2].disciplinas.professor,"Josie");
tipoAluno[2].disciplinas.notas[0] = 9.0;
tipoAluno[2].disciplinas.notas[1] = 9.5;
tipoAluno[2].disciplinas.notas[2] = 10.0;
 
tipoAluno[3].matricula = 10994010;
strcpy(tipoAluno[3].nome,"Maria Vitoria Araujo Carvalho Santos");
strcpy(tipoAluno[3].endereco,"Interior, SN");
tipoAluno[3].dataNascimento.dia = 30;
tipoAluno[3].dataNascimento.mes = 10;
tipoAluno[3].dataNascimento.ano = 1940;
strcpy(tipoAluno[3].disciplinas.nome,"Ciencias");
strcpy(tipoAluno[3].disciplinas.professor,"Regina");
tipoAluno[3].disciplinas.notas[0] = 3.0;
tipoAluno[3].disciplinas.notas[1] = 4.0;
tipoAluno[3].disciplinas.notas[2] = 4.5;
 
tipoAluno[4].matricula = 91994010;
strcpy(tipoAluno[4].nome,"Lourisval Isidorio dos Santos");
strcpy(tipoAluno[4].endereco,"Centro");
tipoAluno[4].dataNascimento.dia = 10;
tipoAluno[4].dataNascimento.mes = 9;
tipoAluno[4].dataNascimento.ano = 1940;
strcpy(tipoAluno[4].disciplinas.nome,"Matematica");
strcpy(tipoAluno[4].disciplinas.professor,"Carlos");
tipoAluno[4].disciplinas.notas[0] = 4.0;
tipoAluno[4].disciplinas.notas[1] = 6.0;
tipoAluno[4].disciplinas.notas[2] = 8.0;
 
}
 
void cadastrarAluno() {
        printf("\nDigite a matricula do aluno: ");
        scanf("%d", &tipoAluno[fim].matricula);
        setbuf(stdin, NULL);
        printf("\nDigite o nome do aluno: ");
        scanf("%[^\n]s", tipoAluno[fim].nome);
        setbuf(stdin, NULL);
        printf("\nDigite o endereco do aluno: ");
        scanf("%[^\n]s", tipoAluno[fim].endereco);
        setbuf(stdin, NULL);
        printf("\nDigite a data de nascimento do aluno: (dd/mm/aa): ");
        scanf("%d %d %d", &tipoAluno[fim].dataNascimento.dia, &tipoAluno[fim].dataNascimento.mes, &tipoAluno[fim].dataNascimento.ano);
        setbuf(stdin, NULL);
        printf("\nDigite o nome da disciplina: ");
        gets(tipoAluno[fim].disciplinas.nome);
        setbuf(stdin, NULL);        
        printf("\nDigite o nome do professor da disciplina: "); 
        gets(tipoAluno[fim].disciplinas.professor);
        setbuf(stdin, NULL);        
        printf ("\nDigite as 3 notas do aluno respectivamente: ");
        scanf("%f %f %f", &tipoAluno[fim].disciplinas.notas[0],&tipoAluno[fim].disciplinas.notas[1],&tipoAluno[fim].disciplinas.notas[2]);
        fim++;
        printf("\nAluno cadastrado com sucesso\n");
    }
 
void excluirAluno(int posicao){
    int i;
    if (fim<=1)fim--;
    else {
        for (i=posicao;i<fim;i++){
            tipoAluno[i]=tipoAluno[i+1];
        }
        fim--;
    }
 printf("\nAluno excluido com sucesso \n");
}
 
void alterarAluno(int posicaoA){
    int i=0;
    for (i=posicaoA;i<=posicaoA;i++){
    printf ("\nDADOS ATUAIS\n");
    printf ("\nMatricula: %d\n", tipoAluno[i].matricula);
    printf ("Nome: %s\n", tipoAluno[i].nome);
    printf ("Endereco: %s\n", tipoAluno[i].endereco);     
    printf ("Data de nascimento: %d %d %d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
    printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
    printf ("\n");
     
    printf("\n\nDigite Novamente todos os dados do aluno\n\n");
    printf("\nDigite a matricula do aluno: ");
    scanf("%d", &tipoAluno[posicaoA].matricula);
    setbuf(stdin, NULL);
    printf("\nDigite o nome do aluno: ");
    scanf("%[^\n]s", tipoAluno[posicaoA].nome);
    setbuf(stdin, NULL);
    printf("\nDigite o endereco do aluno: ");
    scanf("%[^\n]s", tipoAluno[posicaoA].endereco);
    setbuf(stdin, NULL);
    printf("\nDigite a data de nascimento do aluno: (dd/mm/aa): ");
    scanf("%d %d %d", &tipoAluno[posicaoA].dataNascimento.dia, &tipoAluno[posicaoA].dataNascimento.mes, &tipoAluno[posicaoA].dataNascimento.ano);
    setbuf(stdin, NULL);
    printf("\nDigite o nome da disciplina: ");
    gets(tipoAluno[posicaoA].disciplinas.nome);
    setbuf(stdin, NULL);        
    printf("\nDigite o nome do professor da disciplina: "); 
    gets(tipoAluno[posicaoA].disciplinas.professor);
    setbuf(stdin, NULL);        
    printf ("\nDigite as 3 notas do aluno respectivamente: ");
    scanf("%f %f %f", &tipoAluno[posicaoA].disciplinas.notas[0],&tipoAluno[posicaoA].disciplinas.notas[1],&tipoAluno[posicaoA].disciplinas.notas[2]);
    printf("\nAlteracao realizada com sucesso\n");
	}
}
 
void buscarAluno(){
    char var[20];
    int retorno, tamanho, i, valor;
         
    fflush(stdin);
    printf ("\nDigite um nome a ser procurado: ");
    gets (var);
         
    for (i=0;i<=fim;i++){
        tamanho=strlen(var);
        retorno = strncmp(tipoAluno[i].nome, var, tamanho);
        if (retorno==0){
            valor=1;
            break;
        }else{
            valor=0;
        }
    }
    if (valor==1){
        printf ("\nMatricula: %d\n", tipoAluno[i].matricula);
        printf ("Nome: %s\n", tipoAluno[i].nome);
        printf ("Endereco: %s\n", tipoAluno[i].endereco);     
        printf ("Data de nascimento: %d %d %d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
        printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
        printf ("\n");          
    }else if (valor==0){
        printf ("Aluno nao encontrado");
    }
 
}
 
void listarAluno () {
    int i;
    for (i=0;i<fim;i++){
        printf ("\nMatricula: %d\n", tipoAluno[i].matricula);
        printf ("Nome: %s\n", tipoAluno[i].nome);
        printf ("Endereco: %s\n", tipoAluno[i].endereco);     
        printf ("Data de nascimento: %d %d %d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
        printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
        printf ("\n");     
    }
     
}
 
void listarAprovado () {
    int i, valor;
    float media;
     
    valor=0;
    media=0;
    for (i=0;i<fim;i++){
        media = (tipoAluno[i].disciplinas.notas[0]+tipoAluno[i].disciplinas.notas[1]+tipoAluno[i].disciplinas.notas[2])/3;
        if (media>=7.0){
        printf ("\nMatricula: %d\n", tipoAluno[i].matricula);
        printf ("Nome: %s\n", tipoAluno[i].nome);
        printf ("Endereco: %s\n", tipoAluno[i].endereco);     
        printf ("Data de nascimento: %d %d %d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
        printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
        printf ("\n");     
            valor=1;
            }else{
                valor=1;
            }
        }
        if (valor==0){
            printf ("Nenhum aluno aprovado encontrado");
        }
         
    }   
 
void listarDisciplina () {
    char var[20];
    int retorno, tamanho, i, valor=0;
    float media;
         
    fflush(stdin);
    printf ("\nDigite uma disciplina a ser procurada: ");
    gets (var);
         
    for (i=0;i<=fim;i++){
        tamanho=strlen(var);
        retorno = strncmp(tipoAluno[i].disciplinas.nome, var, tamanho);
        if (retorno==0){
            media = (tipoAluno[i].disciplinas.notas[0]+tipoAluno[i].disciplinas.notas[1]+tipoAluno[i].disciplinas.notas[2])/3;
            printf ("Matricula: %d\n", tipoAluno[i].matricula);
            printf ("Nome: %s\n", tipoAluno[i].nome);
            printf ("Endereco: %s\n", tipoAluno[i].endereco);       
            printf ("Data de nascimento: %d/%d/%d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
            printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
            printf ("MEDIA DO ALUNO: %.2f\n", media);
            if (media>=7.0){
                printf ("SITUACAO: AM\n");
            }else if ((media <7.0)&&(media>=4.0)){
                printf ("SITUACAO: EF/n");
            }else if (media<4.0){
                printf ("SITUACAO: RN\n");
            }
            printf ("\n");
            valor=1;
        }
    }       
    if (valor==0){
        printf ("Nenhum aluno encontrado para a disciplina procurada");
    }   
}   
 
 
int main () {
    int opcao, posicao, posicaoA, i;
    struct aluno nomeP;
     
    cadastroAutomatico();
 
    while (opcao!=8){
        printf ("\n--------------------------------MENU--------------------------------\n\nDigite um dos numeros abaixo de acordo com sua opcao de preferencia.\n\n");
        printf ("1. Cadastrar aluno\n2. Excluir aluno\n3. Alterar aluno\n4. Buscar alunos\n5. Listar todos os alunos\n6. Listar aluno de determinada disciplina\n7. Listar alunos aprovados\n8. Sair\n\n");
        scanf ("%d", &opcao);
        if (opcao==1){
            if (fim<=20){
                cadastrarAluno();
            }else{
                printf ("Impossivel cadastrar. Vetor cheio.");
            }
 
        }else if (opcao==2){
            printf ("\nDigite a posicao a ser excluida: ");
            scanf ("%d", &posicao);
            if (posicao<=fim){
                excluirAluno(posicao);
            }else{
                printf ("Impossivel excluir. Posicao invalida.");
            }
 
        }else if (opcao==3){
            printf ("\nDigite a posicao a ser alterada: ");
            scanf ("%d", &posicaoA);
            if (posicao<=fim){
                alterarAluno(posicaoA);
            }else{
                printf ("\nImpossivel Excluir. Posicao nao preenchida.");
            }
        }else if (opcao==4){
            buscarAluno();
        }else if (opcao==5){
            if ((fim!=0) && (fim<=20)){
                listarAluno();              
            }else{
                printf ("Nenhum aluno cadastrado");
            }
             
        }else if (opcao==6){
            if ((fim!=0) && (fim<=20)){          
                listarDisciplina();     
            }else{
                printf ("Nenhum aluno encontrado para a disciplina procurada");
            }
             
        }else if (opcao==7){
            if ((fim!=0) && (fim<=20)){
                listarAprovado();               
            }else{
                printf ("Nenhum aluno cadastrado.");
            }           
        }else if (opcao==8){
            break;
        }   
    }
    system("pause");
    return 0;
}

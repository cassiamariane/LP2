#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[40], curso[20];
    int idade, cr, matricula;
}aluno;

typedef struct{
    int falta, nota[3];
    aluno aluno;
}alunosmat;

typedef struct{
    int codigo;
    alunosmat turma[40];
    char nomedisc[20];
}disciplina;

int main(){
    int a = 0, cont = 0, matriculaX;
    float media = 0, crs = 0;
    disciplina nova;

    do{
        printf("\n---------------------\n 1- Criar disciplina\n 2- Incluir aluno\n 3- Excluir aluno\n 4- Listar alunos\n 5- Calcular CR médio\n 6- Imprimir boletim\n 7- Fechar disciplina\n 8- Sair do programa\n ---------------------\n Opção escolhida: \n");
        scanf("%d", &a);
        
        switch(a){
    
        case 1: 
            /*CRIAR DISCIPLINA*/

            printf("Digite o código da disciplina: ");
            scanf("%d", &nova.codigo);
            printf("Digite o nome da disciplina: ");
            scanf("%s", nova.nomedisc);
            for(int i = 0; i < 40; i++){
               nova.turma[i].aluno.matricula = 0;
            }

            break;
    
        case 2:
            /*INCLUIR ALUNO*/

            for(int i = 0; i < 40; i++){
                if(nova.turma[i].aluno.matricula == 0){
                    printf("Digite o nome do aluno: ");
                    scanf("%s", nova.turma[i].aluno.nome);
                    printf("Digite a idade do aluno: ");
                    scanf("%d", &nova.turma[i].aluno.idade);
                    printf("Digite o curso do aluno: ");
                    scanf("%s", nova.turma[i].aluno.curso);
                    printf("Digite o cr do aluno: ");
                    scanf("%d", &nova.turma[i].aluno.cr);
                    printf("Digite a matricula do aluno: ");
                    scanf("%d", &nova.turma[i].aluno.matricula);
                    
                    break;
                }
            };
            
            break;
    
        case 3:
            /*EXCLUIR ALUNO*/

            printf("Digite a matricula do aluno: ");
            scanf("%d", &matriculaX);

            for(int i = 0; i < 40; i++){
                if(nova.turma[i].aluno.matricula == matriculaX){
                    nova.turma[i].aluno.matricula = 0;
                }
            };
            
            break;
    
        case 4:
            /*LISTAR ALUNOS*/

            for(int i = 0; i < 40; i++){
                if(nova.turma[i].aluno.matricula != 0){
                    printf("Nome: %s\n", nova.turma[i].aluno.nome);
                    printf("Idade: %d\n", nova.turma[i].aluno.idade);
                    printf("Curso: %s\n", nova.turma[i].aluno.curso);
                    printf("CR: %d\n", nova.turma[i].aluno.cr);
                    printf("Matrícula: %d\n\n",nova.turma[i].aluno.matricula);
                }
            };
            
            break;
    
        case 5:
            /*CALCULAR CR MÉDIO*/

            for(int i = 0; i < 40; i++){
                if(nova.turma[i].aluno.matricula != 0){
                    crs = crs + nova.turma[i].aluno.cr;
                    cont++;
                }
            }
            if(cont != 0){
                media = (float)crs/cont;
                printf("A média é: %.2f\n", media);
            }
            cont = 0;

            break;
    
        case 6:
            /*IMPRIMIR BOLETIM*/
            for(int i = 0; i < 40; i++){
                if(nova.turma[i].aluno.matricula != 0){
                    printf("Nome: %s\n", nova.turma[i].aluno.nome);
                    printf("Idade: %d\n", nova.turma[i].aluno.idade);
                    printf("Curso: %s\n", nova.turma[i].aluno.curso);
                    printf("CR: %d\n", nova.turma[i].aluno.cr);
                    printf("Matrícula: %d\n\n",nova.turma[i].aluno.matricula);
                    printf("Faltas: %d\n\n",nova.turma[i].falta);
                    for (int j = 0; j < 3; j++)
                    {
                    printf("Nota: %d\n\n",nova.turma[i].nota[j]);
                    }
                }
            }
            break;
    
        case 7:
            /*FECHAR DISCIPLINA*/

            if(nova.codigo != 0){
            nova.codigo = 0;
            }

            for (int k = 0; k < 20; k++){
                nova.nomedisc[k] = ("");
            }
            
            for(int i = 0; i < 40; i++){
                nova.turma[i].aluno.matricula = 0;
            }

            break;
    
        case 8:
            /*SAIR DO PROGRAMA*/

            printf("FIM");
            break;
    
        default:
            /*ENTRADA NÃO ESTÁ ENTRE OS NÚMEROS 1 E 8*/

            printf("Opção inválida!");
            break;
        }
    }while(a != 8);
    return 0;
}
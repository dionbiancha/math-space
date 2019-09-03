#include "biblioteca.h"
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include<time.h>

int contador_erro = 0;
char primeiro_ranking[8], segundo_ranking[8], terceiro_ranking[8];
int primeiro_pontu = 0, segundo_pontu = 0, terceiro_pontu = 0, erro_rota_um, erro_rota_dois, pontuacao;

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    system ("color 70");
    SetConsoleTitle ("Edu ++");
    menu_principal();
}
//CAPTURA TECLAS PRESSIONADAS
int le_tecla()
{
    int tec;
    if (tec = getch())
    {
        if(tec==tCima||tec==tBaixo||tec==tEnter||tec==tEsquerda||tec==tDireita)
        return tec;
    }
    return 0;
}

//POSICIONAMENTO DO MENU
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



//PROCEDIMENTO DO MENU PRINCIPAL
    int menu_principal (){
    int tecla, cont_menu, sair;

    contador_erro = 0;
    cont_menu = 1;
    sair = 0;

    system("cls");

    titulo_jogo();

    gotoxy(42,11); printf (C_BLACK"__________________________________");
    gotoxy(55,14); printf (BLU"|JOGAR|");
    gotoxy(55,16); printf (C_BLACK"SCORE");
    gotoxy(55,18); printf (C_BLACK"NIVEL");
    gotoxy(55,20); printf (C_BLACK"SAIR");
    gotoxy(42,22); printf (C_BLACK"__________________________________");
    gotoxy(44,23); printf (C_BLACK"[Pressione enter para iniciar]");

    grama_jogo();
    planet_jogo();

    tecla = le_tecla();
        if(tecla == tEnter) {
            do{
                menu_tutorial();
                }
            while(tecla!=tBaixo||tecla!=tCima);
        }

    while(sair!=1){
       tecla = le_tecla();
       if(tecla == tBaixo) {
            cont_menu = cont_menu +1;

            switch (cont_menu) {
            case 2:
                system("cls");

                titulo_jogo();

                gotoxy(42,11); printf (C_BLACK"__________________________________");
                gotoxy(55,14); printf (C_BLACK"JOGAR");
                gotoxy(55,16); printf (BLU"|SCORE|");
                gotoxy(55,18); printf (C_BLACK"NIVEL");
                gotoxy(55,20); printf (C_BLACK"SAIR");
                gotoxy(42,22); printf (C_BLACK"__________________________________");
                gotoxy(41,23); printf (C_BLACK"[Ranking com as melhores pontuações]");

                grama_jogo();
                planet_jogo();

                tecla = le_tecla();
                if(tecla == tEnter) {
                ranking_menu();
                }
            break;

            case 3:
                system("cls");

                titulo_jogo();

                gotoxy(42,11); printf (C_BLACK"__________________________________");
                gotoxy(55,14); printf (C_BLACK"JOGAR");
                gotoxy(55,16); printf (C_BLACK"SCORE");
                gotoxy(55,18); printf (BLU"|NIVEL|");
                gotoxy(55,20); printf (C_BLACK"SAIR");
                gotoxy(42,22); printf (C_BLACK"__________________________________");
                gotoxy(41,23); printf (C_BLACK"[Muito fácil?  Altere a dificuldade]");

                grama_jogo();
                planet_jogo();

                tecla = le_tecla();
                if(tecla == tEnter) {

                }

            break;

            case 4:
                system("cls");

                titulo_jogo();

                gotoxy(42,11); printf (C_BLACK"__________________________________");
                gotoxy(55,14); printf (C_BLACK"JOGAR");
                gotoxy(55,16); printf (C_BLACK"SCORE");
                gotoxy(55,18); printf (C_BLACK"NIVEL");
                gotoxy(55,20); printf (BLU"|SAIR|");
                gotoxy(42,22); printf (C_BLACK"__________________________________");
                gotoxy(46,23); printf (C_BLACK"[Pressione enter para sair]");

                grama_jogo();
                planet_jogo();

                tecla = le_tecla();
                if(tecla == tEnter) {
                    sair=1;

                }
                break;

            default:

                cont_menu = 0;
                cont_menu = cont_menu +1;
                system("cls");

                titulo_jogo();

                gotoxy(42,11); printf (C_BLACK"__________________________________");
                gotoxy(55,14); printf (BLU"|JOGAR|");
                gotoxy(55,16); printf (C_BLACK"SCORE");
                gotoxy(55,18); printf (C_BLACK"NIVEL");
                gotoxy(55,20); printf (C_BLACK"SAIR");
                gotoxy(42,22); printf (C_BLACK"__________________________________");
                gotoxy(44,23); printf (C_BLACK"[Pressione enter para iniciar]");

                grama_jogo();
                planet_jogo();

                tecla = le_tecla();
                if(tecla == tEnter) {
                    do {
                    menu_tutorial();
                        }
                        while(tecla!=tBaixo||tecla!=tCima);
                }

                                }
                        }
        if (tecla == tCima ){
        cont_menu = cont_menu -1;

           switch (cont_menu) {
            case 2:
                system("cls");

                titulo_jogo();

                gotoxy(42,11); printf (C_BLACK"__________________________________");
                gotoxy(55,14); printf (C_BLACK"JOGAR");
                gotoxy(55,16); printf (BLU"|SCORE|");
                gotoxy(55,18); printf (C_BLACK"NIVEL");
                gotoxy(55,20); printf (C_BLACK"SAIR");
                gotoxy(42,22); printf (C_BLACK"__________________________________");
                gotoxy(41,23); printf (C_BLACK"[Ranking com as melhores pontuações]");

                grama_jogo();
                planet_jogo();

                tecla = le_tecla();
                if(tecla == tEnter) {
                ranking_menu();
                }

            break;

            case 3:
                system("cls");

                titulo_jogo();

                gotoxy(42,11); printf (C_BLACK"__________________________________");
                gotoxy(55,14); printf (C_BLACK"JOGAR");
                gotoxy(55,16); printf (C_BLACK"SCORE");
                gotoxy(55,18); printf (BLU"|NIVEL|");
                gotoxy(55,20); printf (C_BLACK"SAIR");
                gotoxy(42,22); printf (C_BLACK"__________________________________");
                gotoxy(41,23); printf (C_BLACK"[Muito fácil?  Altere a dificuldade]");

                grama_jogo();
                planet_jogo();

                tecla = le_tecla();
                if(tecla == tEnter) {

                }

            break;

            default:
                cont_menu = 0;
                cont_menu = cont_menu +1;
                system("cls");

                titulo_jogo();

                gotoxy(42,11); printf (C_BLACK"__________________________________");
                gotoxy(55,14); printf (BLU"|JOGAR|");
                gotoxy(55,16); printf (C_BLACK"SCORE");
                gotoxy(55,18); printf (C_BLACK"NIVEL");
                gotoxy(55,20); printf (C_BLACK"SAIR");
                gotoxy(42,22); printf (C_BLACK"__________________________________");
                gotoxy(44,23); printf (C_BLACK"[Pressione enter para iniciar]");

                grama_jogo();
                planet_jogo();

                tecla = le_tecla();
                if(tecla == tEnter) {
                        do {
                    menu_tutorial();
                        }
                        while(tecla!=tBaixo||tecla!=tCima);
                }
                                    }
                                }
                            }

    system("cls");
    gotoxy(55,16);printf("PROGRAMA FINALIZADO\n\n\n\n\n\n\n\n\n");
    exit(0);
    }




//PROCEDIMENTOS DO MENU DE TUTORIAL

//Menu Tutorial
int menu_tutorial(){
    int cont_menu_tutorial, sair_tutorial,tecla_tutorial;

    cont_menu_tutorial = 1;
    sair_tutorial = 0;

    system("cls");
    gotoxy(42,14); printf (C_BLACK"__________________________________");
    gotoxy(47,16); printf (C_BLACK"Deseja ver o tutorial?");
    gotoxy(42,18); printf (BLU"|SIM|");
    gotoxy(57,18); printf (C_BLACK"NÃO");
    gotoxy(69,18); printf (C_BLACK"VOLTAR");
    gotoxy(42,19); printf (C_BLACK"__________________________________");

    tecla_tutorial = le_tecla();
    if(tecla_tutorial == tEnter) {
            tutorial ();
    }

    while(sair_tutorial!=1){

       tecla_tutorial = le_tecla();
       if(tecla_tutorial == tDireita) {
            cont_menu_tutorial = cont_menu_tutorial +1;

            switch (cont_menu_tutorial) {
            case 2:
                system("cls");
                gotoxy(42,14); printf (C_BLACK"__________________________________");
                gotoxy(47,16); printf (C_BLACK"Deseja ver o tutorial?");
                gotoxy(42,18); printf (C_BLACK"SIM");
                gotoxy(57,18); printf (BLU"|NÃO|");
                gotoxy(69,18); printf (C_BLACK"VOLTAR");
                gotoxy(42,19); printf (C_BLACK"__________________________________");

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                    calculo_um();
                }
            break;

            case 3:
                system("cls");
                gotoxy(42,14); printf (C_BLACK"__________________________________");
                gotoxy(47,16); printf (C_BLACK"Deseja ver o tutorial?");
                gotoxy(42,18); printf (C_BLACK"SIM");
                gotoxy(57,18); printf (C_BLACK"NÃO");
                gotoxy(69,18); printf (BLU"|VOLTAR|");
                gotoxy(42,19); printf (C_BLACK"__________________________________");

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                    main();
                }
            break;

            default:
                system("cls");
                gotoxy(42,14); printf (C_BLACK"__________________________________");
                gotoxy(47,16); printf (C_BLACK"Deseja ver o tutorial?");
                gotoxy(42,18); printf (BLU"|SIM|");
                gotoxy(57,18); printf (C_BLACK"NÃO");
                gotoxy(69,18); printf (C_BLACK"VOLTAR");
                gotoxy(42,19); printf (C_BLACK"__________________________________");

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                tutorial ();

                }

                cont_menu_tutorial = 1;
                }
        }
               if(tecla_tutorial == tEsquerda) {
            cont_menu_tutorial = cont_menu_tutorial -1;

            switch (cont_menu_tutorial) {
            case 2:
                system("cls");
                gotoxy(42,14); printf (C_BLACK"__________________________________");
                gotoxy(47,16); printf (C_BLACK"Deseja ver o tutorial?");
                gotoxy(42,18); printf (C_BLACK"SIM");
                gotoxy(57,18); printf (BLU"|NÃO|");
                gotoxy(69,18); printf (C_BLACK"VOLTAR");
                gotoxy(42,19); printf (C_BLACK"__________________________________");

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                    calculo_um();
                }
            break;

            default:
                system("cls");
                gotoxy(42,14); printf (C_BLACK"__________________________________");
                gotoxy(47,16); printf (C_BLACK"Deseja ver o tutorial?");
                gotoxy(42,18); printf (BLU"|SIM|");
                gotoxy(57,18); printf (C_BLACK"NÃO");
                gotoxy(69,18); printf (C_BLACK"VOLTAR");
                gotoxy(42,19); printf (C_BLACK"__________________________________");

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                tutorial ();
                }

                cont_menu_tutorial = 1;
                }
        }
    }
}

//Sub menu tutorial
int tutorial (){

    int tecla_calculo_tutorial;
                system("cls");
                char nome_jogador[20];

                gotoxy(42,14); printf (C_BLACK"__________________________________");
                gotoxy(45,16); printf (C_BLACK"Bem-vindo a bordo companheiro!");
                gotoxy(49,18); printf (C_BLACK"Posso saber seu nome?");
                gotoxy(42,19); printf (C_BLACK"__________________________________");
                gotoxy(55,20); scanf("%s", nome_jogador);


                system("cls");

                professor();

                gotoxy(29,8); printf (C_BLACK"   _______________________________________________________ ");
                gotoxy(29,19); printf (C_BLACK"   _______________________________________________________ ");


                gotoxy(53,10); printf (C_BLACK"Olá %s!", nome_jogador);
                gotoxy(42,12); printf (C_BLACK"  Nosso astronauta de ferro está");
                gotoxy(42,13); printf (C_BLACK"perdido no espaço! Vamos ajudar ele?");
                gotoxy(42,14); printf (C_BLACK"");
                gotoxy(42,15); printf (C_BLACK"Para isso precisamos calcular sua rota");
                gotoxy(42,16); printf (C_BLACK"  de volta para a Terra! Preparado?");
                gotoxy(53,18); printf (GREEN"|VAMOS LÁ!|");
                getch();
                system("cls");

                do{
                    gotoxy(59,8); printf (BLU"|TUTORIAL|");
                    gotoxy(41,9); printf (C_BLACK"______________________________________________");
                    gotoxy(47,11); printf (C_BLACK"Recebemos uma fraca mensagem em forma de");
                    gotoxy(43,12); printf (C_BLACK"  pergunta com três diferentes respostas");
                    gotoxy(59,14); printf (C_BLACK"QUANTO É");
                    gotoxy(60,15); printf (C_BLACK"35 - 5");
                    gotoxy(48,17); printf (C_BLACK"|5|");
                    gotoxy(61,17); printf (C_BLACK"|12|");
                    gotoxy(75,17); printf (C_BLACK"|30|");
                    gotoxy(41,18); printf (C_BLACK"_______________________________________________");
                    gotoxy(60,20); printf (GREEN"|PRÓXIMO|");
                    tecla_calculo_tutorial = le_tecla();
                }
                while(tecla_calculo_tutorial != tEnter);

                calculo_tutorial();


}

//Determina o fim do tutorial
int fim_tutorial()
{
    int cont_exit_tutorial, sair_exit_tutorial,tecla_exit_tutorial;

    cont_exit_tutorial = 1;
    sair_exit_tutorial = 0;

    system("cls");
    gotoxy(56,13); printf (BLU"|FIM DO TUTORIAL|");
    gotoxy(42,14); printf (C_BLACK"______________________________________________");
    gotoxy(60,16); printf (C_BLACK"PARABÉNS!");
    gotoxy(53,18); printf (C_BLACK"Mas isso foi muito fácil...");
    gotoxy(52,19); printf (C_BLACK"Quer tentar um desafio maior?");
    gotoxy(42,22); printf (BLU"|VAMOS LÁ|");
    gotoxy(54,22); printf (C_BLACK"|REPETIR TUTORIAL|");
    gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

    tecla_exit_tutorial = le_tecla();
    if(tecla_exit_tutorial == tEnter) {
        calculo_um();
    }


    while(sair_exit_tutorial!=1){

       tecla_exit_tutorial = le_tecla();
       if(tecla_exit_tutorial == tDireita) {
            cont_exit_tutorial = cont_exit_tutorial +1;

            switch (cont_exit_tutorial) {
            case 2:
                system("cls");
                gotoxy(56,13); printf (BLU"|FIM DO TUTORIAL|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"PARABÉNS!");
                gotoxy(53,18); printf (C_BLACK"Mas isso foi muito fácil...");
                gotoxy(52,19); printf (C_BLACK"Quer tentar um desafio maior?");
                gotoxy(42,22); printf (C_BLACK"|VAMOS LÁ|");
                gotoxy(54,22); printf (BLU"|REPETIR TUTORIAL|");
                gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_tutorial = le_tecla();
                if(tecla_exit_tutorial == tEnter) {
                    tutorial ();
                }
            break;

            case 3:
                system("cls");
                gotoxy(56,13); printf (BLU"|FIM DO TUTORIAL|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"PARABÉNS!");
                gotoxy(53,18); printf (C_BLACK"Mas isso foi muito fácil...");
                gotoxy(52,19); printf (C_BLACK"Quer tentar um desafio maior?");
                gotoxy(42,22); printf (C_BLACK"|VAMOS LÁ|");
                gotoxy(54,22); printf (C_BLACK"|REPETIR TUTORIAL|");
                gotoxy(73,22); printf (BLU"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_tutorial = le_tecla();
                if(tecla_exit_tutorial == tEnter) {
                    main();
                }
            break;

            default:
                system("cls");
                gotoxy(56,13); printf (BLU"|FIM DO TUTORIAL|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"PARABÉNS!");
                gotoxy(53,18); printf (C_BLACK"Mas isso foi muito fácil...");
                gotoxy(52,19); printf (C_BLACK"Quer tentar um desafio maior?");
                gotoxy(42,22); printf (BLU"|VAMOS LÁ|");
                gotoxy(54,22); printf (C_BLACK"|REPETIR TUTORIAL|");
                gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_tutorial = le_tecla();
                if(tecla_exit_tutorial == tEnter) {
                        calculo_um();
                    }
                cont_exit_tutorial = 1;
                }
        }
            if(tecla_exit_tutorial == tEsquerda) {
            cont_exit_tutorial = cont_exit_tutorial -1;

            switch (cont_exit_tutorial) {
            case 2:
                system("cls");
                gotoxy(56,13); printf (BLU"|FIM DO TUTORIAL|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"PARABÉNS!");
                gotoxy(53,18); printf (C_BLACK"Mas isso foi muito fácil...");
                gotoxy(52,19); printf (C_BLACK"Quer tentar um desafio maior?");
                gotoxy(42,22); printf (C_BLACK"|VAMOS LÁ|");
                gotoxy(54,22); printf (BLU"|REPETIR TUTORIAL|");
                gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_tutorial = le_tecla();
                if(tecla_exit_tutorial == tEnter) {
                    tutorial ();
                }
            break;

            default:
                system("cls");
                gotoxy(56,13); printf (BLU"|FIM DO TUTORIAL|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"PARABÉNS!");
                gotoxy(53,18); printf (C_BLACK"Mas isso foi muito fácil...");
                gotoxy(52,19); printf (C_BLACK"Quer tentar um desafio maior?");
                gotoxy(42,22); printf (BLU"|VAMOS LÁ|");
                gotoxy(54,22); printf (C_BLACK"|REPETIR TUTORIAL|");
                gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_tutorial = le_tecla();
                if(tecla_exit_tutorial == tEnter) {
                    calculo_um();
                    }
                cont_exit_tutorial = 1;
                }
        }
    }
}







//PERGUNTA UNICA DE TUTORIAL
int calculo_tutorial(){
    int cont_calculo_tutorial, sair_calculo_tutorial,tecla_tutorial;

    cont_calculo_tutorial = 1;
    sair_calculo_tutorial = 0;

    system("cls");

                gotoxy(59,8); printf (BLU"|TUTORIAL|");
                gotoxy(41,9); printf (C_BLACK"______________________________________________");
                gotoxy(47,11); printf (C_BLACK"Apenas uma dessas opções está certa.");
                gotoxy(43,12); printf (C_BLACK"Vamos tentar? Escolha o resultado correto");
                gotoxy(59,14); printf (C_BLACK"QUANTO É");
                gotoxy(60,15); printf (C_BLACK"35 - 5");
                gotoxy(48,17); printf (BLU"|5|");
                gotoxy(61,17); printf (C_BLACK"|12|");
                gotoxy(75,17); printf (C_BLACK"|30|");
                gotoxy(41,18); printf (C_BLACK"_______________________________________________");

                professor();

    tecla_tutorial = le_tecla();
    if(tecla_tutorial == tEnter) {
                system("cls");
                erro_tutorial();
    }

    while(sair_calculo_tutorial!=1){

       tecla_tutorial = le_tecla();
       if(tecla_tutorial == tDireita) {
            cont_calculo_tutorial = cont_calculo_tutorial +1;

            switch (cont_calculo_tutorial) {
            case 2:
                system("cls");
                gotoxy(59,8); printf (BLU"|TUTORIAL|");
                gotoxy(41,9); printf (C_BLACK"______________________________________________");
                gotoxy(47,11); printf (C_BLACK"Apenas uma dessas opções está certa.");
                gotoxy(43,12); printf (C_BLACK"Vamos tentar? Escolha o resultado correto");
                gotoxy(59,14); printf (C_BLACK"QUANTO É");
                gotoxy(60,15); printf (C_BLACK"35 - 5");
                gotoxy(48,17); printf (C_BLACK"|5|");
                gotoxy(61,17); printf (BLU"|12|");
                gotoxy(75,17); printf (C_BLACK"|30|");
                gotoxy(41,18); printf (C_BLACK"_______________________________________________");

                professor();

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                    system("cls");
                    erro_tutorial();
                    }
            break;

            case 3:
                system("cls");
                gotoxy(59,8); printf (BLU"|TUTORIAL|");
                gotoxy(41,9); printf (C_BLACK"______________________________________________");
                gotoxy(47,11); printf (C_BLACK"Apenas uma dessas opções está certa.");
                gotoxy(43,12); printf (C_BLACK"Vamos tentar? Escolha o resultado correto");
                gotoxy(59,14); printf (C_BLACK"QUANTO É");
                gotoxy(60,15); printf (C_BLACK"35 - 5");
                gotoxy(48,17); printf (C_BLACK"|5|");
                gotoxy(61,17); printf (C_BLACK"|12|");
                gotoxy(75,17); printf (BLU"|30|");
                gotoxy(41,18); printf (C_BLACK"_______________________________________________");

                professor();

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                    system("cls");
                    fim_tutorial();
    }
            break;

            default:
                system("cls");
                gotoxy(59,8); printf (BLU"|TUTORIAL|");
                gotoxy(41,9); printf (C_BLACK"______________________________________________");
                gotoxy(47,11); printf (C_BLACK"Apenas uma dessas opções está certa.");
                gotoxy(43,12); printf (C_BLACK"Vamos tentar? Escolha o resultado correto");
                gotoxy(59,14); printf (C_BLACK"QUANTO É");
                gotoxy(60,15); printf (C_BLACK"35 - 5");
                gotoxy(48,17); printf (BLU"|5|");
                gotoxy(61,17); printf (C_BLACK"|12|");
                gotoxy(75,17); printf (C_BLACK"|30|");
                gotoxy(41,18); printf (C_BLACK"_______________________________________________");

                professor();

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                    system("cls");
                    erro_tutorial();
                }

                cont_calculo_tutorial = 1;
            }
        }
            if(tecla_tutorial == tEsquerda) {
            cont_calculo_tutorial = cont_calculo_tutorial - 1;

            switch (cont_calculo_tutorial) {
            case 2:
                system("cls");
                gotoxy(59,8); printf (BLU"|TUTORIAL|");
                gotoxy(41,9); printf (C_BLACK"______________________________________________");
                gotoxy(47,11); printf (C_BLACK"Apenas uma dessas opções está certa.");
                gotoxy(43,12); printf (C_BLACK"Vamos tentar? Escolha o resultado correto");
                gotoxy(59,14); printf (C_BLACK"QUANTO É");
                gotoxy(60,15); printf (C_BLACK"35 - 5");
                gotoxy(48,17); printf (C_BLACK"|5|");
                gotoxy(61,17); printf (BLU"|12|");
                gotoxy(75,17); printf (C_BLACK"|30|");
                gotoxy(41,18); printf (C_BLACK"_______________________________________________");

                professor();

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                    system("cls");
                    erro_tutorial();
                }
            break;

            default:
                system("cls");
                gotoxy(59,8); printf (BLU"|TUTORIAL|");
                gotoxy(41,9); printf (C_BLACK"______________________________________________");
                gotoxy(47,11); printf (C_BLACK"Apenas uma dessas opções está certa.");
                gotoxy(43,12); printf (C_BLACK"Vamos tentar? Escolha o resultado correto");
                gotoxy(59,14); printf (C_BLACK"QUANTO É");
                gotoxy(60,15); printf (C_BLACK"35 - 5");
                gotoxy(48,17); printf (BLU"|5|");
                gotoxy(61,17); printf (C_BLACK"|12|");
                gotoxy(75,17); printf (C_BLACK"|30|");
                gotoxy(41,18); printf (C_BLACK"_______________________________________________");

                professor();

                tecla_tutorial = le_tecla();
                if(tecla_tutorial == tEnter) {
                    system("cls");
                    erro_tutorial();
                    }
                cont_calculo_tutorial = 1;
                }
        }
    }
}







//PERGUNTAS DO NIVEL UM

//PRIMEIRA PERGUNTA
int calculo_um()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
        fim_jogo();
    }

    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 + valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        antena();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA UM|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", opcao1);
        gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                contador_erro++;
                erro_pergunta_um();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_um();
                    }
                break;

                case 3:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (BLU"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_dois();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            contador_erro++;
                            erro_pergunta_um();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_um();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_um();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}






//SEGUNDA PERGUNTA
int calculo_dois()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
        fim_jogo();
    }
    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 + valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        antena();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA UM|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", resultado);
        gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                calculo_tres();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_dois();
                    }
                break;

                case 3:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (BLU"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_dois();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            calculo_tres();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_dois();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            calculo_tres();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}

//TERCEIRA PERGUNTA
int calculo_tres()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
    fim_jogo();
    }
    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 + valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        antena();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA UM|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", opcao1);
        gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
        gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                contador_erro++;
                erro_pergunta_tres();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_quatro();
                    }
                break;

                case 3:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (BLU"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_tres();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            contador_erro++;
                            erro_pergunta_tres();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        calculo_quatro();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_tres();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}

//QUARTA PERGUNTA
int calculo_quatro()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
    fim_jogo();
    }

    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 + valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        antena();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA UM|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", opcao1);
        gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
        gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                contador_erro++;
                erro_pergunta_quatro();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_cinco();
                    }
                break;

                case 3:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (BLU"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_quatro();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            contador_erro++;
                            erro_pergunta_quatro();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_cinco();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_quatro();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}

//QUINTA PERGUNTA
int calculo_cinco()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
    fim_jogo();
    }

    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 + valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        antena();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA UM|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", opcao1);
        gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                contador_erro++;
                erro_pergunta_cinco();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_cinco();
                    }
                break;

                case 3:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (BLU"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        fim_nivel_um();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            contador_erro++;
                            erro_pergunta_cinco();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_cinco();
                    }
                break;

                default:
                    system("cls");
                    antena();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA UM|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d + %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_cinco();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}









//NIVEL DOIS
//SEXTA PERGUNTA
int calculo_seis()
{
    int cont_calculo, sair_calculo,tecla_calculo;
    contador_erro = 0;

    if(contador_erro == 3){
    fim_jogo();
    }

    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 - valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        astronauta();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA DOIS|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", resultado);
        gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                calculo_sete();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_seis();
                    }
                break;

                case 3:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (BLU"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_seis();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            calculo_sete();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_seis();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Primeira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            calculo_sete();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}

//SETIMA PERGUNTA
int calculo_sete()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
    fim_jogo();
    }

    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 - valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        astronauta();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA DOIS|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", opcao1);
        gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
        gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                contador_erro++;
                erro_pergunta_sete();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_oito();
                    }
                break;

                case 3:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (BLU"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_sete();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            contador_erro++;
                            erro_pergunta_sete();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_oito();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Segunda pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_sete();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}

//OITAVA PERGUNTA
int calculo_oito()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
    fim_jogo();
    }

    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 - valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        astronauta();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA DOIS|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", opcao1);
        gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                contador_erro++;
                erro_pergunta_oito();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_oito();
                    }
                break;

                case 3:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (BLU"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_nove();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            contador_erro++;
                            erro_pergunta_oito();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_oito();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Terceira pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_oito();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}

//NONA PERGUNTA
int calculo_nove()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
    fim_jogo();
    }

    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 - valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        astronauta();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA DOIS|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", opcao1);
        gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
        gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
                contador_erro++;
                erro_pergunta_nove();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_dez();
                    }
                break;

                case 3:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (BLU"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_nove();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                            contador_erro++;
                            erro_pergunta_nove();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(62,22); printf (BLU"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        calculo_dez();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quarta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", opcao1);
                    gotoxy(62,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_nove();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}

//DECIMA PERGUNTA
int calculo_dez()
{
    int cont_calculo, sair_calculo,tecla_calculo;

    if(contador_erro == 3){
    fim_jogo();
    }

    while(contador_erro!=3) {

        cont_calculo = 1;
        sair_calculo = 0;

        int valor1, valor2, resultado, opcao1, opcao2;
        valor1 = (rand() % 100);
        valor2 = (rand() % 100);
        resultado = valor1 - valor2;

        opcao1 = (rand() % 100);
        opcao2 = (rand() % 100);

        system("cls");
        astronauta();
        estrelas();

        gotoxy(60,13); printf (BLU"|ROTA DOIS|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
        gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
        gotoxy(61,19); printf (C_BLACK"QUANTO É");
        gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
        gotoxy(49,22); printf (BLU"|%d|", resultado);
        gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
        gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
        gotoxy(42,23); printf (C_BLACK"_______________________________________________");

        tecla_calculo = le_tecla();
        if(tecla_calculo == tEnter) {
            ranking();
            }


        while(sair_calculo!=1){

            tecla_calculo = le_tecla();
            if(tecla_calculo == tDireita) {
            cont_calculo = cont_calculo +1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_dez();
                    }
                break;

                case 3:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (BLU"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_dez();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        ranking();
                        }
                    cont_calculo = 1;
                    }
            }
                if(tecla_calculo == tEsquerda) {
                cont_calculo = cont_calculo -1;

                switch (cont_calculo) {
                case 2:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (C_BLACK"|%d|", resultado);
                    gotoxy(62,22); printf (BLU"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        contador_erro++;
                        erro_pergunta_dez();
                    }
                break;

                default:
                    system("cls");
                    astronauta();
                    estrelas();

                    gotoxy(60,13); printf (BLU"|ROTA DOIS|");
                    gotoxy(42,14); printf (C_BLACK"______________________________________________");
                    gotoxy(48,16); printf (C_BLACK"Apenas uma dessas opções está certa.");
                    gotoxy(56,17); printf (C_BLACK"Quinta pergunta");
                    gotoxy(61,19); printf (C_BLACK"QUANTO É");
                    gotoxy(61,20); printf (C_BLACK"%d - %d",valor1, valor2);
                    gotoxy(49,22); printf (BLU"|%d|", resultado);
                    gotoxy(62,22); printf (C_BLACK"|%d|", opcao2);
                    gotoxy(76,22); printf (C_BLACK"|%d|", opcao1);
                    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                    tecla_calculo = le_tecla();
                    if(tecla_calculo == tEnter) {
                        ranking();
                        }
                    cont_calculo = 1;
                    }
            }
        }
    }
}






//MENSAGEM DE PARABÉNS AO TERMINAR TODAS AS PERGUNTAS
void fim_nivel_um()
{
    erro_rota_um = contador_erro;

    system("cls");
    astronauta_nivel_um();

    gotoxy(91,10); printf (C_BLACK" PARABÉNS!!");
    gotoxy(80,12); printf (C_BLACK" Graças a você encontramos a primeira");
    gotoxy(80,13); printf (C_BLACK"    rota passada pelo astronauta!");
    gotoxy(80,15); printf (C_BLACK" Mas não podemos descansar. Recebemos");
    gotoxy(80,16); printf (C_BLACK" uma recente mensagem informando que");
    gotoxy(80,17); printf (C_BLACK" comida e agua acabaram a quatro dias.");
    gotoxy(80,18); printf (C_BLACK"   Então não temos tempo a perder!");
    gotoxy(91,20); printf (GREEN" |VAMOS LÁ!|");
    getch();
    calculo_seis();
}





//MENSAGEM EXIBIDA AO JOGADOR ERARR 3 VEZES A PERGUNTA
int fim_jogo()
{
    int cont_exit_jogo, sair_exit_jogo,tecla_exit_jogo;
    while (sair_exit_jogo !=1){
    cont_exit_jogo = 1;
    sair_exit_jogo = 0;

    system("cls");
    gotoxy(59,13); printf (BLU"|GAME OVER|");
    gotoxy(42,14); printf (C_BLACK"______________________________________________");
    gotoxy(60,16); printf (C_BLACK"QUE PENA!");
    gotoxy(44,18); printf (C_BLACK"Você atingiu o numero maximo de tentativas.");
    gotoxy(41,19); printf (C_BLACK"Quer tentar novamente a ajudar nosso astronauta?");
    gotoxy(42,22); printf (BLU"|VAMOS LÁ!|");
    gotoxy(56,22); printf (C_BLACK"|SAIR DO JOGO|");
    gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
    gotoxy(42,23); printf (C_BLACK"_______________________________________________");

    tecla_exit_jogo = le_tecla();
    if(tecla_exit_jogo == tEnter) {
        contador_erro = 0;
        calculo_um();
    }


    while(sair_exit_jogo!=1){

       tecla_exit_jogo = le_tecla();
       if(tecla_exit_jogo == tDireita) {
            cont_exit_jogo = cont_exit_jogo +1;

            switch (cont_exit_jogo) {
            case 2:
                system("cls");
                gotoxy(59,13); printf (BLU"|GAME OVER|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"QUE PENA!");
                gotoxy(44,18); printf (C_BLACK"Você atingiu o numero maximo de tentativas.");
                gotoxy(41,19); printf (C_BLACK"Quer tentar novamente a ajudar nosso astronauta?");
                gotoxy(42,22); printf (C_BLACK"|VAMOS LÁ!|");
                gotoxy(56,22); printf (BLU"|SAIR DO JOGO|");
                gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_jogo = le_tecla();
                if(tecla_exit_jogo == tEnter) {
                    sair_exit_jogo = 1;
                }
            break;

            case 3:
                system("cls");
                gotoxy(59,13); printf (BLU"|GAME OVER|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"QUE PENA!");
                gotoxy(44,18); printf (C_BLACK"Você atingiu o numero maximo de tentativas.");
                gotoxy(41,19); printf (C_BLACK"Quer tentar novamente a ajudar nosso astronauta?");
                gotoxy(42,22); printf (C_BLACK"|VAMOS LÁ!|");
                gotoxy(56,22); printf (C_BLACK"|SAIR DO JOGO|");
                gotoxy(73,22); printf (BLU"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_jogo = le_tecla();
                if(tecla_exit_jogo == tEnter) {
                    main();
                }
            break;

            default:
                system("cls");
                gotoxy(59,13); printf (BLU"|GAME OVER|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"QUE PENA!");
                gotoxy(44,18); printf (C_BLACK"Você atingiu o numero maximo de tentativas.");
                gotoxy(41,19); printf (C_BLACK"Quer tentar novamente a ajudar nosso astronauta?");
                gotoxy(42,22); printf (BLU"|VAMOS LÁ!|");
                gotoxy(56,22); printf (C_BLACK"|SAIR DO JOGO|");
                gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_jogo = le_tecla();
                if(tecla_exit_jogo == tEnter) {
                    contador_erro = 0;
                    calculo_um();
                }
                cont_exit_jogo = 1;
                }
        }
            if(tecla_exit_jogo == tEsquerda) {
            cont_exit_jogo = cont_exit_jogo -1;

            switch (cont_exit_jogo) {
            case 2:
                system("cls");
                gotoxy(59,13); printf (BLU"|GAME OVER|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"QUE PENA!");
                gotoxy(44,18); printf (C_BLACK"Você atingiu o numero maximo de tentativas.");
                gotoxy(41,19); printf (C_BLACK"Quer tentar novamente a ajudar nosso astronauta?");
                gotoxy(42,22); printf (C_BLACK"|VAMOS LÁ!|");
                gotoxy(56,22); printf (BLU"|SAIR DO JOGO|");
                gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");

                tecla_exit_jogo = le_tecla();
                if(tecla_exit_jogo == tEnter) {
                    sair_exit_jogo = 1;
                }
            break;

            default:
                system("cls");
                gotoxy(59,13); printf (BLU"|GAME OVER|");
                gotoxy(42,14); printf (C_BLACK"______________________________________________");
                gotoxy(60,16); printf (C_BLACK"QUE PENA!");
                gotoxy(44,18); printf (C_BLACK"Você atingiu o numero maximo de tentativas.");
                gotoxy(41,19); printf (C_BLACK"Quer tentar novamente a ajudar nosso astronauta?");
                gotoxy(42,22); printf (BLU"|VAMOS LÁ!|");
                gotoxy(56,22); printf (C_BLACK"|SAIR DO JOGO|");
                gotoxy(73,22); printf (C_BLACK"|MENU PRINCIPAL|");
                gotoxy(42,23); printf (C_BLACK"_______________________________________________");


                tecla_exit_jogo = le_tecla();
                if(tecla_exit_jogo == tEnter) {
                        contador_erro = 0;
                    calculo_um();
                    }
                cont_exit_jogo = 1;
                }
            }
        }
    }
    system("cls");
    gotoxy(55,16);printf("PROGRAMA FINALIZADO\n\n\n\n\n\n\n\n\n");
    exit(0);
}













//CHAMADA FEITA AO ERRAR O TUTORIAL
int erro_tutorial()
{
        gotoxy(60,13); printf (BLU"|TUTORIAL|");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"  Vamos de novo? Se precisar chame ajuda ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_tutorial();
}

//CHAMADA FEITA AO ERRAR A PRIMEIRA PERGUNTA
int erro_pergunta_um()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_um();
}

//CHAMADA FEITA AO ERRAR A SEGUNDA PERGUNTA
int erro_pergunta_dois()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_dois();
}

//CHAMADA FEITA AO ERRAR A TERCEIRA PERGUNTA
int erro_pergunta_tres()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_tres();
}

//CHAMADA FEITA AO ERRAR A QUARTA PERGUNTA
int erro_pergunta_quatro()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_quatro();
}

//CHAMADA FEITA AO ERRAR A QUINTA PERGUNTA
int erro_pergunta_cinco()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_cinco();
}

//CHAMADA FEITA AO ERRAR A SEXTA PERGUNTA
int erro_pergunta_seis()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_seis();
}

//CHAMADA FEITA AO ERRAR A SETIMA PERGUNTA
int erro_pergunta_sete()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_sete();
}

//CHAMADA FEITA AO ERRAR A OITAVA PERGUNTA
int erro_pergunta_oito()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_oito();
}

//CHAMADA FEITA AO ERRAR A NONA PERGUNTA
int erro_pergunta_nove()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_nove();
}

//CHAMADA FEITA AO ERRAR A DECIMA PERGUNTA
int erro_pergunta_dez()
{
        system("cls");
        gotoxy(58,13); printf (RED"TENTATIVA %d DE 3",contador_erro);
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(58,16); printf (C_BLACK"HMMMMMMMMMMMM");
        gotoxy(50,17); printf (C_BLACK"Vejo que esta com dificuldades.");
        gotoxy(42,19); printf (C_BLACK"Vamos de novo? Se quiser chame o professor ;)");
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VAMOS LÁ|");
        getch();
        calculo_dez();
}

int ranking_menu()
{
        system("cls");
        gotoxy(58,13); printf (RED"MELHORES PONTUAÇÕES");
        gotoxy(42,14); printf (C_BLACK"______________________________________________");
        gotoxy(50,16); printf (C_BLACK"1º %s    %d",primeiro_ranking, primeiro_pontu);
        gotoxy(58,18); printf (C_BLACK"2º %s    %d",segundo_ranking, segundo_pontu);
        gotoxy(58,20); printf (C_BLACK"3º %s    %d",terceiro_ranking, terceiro_pontu);
        gotoxy(42,21); printf (C_BLACK"_______________________________________________");
        gotoxy(60,22); printf (GREEN"|VOLTAR|");
        getch();
        main();
}

int ranking() {
    system("cls");
    titulo_jogo();
    grama_jogo();
    planet_jogo();

    erro_rota_dois = contador_erro;
    pontuacao = 1000 - ((erro_rota_um + erro_rota_dois)*100) ;

    if (pontuacao > primeiro_pontu){
    primeiro_pontu = pontuacao;
    gotoxy(42,14); printf (C_BLACK"__________________________________");
    gotoxy(40,16); printf (C_BLACK"Você conseguiu calcular todas as rotas!");
    gotoxy(49,18); printf (C_BLACK"Posso saber seu nome?");
    gotoxy(42,19); printf (C_BLACK"__________________________________");
    gotoxy(55,20); scanf("%s", primeiro_ranking);
    main();
    }

    if (pontuacao > segundo_pontu && pontuacao < primeiro_pontu){
    segundo_pontu = pontuacao;
    gotoxy(42,14); printf (C_BLACK"__________________________________");
    gotoxy(40,16); printf (C_BLACK"Você conseguiu calcular todas as rotas!");
    gotoxy(49,18); printf (C_BLACK"Posso saber seu nome?");
    gotoxy(42,19); printf (C_BLACK"__________________________________");
    gotoxy(55,20); scanf("%s", segundo_ranking);
    main();
    }

    if (pontuacao > terceiro_pontu && pontuacao < segundo_pontu){
    terceiro_pontu = pontuacao;
    gotoxy(42,14); printf (C_BLACK"__________________________________");
    gotoxy(40,16); printf (C_BLACK"Você conseguiu calcular todas as rotas!");
    gotoxy(49,18); printf (C_BLACK"Posso saber seu nome?");
    gotoxy(42,19); printf (C_BLACK"__________________________________");
    gotoxy(55,20); scanf("%s", terceiro_ranking);
    main();
    }
}








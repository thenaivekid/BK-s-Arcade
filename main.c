#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "quiz.h"
#include "wordle.h"
#include "ticTacToe.h"

int main(void)
{

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  WELCOME TO THE BK'S ARCADE...");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  Press Enter to Continue>>>");
    getch();
beginning:
    system("cls");
    system("color 5f");
    printf("\n\n\n\n\nEnter 1 for TIC-TAC-TOE\n\n\n\n");
    printf("\n\n\n\n\nEnter 2 for WORDLE\n\n\n\n");
    printf("\n\n\n\n\nEnter 3 for GENERAL-QUIZ\n\n\n\n");

    int flag;
    fflush(stdin);
    scanf("%d", &flag);
    switch (flag)
    {
    case 1:
        playTicTacToe();
        break;
    case 2:
        playWordle();
        break;
    case 3:
        playQuiz();
        break;
    default:
        system("cls");
        system("color 4f");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t !!!!!!!!!Sorry you broke the game!!!!!!!!!");
        getch();
    }
    system("cls");
    system("color 0c");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWe are taking you to main menu...\n\nPress enter to continue>>>\n");
    getch();
    goto beginning;
    
    return 0;
}

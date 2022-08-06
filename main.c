#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "quiz.h"
#include "wordle.h"
#include "ticTacToe.h"
#include "rockPaperScissors.h"
#include "authentication.h"

void end(void)
{
    system("cls");
    system("color 9d");
    gotoxy(50, 20);
    Sleep(500);
    ;
    printf("BYE BYE! SEE YOU AGAIN");
    getch();
    system("cls");
    system("color 4f");
    gotoxy(50, 20);
    Sleep(500);
    ;
    printf("WE ARE GONING TO MISS YOU");
    getch();
}

void naatak()
{
    system("cls");
    gotoxy(10, 3);

    printf("<<<< Loading Please Wait >>>>");
    for (int i = 0; i < 5; i++)
    {
        printf("\t(*_*)");
        Sleep(500);
    }
    printf(" \n\n\n\n\n\t\t\t\t\t     *  *  *  *  *  *  *  *");
    printf("\n\n\t\t\t\t\t     *                    *");
    printf("\n\n\t\t\t\t\t     *       Welcome      *");
    printf("\n\n\t\t\t\t\t     *                    *");
    printf("\n\n\t\t\t\t\t     *  *  *  *  *  *  *  *");
    printf("\n\n\n\n\n\t\t\t\t\tPress any key to continue...... ");
    getch();
}

void main(void)
{

    system("cls");
    SetConsoleTitle("                 BK's Arcade");

    printf("\n\n\n\t\t\tPlease make sure you are in full screen mode. Thank you.");
    Sleep(2000);
    // just for decoration
    system("cls");
    gotoxy(10, 3);
    printf("<<<< Loading Please Wait >>>>");
    for (int i = 0; i < 5; i++)
    {
        printf("\t(*_*)");
        Sleep(500);
    }

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  WELCOME TO THE BK'S ARCADE...");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  Press Enter to Continue>>>");
    getch();
    authentication(); // does the authentication job,
    // rest of the code is executed if and only if the user is authenticated.

    // just for the asthetic puspose
    naatak();
beginning:
    system("cls");
    system("color 3f");
    // allows user to chose a game
    printf("\tEnter 1 for TIC-TAC-TOE\n");
    printf("\tEnter 2 for WORDLE\n");
    printf("\tEnter 3 for GENERAL-QUIZ\n");
    printf("\tEnter 4 for ROCK-PAPER-SCISSORS\n\n");
    printf("\tEnter 5 to quit.\n");

    int flag;
    fflush(stdin);
    scanf("%d", &flag);
    switch (flag)
    {
    case 1:
        playTicTacToe(); // plays ticTacToe
        break;
    case 2:
        playWordle(); // plays wordle
        break;
    case 3:
        playQuiz(); // plays quiz
        break;
    case 4:
        playRockPaperScissors(); // plays RockPaperScissors
        break;
    case 5:
        end(); // ends the program
        exit(69);
    default:
        system("cls");
        system("color 4f");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t !!!!!!!!!Sorry you broke the game!!!!!!!!!");
        getch();
    }
    system("cls");
    system("color 0c");
    printf("\n\n\n\t\t\t\tYour cash prize has been transfered to your bank account.\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWe are taking you to main menu...\n\nt\t\t\t\t\t\t\t\t\t\tPress enter to continue>>>\n");
    getch();
    goto beginning;
}

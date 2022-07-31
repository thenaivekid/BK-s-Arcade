#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

#define max_num 100
char rightLetters[25];

int random_num()
{
    srand(time(NULL));
    int num = rand() % 100;
    return num;
}

void take_input(char user_word[6])
{
    printf("\n\n\n\n\n\t\t\t\tENTER WORD: ");
    fflush(stdin);
    scanf("%s", user_word);
    strupr(user_word);
}

void check_input(char user_word[6], char random_word[6])
{

    static int k = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (user_word[i] == random_word[j])
            {
                rightLetters[k] = user_word[i];
                k++;
            }
        }
    }
    rightLetters[k] = '$';
    k++;
}

void playWordle()
{

    system("cls");
    system("color 3f");
    char input_words[max_num][6];

    FILE *word;
    word = fopen("word.txt", "r");
    int i = 0, j = 1;

    while (i != max_num)
    {
        fscanf(word, "%s", input_words + i);
        i++;
    }

    int num = random_num();
    char randword[6], randomword[6], random_word[6], user_word[6];
    strcpy(randword, (input_words + num));
    strcpy(random_word, strupr(randword));
    strcpy(randomword, strupr(random_word));
    while (j < 11)
    {
        printf("\t\t\t\t\t\t\t\t\tlives %d", (11 - j));
        take_input(user_word);
        system("cls");

        if (strcmp(user_word, random_word) == 0)
            break;

        check_input(user_word, random_word);

        if (j != 10)
        {
            printf("THE CORRECT LETTERS ARE: \n%s\n", strupr(rightLetters));
        }

        j++;
    }

    if (strcmp(user_word, random_word) == 0)
    {
        system("color 4f");
        printf("CONGRATULATION");
        getch();
    }
    if (j == 11)
    {
        system("color 4f");
        printf("\n\n\n\n\n\n\t\t\t\t\t\tTHE WORD IS  %s", randomword);
        getch();
    }
}
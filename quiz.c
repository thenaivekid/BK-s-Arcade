#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct 
{
    char question[200];
    char option1[20];
    char option2[20];
    char option3[20];
    char option4[20];
    int rightoption;
}quiz;


int main(void)
{
    int n, answer, score = 0;
    char check;
    quiz q[20];
    printf("How many questions do you want to enter: ");
    scanf("%d", &n);
    //taking question and options from the user
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter the question: \n");
        gets(q[i].question);
        printf("Enter option 1: \n");
        gets(q[i].option1);
        printf("Enter option 2: \n");
        gets(q[i].option2);
        printf("Enter option 3: \n");
        gets(q[i].option3);
        printf("Enter option 4: \n");
        gets(q[i].option4);
        printf("Enter the correct option : \n");
        scanf("%d", &q[i].rightoption);


        fflush(stdin);
        printf("Press Y if you want to contiune: ");
        scanf("%c", &check);
        if (check != 'Y' || check != 'y')
            break;
        fflush(stdin);
    }

    for (int i = 0; i< n ; i++)
    {
        printf("%s \n 1.\t%s \n 2.\t%s \n 3. \t%s \n 4. \t%s \n", q[i].question, q[i].option1, q[i].option2,q[i].option3, q[i].option4);
        printf("Enter your choice: ");
        scanf("%d", &answer);
        if (answer == q[i].rightoption)
            score ++;
    }

    printf("Your score is %d.", score);
    getch();
    return 0;
}
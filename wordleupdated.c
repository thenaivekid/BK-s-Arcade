#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>

#define max_num 100
char rightLetters[25];

int random_num()
{
    srand(time(NULL));
    int num=rand()%100;
    return num;
}

void take_input(char user_word[6])
{
    printf("Enter word: ");
    scanf("%s",user_word);
    strupr(user_word);
}

void check_input(char user_word[6],char random_word[6])
{
    
    static int k= 0;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if(user_word[i]==random_word[j])
            {
                rightLetters[k] = user_word[i];
                k++;
            }
            
        }
    }
    rightLetters[k]= '$';
    k++;
}

int main()
{
    char input_words[max_num][6];
    
    FILE *word;
    word=fopen("word.txt","r");
    int i=0,j=1;
    
    while(i!=max_num)
    {
        fscanf(word,"%s",input_words+i);
        i++;
    }


    int num=random_num();
    char randomword[6],random_word[6],user_word[6];
    strcpy(randomword,(input_words+num));
    strcpy(random_word,strupr(randomword));
    

    
    while(j<6)
    {
        take_input(user_word);
        if (strcmp(user_word,random_word)==0)
            break;

        check_input(user_word,random_word);
        printf("\n");
        printf("the correct letters are: \n%s\n", rightLetters);

        j++;       
    }


    if (strcmp(user_word,random_word)==0)
    {
        printf("congratulation");
    }
    if (j==6)
        printf("the word is %s",random_word);
    




    getch();
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int game(int ,int );


int main(){

    int rnum,choice;

    srand(time(NULL));
    rnum=rand()%100+1;

    printf("------------- Guess the number GAME --------------");
    x: printf("\nEnter the level of difficulty:\n1.Easy\n2.Moderate\n3.Hard\n");
    scanf("%d",&choice);

    if(choice==1)
    {
    game(10,rnum);
    }

    if(choice==2)
    {
    game(7,rnum);
    }

    if(choice==3)
    {
    game(5,rnum);
    }

    if(choice!=1 && choice!=2 && choice!=3)
    {
        printf("Please enter the difficulty level as per given options.");goto x;
    }
    
}
int game(int ch,int rnum)
    {   int i=1,gnum;

        printf("\nYou got %d chances to guess the number!",ch);
        while(i<=ch)
        {
           y: printf("\n\nEnter the number from 1 to 100, you are assuming it to be:");
           scanf("%d",&gnum);

           if(gnum<1 || gnum>100)
           {
            printf("\nWrong input! Please enter number in the range of 1 to 100.");goto y;
           }
           if(gnum==rnum)
           {
            printf("\n\nCongo, you got it right!");break;
           } 
           if(gnum>rnum)
           {
            printf("\n\nOops! It's smaller number than you guessed.");
           }
           if(gnum<rnum)
           {
            printf("\n\nOops! It's greater number than you guessed.");
           }
           printf("\n%d chances are left...",ch-i);
           i++;
           if(i>ch)
           {
            printf("\n\nSad to see, You Lost...Better luck next time.");
            printf("\n\n\nThe number was %d",rnum);
           }
        }
        return 0;
    }
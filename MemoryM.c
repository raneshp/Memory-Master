#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>
#include<string.h>
struct student
{
   char name[50];
   int score;
};
int level_1();
int level_2();
int level_3();
void timmer(int);
int main()
{
    char name[20],key;int a,level,sum1=0,sum2=0,sum3=0;
    system("clear");
    printf("******************************************\n");
    printf("************             WELCOME !!!!               ****************\n");
    printf("************                TO                      ****************\n");
    printf("************            MEMORY MASTER               ****************\n");
    printf("******************************************\n");
    printf("******************************************\n");
    printf("************      A GAME TO BOOST YOUR MEMORY       ****************\n");
    printf("******************************************\n");
    printf("******************************************\n");
    printf("                      \t\tPRESS Enter key\n");
    scanf("%c",&key);
    system("clear");
    struct student stud1[5], stud2[5];int i;
      FILE *fptr;
      fptr = fopen("file.txt","wb");
       for(i = 0; i < 1; ++i)
       {
          fflush(stdin);
          printf("Enter Your NAME :\n");
          gets(stud1[i].name);
       }
           fwrite(stud1, sizeof(stud1), 1, fptr);
           fclose(fptr);
Menu:
{
            printf("Levels are:\n");
    printf("\tEasy(1)\n");
    printf("\tMedium(2)\n");
    printf("\tHard(3)\n");
    printf("Enter the level You Want to Play\n");
    scanf("%d",&level);
}    if(level==1)
   { while(1)
 {         sum1=sum1 + level_1();
    printf("If You want to play again, Enter 1 \nIf You want to goto Level Menu, Enter 2\nIF YOU WANT TO EXIT, ENTER 0\n");
    scanf("%d",&a);
    if (a==1)
    continue;
    else if (a==2)
     goto Menu;
    else
     break;
 }}
if(level==2)
   { while(1)
 {
  sum2=sum2 + level_2();
    printf("If You want to play again, Enter 1\nIf You want to goto Level Menu, Enter 2\nIF YOU WANT TO EXIT, ENTER 0\n");
    scanf("%d",&a);
    if (a==1)
    continue;
    else if (a==2)
     goto Menu;
    else
     break;
 }}
    if(level==3)
   { while(1)
 {
  sum3=sum3 + level_3();
    printf("If You want to play again, Enter 1 \nIf You want to goto Level Menu, Enter 2\nIF YOU WANT TO EXIT, ENTER 0\n");
    scanf("%d",&a);

    if (a==1)
    continue;
    else if (a==2)
     goto Menu;
    else
    break;
 }}
        printf("I HOPE YOU HAVE ENJOYED PLAYING THE GAME\n");
        printf("You Have Scored %d Points in EASY LEVEL\n",sum1);
        printf("You Have Scored %d Points in MEDIUM LEVEL\n",sum2);
        printf("You Have Scored %d Points in HARD LEVEL\n",sum3);
        printf("TOTAL POINTS SECURED IS %d\n",sum1+sum2+sum3);
        return 0;
}
int level_1()
{       int key;
          system("clear");
    printf("\t\tYou have choosen EASY Level\n");
    printf("Game Rules:\n");
    printf("\t*You have to memorise given ''order''\n\t*And You Will be given 15 Seconds To Memorise Given Statements\n");
    printf("Enter 1 To Start\n");
    scanf("%d",&key);
    system("clear");
    printf("Your Time Begins Now\n");
  char a[6];
            int i,j=0;
           char b[6];
          time_t t;
             srand((unsigned) time(&t));
          char c[6],d[6];
   for(i = 0; i<5; i++)
    {

            int x;
            
                a[i]=rand();
                x=a[i]%25;
                a[i]=x+65;
            printf("%c", a[i]);
   }  printf("\n");
      a[5]='\0';
      timmer(16);
   printf("Enter:\n");
       scanf("%s",b);
       j=strcmp(a,b);
    if (j==0)
                {
                         printf("You scored 5 points\n");
            return 5;
}       else
             {
                    printf("Better Luck Next Time\n");
          return 0;
                  }
}
int level_2()
{
    int key;
    system("clear");
    printf("\t\tYou have choosen MEDIUM Level\n");
    printf("Game Rules:\n");
    printf("\t*You have to memorise 5 two digit numbers in ''order''\n\t*And You Will be Given 15 Seconds to memorise");
    printf("\n\tReady??\n Enter 1 to Start\n");
    scanf("%d",&key);
    system("clear");
    printf("Your Time Starts Now\n");
          int a[5],b[5],j=-1;
              time_t t;
             srand((unsigned) time(&t));
    int i;
    for(i = 0; i<5; i++)
    {   int r=89,x;
                a[i]=rand();
                x=a[i]%89;
                a[i]=x+10;
            printf("%d  ", a[i]);
    }
printf("\n");
    timmer(20);
        printf("Enter :\n");

        for(i=0;i<5;i++)
        scanf("%d",&b[i]);

    for( i=0;i<5;i++)
        {       if (a[i]==b[i])
               j++;

        }
    if (j==4)
        {       printf("You Scored 5 Points\n");
            return j+1;
        }
        else if (j==3)
        {       printf("Almost There\n");
            return j+1;
        }else if (j==2)
        {       printf("Came a Half-Way :)\n");
            return j+1;
        }
        else if (j==1)
        {       printf("Better Luck Next Time\n");
            return j+1;
        }
        else if (j==0)
        {       printf("Better Luck Next Time\n");
            return 0;
        }
}
int level_3()
{        int key;
          system("clear");
    printf("\t\tYou have choosen HARD Level\n");
    printf("Game Rules:\n");
    printf("\t*You have to memorise given ''order''\n\t*And You Will be given 15 Seconds To Memorise Given Statements\n");
    printf("Enter 1 To Start\n");
    scanf("%d",&key);
    system("clear");
    printf("Your Time Begins Now\n");
  char a[6];
            int j=0;
           char b[6];
          time_t t;
             srand((unsigned) time(&t));
          char c[6],d[6];
              int i;
   for( i = 0; i<5; i++)
    {
            int x;
                a[i]=rand();
                x=a[i]%25;
                a[i]=x+65;
            printf("%c", a[i]);
   }   printf("\n");
      for(i = 0; i<5; i++)
    {   int x;
                c[i]=rand();
                x=c[i]%25;
                c[i]=x+97;
            printf("%c", c[i]);
   }
     a[5]='\0'; c[5]='\0';
printf("\n");
     timmer(20);
        printf("\nEnter :\n");
        scanf("%s%s",b,d);
         j=strcmp(a,b);
      int k=strcmp(c,d);
      i=j+k;
    if (i==0)
        {
                         printf("You scored 5 points\n");
            return 5;
}       else
             {
                    printf("Better Luck Next Time\n");
          return 0;
                  }
}
void timmer(int s)
{ while(s!=0)
    {   sleep(1);
         if (s==5)
            system("clear");
        if(s>=5 && s<=10)
          printf (" %d Seconds left\n",s-5);
       if (s<5)
          printf("\a");
        s=s-1;
   }
}
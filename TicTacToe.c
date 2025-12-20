#include<stdio.h>
#include<windows.h>
#define a 3
int count=9;
int winnerO();
int winnerX();
void printMatrix();
char c[3][3];


int winnerO()
{
    int  i,j;
    for(i=0;i<a;i++)
    {
        int k=0;
        for(j=0;j<a;j++)
        {
            if(c[i][j]=='o')
               k++;
        }
        if(k==a)
        return 1;
    }
    for(i=0;i<a;i++)
    {
        int k=0;
        for(j=0;j<a;j++)
        {
            if(c[j][i]=='o')
               k++;
        }
        if(k==a)
        return 1;
    }
    int k=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j)
            {
             if(c[i][j]=='o')
               k++;
               //printf("%d",k);
            }
        }
        if(k==a)
        return 1;
    }
    k=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(j==a-i-1)
            {
             if(c[i][j]=='o')
               k++;
              // printf("%d",k);
            }
        }
        if(k==a)
        return 1;
    }

 return 0;
    
}
int winnerX()
{
    int  i,j;
    for(i=0;i<a;i++)
    {
        int k=0;
        for(j=0;j<a;j++)
        {
            if(c[i][j]=='x')
               k++;
        }
        if(k==a)
        return 1;
    }
    for(i=0;i<a;i++)
    {
        int k=0;
        for(j=0;j<a;j++)
        {
            if(c[j][i]=='x')
               k++;
        }
        if(k==a)
        return 1;
    }
    int k=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j)
            {
             if(c[i][j]=='x')
               k++;
               //printf("%d",k);
            }
        }
        if(k==a)
        return 1;
    }
    k=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(j==a-i-1)
            {
             if(c[i][j]=='x')
               k++;
              // printf("%d",k);
            }
        }
        if(k==a)
        return 1;
    }

 return 0;
    
}
int insertO(int r)
{
    switch (r)
    {
    case 1:
        if(c[0][0]=='o'||c[0][0]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
         c[0][0]='o';
         return 0;
    case 2:
        if(c[0][1]=='o'||c[0][1]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[0][1]='o';
        return 0;
    case 3:
        if(c[0][2]=='o'||c[0][2]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[0][2]='o';
        return 0;
    case 4:
        if(c[1][0]=='o'||c[1][0]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[1][0]='o';
        return 0;
    case 5:
        if(c[1][1]=='o'||c[1][1]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[1][1]='o';
        return 0;
    case 6:
        if(c[1][2]=='o'||c[1][2]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[1][2]='o';
        return 0;
    case 7:
        if(c[2][0]=='o'||c[2][0]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[2][0]='o';
        return 0;
    case 8:
        if(c[2][1]=='o'||c[2][1]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[2][1]='o';
        return 0;
    case 9:
        if(c[2][2]=='o'||c[2][2]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[2][2]='o';
        return 0;
    default:
        printf("you entered wrong position\nenter again: ");
        return 1;
    }


} 
int insertX(int r)
{
    switch (r)
    {
    case 1:
        if(c[0][0]=='o'||c[0][0]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
         c[0][0]='x';
         return 0;
    case 2:
        if(c[0][1]=='o'||c[0][1]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[0][1]='x';
        return 0;
    case 3:
        if(c[0][2]=='o'||c[0][2]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[0][2]='x';
        return 0;
    case 4:
        if(c[1][0]=='o'||c[1][0]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[1][0]='x';
        return 0;
    case 5:
        if(c[1][1]=='o'||c[1][1]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[1][1]='x';
        return 0;
    case 6:
        if(c[1][2]=='o'||c[1][2]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[1][2]='x';
        return 0;
    case 7:
        if(c[2][0]=='o'||c[2][0]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[2][0]='x';
        return 0;
    case 8:
        if(c[2][1]=='o'||c[2][1]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[2][1]='x';
        return 0;
    case 9:
        if(c[2][2]=='o'||c[2][2]=='x')
        {
            printf("its cheating ;_;\nenter again: ");
            return 1;
        }
        c[2][2]='x';
        return 0;
    default:
        printf("you entered wrong position\nenter again: ");
        return 1;
    }


} 
void insertMAtrix()
{
     int i,j;
     char k='1';
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
           c[i][j]=k++;
        }
    }
}
void printMatrix()
{
    int i,j;
    printf("\n\n\n");
    for(i=0;i<a;i++)
    {
       // printf("---------------\n");
        for(j=0;j<a;j++)
        {
            printf(" %c  |",c[i][j]);
        }
        printf("\n");
        printf("    |    |    |");
       printf("\n");
    }
}
int main()
{
    int s,posi;
    char x;
    char player_1st='x';
    char player_2nd='o'; 
     play:
    printf("_____welcome to TICTOE Game______\n\n");
    insertMAtrix();
    printMatrix();
    printf("first player = x \n");
    printf("second player = o \n");
     while(count)
    {
        if(!winnerO())
        {
            //system("cls");
           // printMatrix();
            printf("\nplayer 1st enter your position: ");
            again1:
            fflush(stdin);
            scanf("%d",&posi);
            if(insertX(posi))
            {
                goto again1;
            }
             system("cls");
             printMatrix();
            --count;
        }
        else
        {
            printf("player 2nd ,you won <_>  ");
            getch();
            goto new;
        }
        if(count!=0)
        {
            if(!winnerX())
            {
                //system("cls");
                  //  printMatrix();
                printf("\nplayer 2nd enter your position: ");
                again2:
                fflush(stdin);
                scanf("%d",&posi);
                if(insertO(posi))
                {
                    goto again2;
                }
                system("cls");
                printMatrix();
                --count;
            }
            else
            {
                printf("player 1st, you won <_> ");
                getch();
                    goto new;
            }
        }
    }
    system("cls");
        printf("Game Draw\n");
        getch();
    new:
        system("cls");
        printf("if you want to play again,enter y");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='y'||x=='Y')
        {
            count=9;
            insertMAtrix();
            goto play;
        }

 
   return 0;
}
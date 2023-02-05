#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void fun(int [][4],char []);
void swap(int*,int*);

void fun(int arr[][4],char prr[])
    {int v=0,c,count=0,d,str[16],k=0;char a;
    for(int j=0;j<4;j++)
{
    for(int i=0;i<4;i++)
    {
        arr[j][i]=rand()%15+1;
        for(int m=0;m<k;m++)
        {
            if(arr[j][i]==str[m])
            {
                for(int y=0;arr[j][i]==str[m];y++)
                {
                if(i==3 &&j==3)
                {
                    arr[j][i]=32;
                    break;
                }
                    arr[j][i]=rand()%15+1;
                }
                m=0;
            }
        }
        
        str[k]=arr[j][i];
        k++;
    }
}
       for(int j=0;j<4;j++)
    { 
        printf("|");
    for(int i=0;i<4;i++)
    {
      if(i==3 && j==3)
      {arr[j][i]=32;
        printf(" %c  |",arr[j][i]);
      break;}  
      if(arr[j][i]<10)
      printf(" %d  |",arr[j][i]);
      else
      printf(" %d |",arr[j][i]);
    }
        printf("\n");
    }
    printf("---------------------\n");
   int move=20;
    for(int u=0;u<20;u++)
    { 
    printf("     Hello %s, Move remaing: %d\n\n",prr,move);
    move-=1;
    printf("---------------------\n");
        getch();//this will return zero
        a=getch();
        // if(u!=0)
        system("cls");
       
        // right arrow key
        
        if(a==77)
        {
        c=0;d=1;
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<4;i++)
            {
                if(arr[j][i]==32)
                {   if(i==0)
                {
                printf("invalid move\n");
               
                }
                else{
                    swap(&arr[j-c][i-d],&arr[j][i]);
                    v++;
                    break;
                }
                }
            }
            if(v==1)
            break;
        }
        v=0;
        }
        //down arrow key
        else if(a==80)
        {
        c=1;d=0;
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<4;i++)
            {
                if(arr[j][i]==32)
                {   if(j==0)
                {
                    printf("invalid move");
                    
                }
                    else
                    {
                    
                        swap(&arr[j-c][i-d],&arr[j][i]);
                         v++;
                         break;
                }
                }
            }
            if(v==1)
            break;
        }
        v=0;
        }
        //up arrow key
        else if(a==72)
        {
        c=1;d=0;
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<4;i++)
            {
                if(arr[j][i]==32)
                {   if(j==3)
                {
                printf("invalid move");
               
                }
                else
                {
                    swap(&arr[j+c][i-d],&arr[j][i]);
                     v++;
                     break;
                }
                }
            }
            if(v==1)
            break;
        }
        v=0;
        }
        //left arrow key
        else if(a==75)
        {c=0;d=1;
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<4;i++)
            {
                if(arr[j][i]==32)
                {
                    if(i==3)
                    {
                    printf("invalid move");
               
                    }
                    else
                    {
                    swap(&arr[j-c][i+d],&arr[j][i]);
                     v++;
                     break;
                }
                }
            }
           if(v==1)
            break; 
        }
         v=0;
        }
        
        
        //reprinting set of values
         printf("---------------------\n");
       for(int s=0;s<4;s++)
    { 
        printf("|");
    for(int h=0;h<4;h++)
    {
      if(arr[s][h]==32)
      {
        printf(" %c  |",arr[s][h]);
      }  
      if(arr[s][h]<10)
      printf(" %d  |",arr[s][h]);
      else
      {if(arr[s][h]!=32)
        printf(" %d |",arr[s][h]);
      }
    }
        printf("\n");
    }
    printf("---------------------\n");
    
    }
    
    
    //check for sorting
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<4;i++)
        {   if(i==3&&j==3)
            {
            if(arr[j][i]==32)
                {count++;
            break;}
            else
            break;
            }
            if(arr[j][i]==(i+1+j*4))
             count++;
        }
    }
    if(count==15)
    printf("you have won the game");
    else
    printf("YOU LOSE !\n");
    
    }
    void gamerule()
    {
        system("cls");
         printf("              RULE OF THIS GAME\n\n");
    printf("1.You can move only 1 step at a time by arrow key\n\n");
    printf("Move up    : by up arrow key\n");
    printf("Move down  : by down arrow key\n");
    printf("Move left  : by Left arrow key\n");
    printf("Move right : by right arrow key\n\n");
    printf("2.You can move number at empty position only\n");
    printf("3.For each valid move: your total number of move will be decreased by 1\n\n");
    printf("Winning situation: number in a 4*4 matrix should be in order from 1 to 15\n");
    printf("\n            Winning situation: \n");
    printf("---------------------\n");
    printf("| 1  | 2  | 3  | 4  |\n");
    printf("| 5  | 6  | 7  | 8  |\n");
    printf("| 9  | 10 | 11 | 12 |\n");
    printf("| 13 | 14 | 15 |    |\n");
    printf("---------------------\n");
    printf("\n");
    printf("So try to win in minimum number of move\n");
    printf("\n");
    printf("              Happy Gaming, Good Luck\n");
    printf("Enter any key to start....   ");
    getch();
    system("cls");
    }

int main()
{
int arr[4][4];
char prr[20];
char a;
printf("Player name: ");
gets(prr);
srand(time(NULL));
gamerule();
system("cls");
    printf("\n\n");
    
    fun(arr,prr);
 while(1)
{

printf("enter a key ");
scanf("%c",&a);
printf("%d",a);
if(a==121)
{
    fun(arr,prr);
// i don't know is this not running further
}
else
break;
}
    /*
left arrow: 75
up arrow: 72
right arrow: 77
down arrow: 80
    */

return 0;
}
 

 void swap(int *a,int *b)
 {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
 }

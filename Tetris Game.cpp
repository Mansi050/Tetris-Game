#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#include<graphics.h>
int stat;
int flag=0;
struct verticalStack
{
 int top;
 char a[6];
};
 struct verticalStack s1,s2,s3,s4;
 void iniStack(struct verticalStack *s)
 {
  s->a[0]=s->a[1]=s->a[2]=s->a[3]=s->a[4]=s->a[5]=' ';
  s->top=-1;

 }
 void pop(struct verticalStack *s)
 {
  s->a[s->top--]=' ';
 }
 void push(struct verticalStack *s,char c)
 {
  s->top++;
  if(s->top<=5)
   s->a[s->top]=c;
  else
   flag=-1;
 }
 bool checkAndDelete(struct verticalStack *s)
 {
  int temp_top=s->top;
  char x=s->a[temp_top--];
  //getchar();
  if(x==s->a[temp_top--])
  {
   if(x==s->a[temp_top])
   {
    pop(s);
    pop(s);
    pop(s);
    return true;
   }
   else
    return false;
  }
  else
   return false;
 }

 void layout(int score)
 {
 printf("    _________________________________________________________\n");                 Beep(1000,400);system("color 2");
 printf("    |    _______       _______       _______       _______  |\n");                 Beep(900,400);system("color 3");
 printf("    |                                                       |\n");                 Beep(800,400);system("color 4");
 printf("    |                                                       |\n");       Beep(700,400);system("color 5");
 printf("    |                                                       |\n");                                           system("color 7");
 printf("    |    _______       _______       _______       _______  |                          _________\n");        Beep(600,400);system("color 6");
 printf("    |                                                       |                         |         |\n");       Beep(500,400);system("color 2");
 printf("    |                                                       |                         |         |\n");   Beep(400,400);
 printf("    |                                                       |                         |         |\n");    Beep(500,400);system("color 3");
 printf("    |    _______       _______       _______       _______  |                         |         |\n");       Beep(600,400);system("color 2");
 printf("    |                                                       |                         |_________|\n");       Beep(700,400);system("color 4");
 printf("    |                                                       |\n");       Beep(800,400);system("color 7");
 printf("    |                                                       |\n");                 Beep(900,400);system("color 4");
 printf("    |    _______       _______       _______       _______  |                       SCORE = %d\n",score   );    Beep(1000,400);
 printf("    |                                                       |\n");                 Beep(900,400);system("color 2");
 printf("    |                                                       |\n");Beep(800,400);
 printf("    |                                                       |\n");                 Beep(700,400);system("color 8");
 printf("    |    _______       _______       _______       _______  |\n");                 Beep(600,400);system("color 2");
 printf("    |                                                       |\n");                 Beep(500,400);system("color 3");
 printf("    |                                                       |\n");              Beep(600,400);
 printf("    |                                                       |\n");                 Beep(700,400);system("color 6");
 printf("    |    _______       _______       _______       _______  |\n");                 Beep(800,400);system("color 7");
 printf("    |                                                       |\n");                 Beep(900,400);system("color 8");
 printf("    |                                                       |\n");              Beep(1000,400);

 printf("    |                                                       |\n");                 system("color 5");

 printf("    |___________|_____________|_____________|_______________|\n");
 printf("          1             2            3              4        \n");

}

void layout1(char c,int score)
{
 printf("    _________________________________________________________\n");
 printf("    |    _______       _______       _______       _______  |\n");
 printf("    |                                                       |\n");
 printf("    |      %c            %c            %c            %c         |\n",s1.a[5],s2.a[5],s3.a[5],s4.a[5]);
 printf("    |                                                       |\n");
 printf("    |    _______       _______       _______       _______  |                          _________\n");
 printf("    |                                                       |                         |         |\n");
 printf("    |      %c             %c            %c            %c        |                         |         |\n",s1.a[4],s2.a[4],s3.a[4],s4.a[4]);
 printf("    |                                                       |                         |    %c    |\n",c);
 printf("    |    _______       _______       _______       _______  |                         |         |\n");
 printf("    |                                                       |                         |_________|\n");
 printf("    |      %c             %c            %c            %c        |\n",s1.a[3],s2.a[3],s3.a[3],s4.a[3]);
 printf("    |                                                       |\n");
 printf("    |    _______       _______       _______       _______  |                       SCORE = %d\n",score);
 printf("    |                                                       |\n");
 printf("    |       %c            %c            %c             %c       |\n",s1.a[2],s2.a[2],s3.a[2],s4.a[2]);
 printf("    |                                                       |\n");
 printf("    |    _______       _______       _______       _______  |\n");
 printf("    |                                                       |\n");
 printf("    |       %c            %c            %c             %c       |\n",s1.a[1],s2.a[1],s3.a[1],s4.a[1]);
 printf("    |                                                       |\n");
 printf("    |    _______       _______       _______       _______  |\n");
 printf("    |                                                       |\n");
 printf("    |       %c            %c            %c             %c       |\n",s1.a[0],s2.a[0],s3.a[0],s4.a[0]);
 printf("    |                                                       |\n");
 printf("    |___________|_____________|_____________|_______________|\n");
 printf("          1             2            3              4        \n");
}

void delay2(int delay1)

{

int now=time(NULL);

int later=now+delay1;

while(now<=later)now=time(NULL);

}



int levelup(int cscore)
{
 int n;
 if(cscore==0)
  {
   n=5;
   return n;
   }

   else if(cscore>0&&cscore<105)
   {
       n=5;
       return n;
   }
  else if(cscore==105)
  {
   system("cls");
   printf("\n\n\n\n\n\t\t\t\tYou need +15 more to move to level 2!!!\n\n\n\n\n\t\t\t\tKeep Going!!!");
   delay(3);
   n=6;
   return n;
   }

   else if(cscore>105&&cscore<300)
   {
       n=6;
       return n;
   }

   else if(cscore==300)
   {
    system("cls");
    printf("\n\n\n\n\n\t\t\t\tYou need +15 more to move to level 3!!!\n\n\n\n\n\t\t\t\tkKeep Going!!!");
    delay(3);
    n=7;
    return n;
    }

     else if(cscore>300&&cscore<510)
     {
         n=7;
         return n;
     }
    else if(cscore==510)
    {
     system("cls");
     printf("\n\n\n\n\t\t\t\tYOU WON!!!");
     printf("\n\n\n\n\n\t\t\t\tThank you for playing VERTICAL TETRIS");
     delay(3);
     exit(0);
     }
     }





int startgame(char name[30])
{
w:  printf(" ");
    int r,game;
 	time_t t;
    srand((unsigned) time(&t));
    int score=0;
    layout(score);
 	while(1)
 	{
        int ip;
        int n=levelup(score);
     	system("cls");
  		r=35+(rand()%n);
  		char b=r;
  		layout1(b,score);
  printf("\n----------------------------------------------------------------------->>>>>  Enter Stack number: ");
  scanf("%d",&ip);
  if(ip==1)
  {
   push(&s1,b);
   if(flag==-1)break;
   if(checkAndDelete(&s1))
    score+=15;
  }
  else if(ip==2)
  {
   push(&s2,b);
   if(flag==-1)break;
   if(checkAndDelete(&s2))
    score+=15;
  }
  else if(ip==3)
  {
   push(&s3,b);
   if(flag==-1)break;
   if(checkAndDelete(&s3))
    score+=15;
  }
  else if(ip==4)
  {
   push(&s4,b);
   if(flag==-1)break;
   if(checkAndDelete(&s4))
    score+=15;
  }

 }
 system("cls");
 printf("GAME OVER!!! XoX, your Score is: %d \nTo play again press 1 or 0 to exit--->> ",score);
 scanf("%d",game);
 if(game==1)
  goto w;
 else
 return 0;
}


int main()
{
     int gd=DETECT,gm;
	initgraph(&gd,&gm,"..//BGI");
    //settextstyle(5,HORIZ_DIR,3);
    delay(1);
    setbkcolor(RED);
	settextstyle(6,0,6);
	outtextxy(180,100,"WELCOME ");
    settextstyle(6,0,6);
    outtextxy(270,175,"TO ");
    settextstyle(6,0,6);
    outtextxy(110,250,"TETRIS GAME");
    delay(1);
   // getch();
 int c;
char name[20];
printf("Press any key to continue::");
getch();
system("cls");
printf("\nRead the instructions below before you play THE VERTICAL TETRIS game!!!\n ");
printf("\n1.The game makes use of special symbols instead of blocks as in the original game.");
printf("\n2.By pressing any number from 1 to 4, you can decide where the symbol falls.");
printf("\n3.Every time the player gets 3 same symbols in the vertical direction, +15 score is awarded.");
printf("\n4.Once the score becomes greater than 100, you will be sent to level 2 having medium difficulty.");
printf("\n5.If you reach a score of 300 then you will be sent to level 3 having highest difficulty.\n");
printf("\n6.You can finish the game once your score exceeds 500.");
printf("\n7.If any of the block gets completely filled, you lose the game!!!");
printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

int ch,p;
printf("\n\n\n\n\n\t\tPress 1 to play and 2 to exit: ");
scanf("%d",&ch);
	switch(ch)
	{
	 case 1:
	        printf("\n\n\n\t\t\tEnter your name: ");
	       scanf("%s",name);
	       system("cls");
	        stat=startgame(name);
	        break;

	case 2:
	        system("cls");
	        printf("\n\n\n\n\n\t\t\t\t\t\tTHANK YOU FOR PLAYING");
	        delay(5);
	        exit(0);
	default: printf(":Invalid choice:");
          	break;
	}
}

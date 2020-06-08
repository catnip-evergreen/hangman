#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<bios.h>




void screen1()//intro
{

setcolor(WHITE);
setfillstyle(SOLID_FILL,7);
floodfill(100,100,WHITE);


//rectangle(20,50,620,400);


setcolor(0);
settextstyle(1,0,9);

	outtextxy(125,135,"H");
	delay(400);
      outtextxy(182,135,"A");
	delay(400);
  outtextxy(239,135,"N");
	delay(400);
	outtextxy(296,135,"G");
	delay(400);
      outtextxy(353,135,"M");
	delay(400);
	outtextxy(410,135,"A");
	delay(400);
	outtextxy(467,135,"N");
	delay(400);

settextstyle(3,0,2);
outtextxy(400,300,"By-Stuti & Prerna");
delay(400);



}

void screen2()
{
setcolor(WHITE);
 settextstyle(3,0,5); //construct a line beneath main menu
 outtextxy(200,40,"MAIN MENU");  //also use bioskey
 setcolor(WHITE);
 rectangle(220,150,390,200);
 settextstyle(6,0,3);
 outtextxy(260,150,"1.PLAY");
 rectangle(220,250,390,300);
 outtextxy(230,250,"2.INSTRUCTIONS");
 rectangle(220,350,390,400);
 outtextxy(260,350,"3.EXIT");
 settextstyle(3,0,2);
outtextxy(225,425,"Enter your choice");
/*setcolor(WHITE);
 circle(500,200,20);
 floodfill(500,200,WHITE);
 line(500,220,455,400);
 line(492,250,528,230);
 line(492,250,452,230);
 line(468,350,520,410);
 line(468,350,410,410);
 */
}
void screen4()
{ setcolor(RED);
setfillstyle(SOLID_FILL,RED);
floodfill(100,100,RED);

 setcolor(0);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);



 setcolor(RED);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);


 setcolor(0);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);


 setcolor(RED);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);


 setcolor(0);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);
  setcolor(RED);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);
  setcolor(0);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);
  setcolor(RED);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);
  setcolor(0);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);
  setcolor(RED);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);

  setcolor(0);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);
  setcolor(RED);
settextstyle(3,0,9);
outtextxy(125,135,"YOU LOSE");
 delay(100);

 cleardevice();
  }
  void win()
{
setcolor(0);
setfillstyle(SOLID_FILL,0);
circle(320,220,5);
floodfill(320,220,0) ;
delay(200);
setcolor(1);
setfillstyle(SOLID_FILL,1);
circle(320,220,10);
floodfill(326,220,1) ;
delay(200);
setcolor(2);
setfillstyle(SOLID_FILL,2);
circle(320,220,15);
floodfill(320,220,2) ;
delay(200);
setcolor(3);
setfillstyle(SOLID_FILL,3);
circle(320,220,20);
floodfill(320,220,3) ;
delay(200);
setcolor(4);
setfillstyle(SOLID_FILL,4);
circle(320,220,20);
floodfill(320,220,4) ;
delay(200);
setcolor(5);
setfillstyle(SOLID_FILL,5);
circle(320,220,25);
floodfill(320,220,5) ;
delay(200);
setcolor(6);
setfillstyle(SOLID_FILL,6);
circle(320,220,30);
floodfill(320,220,6) ;
delay(200);
setcolor(7);
setfillstyle(SOLID_FILL,7);
circle(320,220,35);
floodfill(320,220,7) ;
delay(200);
setcolor(8);
setfillstyle(SOLID_FILL,8);
circle(320,220,40);
floodfill(320,220,8) ;
delay(200);
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(320,220,45);
floodfill(320,220,9) ;
delay(200);
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(320,220,50);
floodfill(320,220,10) ;
delay(200);
setcolor(11);
setfillstyle(SOLID_FILL,11);
circle(320,220,55);
floodfill(320,220,11) ;
delay(200);
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(320,220,60);
floodfill(320,220,12) ;
delay(200);
setcolor(13);
setfillstyle(SOLID_FILL,13);
circle(320,220,65);
floodfill(320,220,13) ;
delay(200);
setcolor(14);
setfillstyle(SOLID_FILL,14);
circle(320,220,70);
floodfill(320,220,14) ;
delay(200);
setcolor(15);
setfillstyle(SOLID_FILL,15);
circle(320,220,75);
floodfill(320,220,15) ;
delay(200);
setcolor(16);
setfillstyle(SOLID_FILL,16);
circle(320,220,80);
floodfill(320,220,16) ;
delay(200);
setcolor(17);
setfillstyle(SOLID_FILL,17);
circle(320,220,85);
floodfill(320,220,17) ;
delay(200);
setcolor(18);
setfillstyle(SOLID_FILL,18);
circle(320,220,90);
floodfill(320,220,18) ;
delay(200);
setcolor(19);
setfillstyle(SOLID_FILL,19);
circle(320,220,95);
floodfill(320,220,19) ;
delay(200);
setcolor(20);
setfillstyle(SOLID_FILL,20);
circle(320,220,100);
floodfill(320,220,20) ;
delay(200);
setcolor(21);
setfillstyle(SOLID_FILL,21);
circle(320,220,105);
floodfill(320,220,21) ;
delay(200);
setcolor(22);
setfillstyle(SOLID_FILL,22);
circle(320,220,110);
floodfill(320,220,22) ;
delay(200);
setcolor(23);
setfillstyle(SOLID_FILL,23);
circle(320,220,120);
floodfill(320,220,23) ;
delay(200);
setcolor(24);
setfillstyle(SOLID_FILL,24);
circle(320,220,130);
floodfill(320,220,24) ;
delay(200);
setcolor(25);
setfillstyle(SOLID_FILL,25);
circle(320,220,140);
floodfill(320,220,25) ;
delay(200);
setcolor(26);
setfillstyle(SOLID_FILL,26);
circle(320,220,150);
floodfill(320,220,26) ;
delay(200);
setcolor(27);
setfillstyle(SOLID_FILL,27);
circle(320,220,160);
floodfill(320,220,27) ;
delay(200);
setcolor(28);
setfillstyle(SOLID_FILL,28);
circle(320,220,170);
floodfill(320,220,28) ;
delay(200);
setcolor(29);
setfillstyle(SOLID_FILL,29);
circle(320,220,180);
floodfill(320,220,29) ;
delay(200);
setcolor(30);
setfillstyle(SOLID_FILL,30);
circle(320,220,190);
floodfill(320,220,30) ;
delay(200);
setcolor(31);
setfillstyle(SOLID_FILL,31);
circle(320,220,200);
floodfill(320,220,31) ;
delay(200);
setcolor(RED);
settextstyle(1,0,8);
outtextxy(150,170,"YOU WIN!");

}


void hangman(int count)
{


switch(count)
 {
 case 1:
     setcolor(WHITE);
     circle(500,100,50);
     floodfill(500,100,WHITE);

     setcolor(RED);
     setfillstyle(SOLID_FILL,RED);
     circle(480,100,5);
     floodfill(480,100,RED);

     circle(520,100,5);
     floodfill(520,100,RED);
     break;

 case 2:
     setcolor(WHITE);
     line(500,150,500,425);
     break ;
 case 3:
     setcolor(WHITE);
     line(500,300,420,420);
     break ;
      case 4:
     setcolor(WHITE);
     line(500,300,600,420);
     break ;
      case 5:
     setcolor(WHITE);
     line(500,220,400,120);
     break ;
      case 6:
     setcolor(WHITE);
     line(500,220,600,120);
     break ;

 default:
 cout<<"does not exist";

  }
}

void word(char word1[100])
{
randomize();
char words[][100]={"prerna","prerna","prerna","prerna","prerna","prerna"};
strcpy(word1,words[random(6)]);

}

void screen3()
{ //clue

char word1[100],letter[100];
int n,count=0,l,j;
setcolor(WHITE);
setfillstyle(SOLID_FILL,CYAN);
 floodfill(100,100,CYAN);
setcolor(WHITE);
 rectangle(20,405,100,450);
 settextstyle(6,0,3);
 outtextxy(37,412,"CLUE");
 settextstyle(7,0,2);
 outtextxy(50,50,"Guess the word or kill the man!!!!!!!!!!!");
 word(word1);
 n=strlen(word1);
 for(int i=0;i<n;i++)
 {outtextxy(80+20*i,100,"_");
	 }
 for(i=0;i<n;i++)
{
  outtextxy(80,150+30*i,"enter the letter");
   gets(letter);
  //    for(j=0;j<n;j++)
     if (letter[i] == word1[i])
   {
    outtextxy(250,150+30*i,"correct guess!");

    outtextxy(80+20*i,98,"*");

    }
   else
   { setcolor(WHITE);
   outtextxy(250,150+30*i,"wrong!!!!!");
       count++;

      hangman(count);
    //  f++;

    }
   }
 if (count==n)
{
      delay(200);
  screen4();
//  break;//}
  //else
 // continue ;

 }

 }
 void instructions()
{
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
floodfill(100,100,GREEN);
settextstyle(1,0,5);
setcolor(YELLOW);
outtextxy(170,30,"HOW TO PLAY ?");
settextstyle(6,0,2);
outtextxy(20,100,"Guess any letter which you feel may be correct.");
outtextxy(20,130,"If your choice is correct a star will be placed at ") ;
outtextxy(20,160,"the position your letter must take in the word.") ;
outtextxy(20,190,"If you complete the word before the hangman completes") ;
outtextxy(20,220,"YOU WIN !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!") ;
outtextxy(20,250,"If you give the wrong letter, a limb of the hangman ") ;
outtextxy(20,280,"comes into picture. You have untill the whole of ") ;
outtextxy(20,310,"hangman is created. After that YOU LOSE !!!!!!!!!")  ;
settextstyle(1,0,4);
outtextxy(170,370,"BEST OF LUCK :)") ;
settextstyle(1,0,1);
outtextxy(200,450,"Press any key to continue");
getch();
 }

/*void P(int choice)
{  if(choice==1)
       { screen3();
	delay (500);}
	 else if(choice==2)
	  {instructions();
	   cleardevice();
	   screen2();}

	 else if(choice==3)
	 exit(0);
	 }

	   */

void main()
      { int choice;
	int gdriver = DETECT, gmode , errorcode;      //initialise graphics
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
	cleardevice();
	screen1();
	delay(1000);
	cleardevice();
	position:
	screen2();
	delay(500);
	cin>>choice;
	cleardevice();
       if(choice==1)
       { screen3();
	delay (500);}
	 else if(choice==2)
	  {instructions();
	   cleardevice();
	  goto position;}

	 else if(choice==3)
	 exit(0);



	// P(choice);
	getch();
      }

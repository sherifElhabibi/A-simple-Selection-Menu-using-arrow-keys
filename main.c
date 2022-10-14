#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define up 72
#define down 80
#define enter 13
void gotoxy(int x,int y)
{
    COORD coord= {0,0}; // this is global variable
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}
int main()
{
    char menu[3][10]={"New","Display","Exit"};
    char menu2[5][25]={"Name","D.O.B","Adress","Biography","Exit"};
    char key;
    int position=5;
    int flag=0;

      textattr(0);
      textattr(12);
    _cprintf("Welcome to my Program :D\n\n");
    _cprintf("Please Select one of the options");

    do
    {
    for(int i=0;i<3;i++)
    {
      gotoxy(10 ,(5+i));
      if(position==5+i)
      textattr(9);
      _cprintf("%s\n", menu[i]);
      textattr(12);

    }
     gotoxy(10, position);
     key = getch();
     switch(key)
     {
    case up:
        position--;
        if(position<5)
        {
          position=7;
        }
        break;
        ////////////////////////
        //Same but Longer Code//
        ///////////////////////

       /* if(position!=4)
        {
        gotoxy(10, position--);
        getch();
        }
        else {
        position=7;
        gotoxy(10, position--);
        getch();
        }*/
    break;
    case down:
        position++;
        if(position>7)
        {
          position=5;
        }
        break;
        ////////////////////////
        //Same but Longer Code//
        ///////////////////////


       /* if(position!=8)
        {
        gotoxy(10, position++);
        getch();
        }
        else {
        position=5;
        gotoxy(10, position++);
        getch();
        }
        break;*/

    case enter:

if(position==5)
        {
    system("cls");
    textattr(0);
    textattr(12);
    _cprintf("Welcome to my Program :D\n\n");
    _cprintf("Please Select one of the options");
     gotoxy(15, 5);
    do{

    for(int i=0;i<5;i++)
    {
      gotoxy(25 ,(5+i));
      if(position==5+i)
      textattr(9);

      _cprintf("%s\n", menu2[i]);
      textattr(12);
    }
    gotoxy(30, position);
    key = getch();
    switch(key)
     {
    case up:
        position--;
        if(position<5)
        {
          position=9;
        }
        break;
    case down:
        position++;
        if(position>9)
        {
          position=5;
        }
        break;
    case enter:
        if(position==5)
        {
            gotoxy(30,8);
            printf("\n\n\nSherif Hussein Elhabibi");
        }
        if(position==6)
        {
            gotoxy(30,9);
            printf("\n\n\n1st Feb. 1998");

        }
        if(position==7)
        {
            gotoxy(30,10);
            printf("\n\n\nMansoura Qism 2, El Mansoura, Dakahlia Governorate");

        }
        if(position==8)
        {   gotoxy(30,12);
            printf("\n\n\nSherif is a Biomedical Engineer with one year experience in such field who is Passionate about Coding & Computer Science Seeking for an opportunity to work as a full stack engineer and further his Experience & Knowledge .");
        }
        if(position==9)
        {   gotoxy(0,25);
            printf("Good Bye :D");
            flag=1;
        }
     }
        }
                        //////////////////
        while(flag!=1); //CHILD DO WHILE//
        }               //////////////////


///////////////////////////////////////////////

if(position==6)
        {

            printf("\n\n\nDisplay...\n\nThis is a test Program\n\nLinkedin Profile: https://www.linkedin.com/in/sherif-elhabibi-254884151/ \n\nGitHub: https://github.com/sherifElhabibi");

        }
///////////////////////////////////////////////


if(position==7)
        {
           printf("\n\n\nGood Bye :D\n");
           flag=1;
        }
    default:
        break;
    }
    }
                    ///////////////////
    while(flag!=1); //PARENT DO WHILE//
                    ///////////////////
    return 0;
}



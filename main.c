#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <process.h>
#include <time.h>
#include <dos.h>
#include <dir.h>
#include "for_design.h"

#define in int

typedef float fl;

 in a;

struct gamedetails
{
    char competition[40];
    char venue[40];
    char matchbetween[40];
    char versus[40];
    char tosswonby[40];
    char electedto[40];
    int inningsof;
    char date[40];
    char btsnm[20];
    int btsrn;
    int btsbf;
    int btsfr;
    int btssx;
    char obtsnm[20];
    int obtsrn;
    int obtsbf;
    int obtsfr;
    int obtssx;
    char blsnm[20];
    int blsovr;
    int blsrg;
    int blswtk;
    int blsmdnovr;
    char oblsnm[20];
    int oblsovr;
    int oblsrg;
    int oblswtk;
    int oblsmdnovr;
    time_t t;
};
struct gamedetails g , g1, g2, g3, g4, g5, g6, g7, g8;

int main()
{
        system("cls");
        gotoxy(42,0);
        system("COLOR a");
        printf(":::::::::::::::::::::::::::::::::::\t");
        gotoxy(42,1);
        printf(":::WELCOME TO CRICKET SCORESHEET:::\n\n");
        gotoxy(42,2);
        printf(":::::::::::::::::::::::::::::::::::\n");
    char pasword[6],usrname[11], ch;
    char chek[6]={'a','d','m','i','n'};

    int i,valid=0;
    fflush(stdin);
    printf("\n\n\t\t\t\t   Enter Secret Password for Enter the Main Menu:\n");
    printf("\t\t\t\t   ==>");

    for(i=0;i<5;i++)
    {
     ch = _getch();
     pasword[i] = ch;
     ch = '*' ;
     printf("%c",ch);
   }
   for(i=0;i<5;i++)
   {
     if(pasword[i]==chek[i])
     {
      valid=valid+1;
     }
   }
    if(valid==5)
    {
     load();
     homepage();
    }
    else
    {
      system("COLOR 4");
      printf("\n\t\t  !!!Wrong Password Try Again!!!\n");
      system("COLOR A");

      Sleep(2000);
      main();
    }

    return 0;
}
int load()
{
    int row,col,r,c,q;
    gotoxy(39,14);
    printf("\t\tloading...");
    gotoxy(30,15);
    for(r=1;r<=50;r++)
        {
    for(q=0;q<=100000000;q++);//to display the character slowly
    printf("%c",178);
       }
       Sleep(500);
       homepage();
    _getch(); //for get an extra input(Enter or Any alphabat or number)
}

int homepage()
{
    while(option()){}
}

int option()
{
    system("cls");
        gotoxy(42,0);
        system("COLOR f9");
        Sleep(1000);
        printf(":::::::::::::::::::::::::::::::::::\t");
        gotoxy(42,1);
        printf(":::WELCOME TO CRICKET SCORESHEET:::\n\n");
        gotoxy(42,2);
        printf(":::::::::::::::::::::::::::::::::::\n");
    int choption;
    Sleep(100);
    printf("Choose an Option");
    Sleep(100);
    SetColor(1);
    printf("\nPress [ 1 ] and 'Enter' for New Score sheet.");
    Sleep(100);
    SetColor(2);
    printf("\nPress [ 2 ] and 'Enter' For View a score sheet.");
    Sleep(100);
    SetColor(3);
    printf("\nPress [ 3 ] and 'Enter' for Search a Match Details.");
    Sleep(100);
    SetColor(4);
    printf("\nPress [ 4 ] and 'Enter' for Delete or Edit Data.");
    Sleep(100);
    SetColor(5);
    printf("\nPress [ 5 ] and 'Enter' for View reasult.");
    Sleep(100);
    SetColor(6);
    printf("\nPress [ 6 ] and 'Enter' For Exit.\n ");
    SetColor(10);
    printf("\nI Choose :\t  ");

    fflush(stdin);

    while(scanf("%d",&choption))
    {
        printf("\n");
        if(choption == 1 || choption == 2 || choption == 3 || choption == 4 || choption == 5 || choption == 6)
        {
            if(choption == 1)
            {
                system("cls");
                printf("\nPress [ 1 ] for Add New Game Details.\nPress [ 2 ] for Add 1st Bating Team's Batsman Details.\nPress [ 3 ] for  Add 2nd Bating Team's Batsman Details.\nPress [ 4 ] for Add 1st Bowler Team's Bowler Data\nPress [ 5 ] for Add 2nd Bowler Team's Bowler Data.\n==>\n");
                while(scanf("%d",&a))
                {
                    if(a == 1)
                    {
                        gmdtls();
                        break;
                    }
                    if(a == 2)
                    {
                        btsdtls();
                        break;
                    }
                    if(a == 3)
                    {
                        obtsdtls();
                        break;
                    }
                    if(a == 4)
                    {
                        bldtls();
                        break;
                    }
                    if(a == 5)
                    {
                        obldtls();
                        break;
                    }
                    else
                    {
                        printf("Invalid Keyword!!! Please Choose 1, 2, 3, 4 or 5 for Option.\n==>\n");
                    }
                }
            }
            if(choption == 2)
            {
                printf("\nPress [ 1 ] for Game Details\nPress [ 2 ] for Bating Details\nPress [ 3 ] for Bowling Details \n\n ");
                printf("==>");
                while(scanf("%d",&a))
                {
                if(a == 1)
                {
                showdtl();
                break;
                }
                if(a == 2)
                {
                showbtsdtl();
                break;
                }
                if(a == 3)
                {
                    showbldtl();
                    break;
                }
                else
                {
                    printf("Invalid Keyword!! Please Press 1, 2 or 3 for Show a Data\n ");
                }
                }
            }
            if(choption == 3)
            {
                printf("\nPress [ 1 ] for Search Game Details\nPress [ 2 ] for Search Batsman Details\nPress [ 3 ] for Search Bowlar Details \n\n ");
                printf("==>");
                while(scanf("%d",&a))
                {
                if(a == 1)
                {
                searchmain();
                //search();
                break;
                }
                if(a == 2)
                {
                btsdtasrch();
                break;
                }
                if(a == 3)
                {
                blsdtasrch();
                break;
                }
                else
                {
                    printf("Invalid Keyword!! Please Press 1, 2 or 3 for Search a Data\n ");
                }
                }
            }
            if(choption == 4)
            {
                printf("\nPress [ 1 ] for Delete a Game Details.\nPress [ 2 ] for Edit 1st Batting Team's Details.\nPress [ 3 ] for Edit 2nd Batting Team's Details.\nPress [ 4 ] for Edit 1st Bowling Team's Details.\nPress [ 5 ] for Edit 2nd Bowling Team's Details.\n==>");
                while(scanf("%d",&a))
                {
                    if(a == 1)
                    {
                         fordelete();
                         break;
                    }
                    if(a == 2)
                    {
                         foredit();
                         break;
                    }
                    if(a == 3)
                    {
                         foredit1();
                         break;
                    }
                    if(a == 4)
                    {
                         foredit2();
                         break;
                    }
                    if(a == 5)
                    {
                         foredit3();
                         break;
                    }
                    else
                    {
                        printf("Invalid Keyword!! Press 1,2,3,4 or 5 for Option.\n");
                    }
                }
            }
            if(choption == 5)
            {
                system("cls");
                printf("\n\n");
                printf("\t\t\t\t\t\t:::::::::::::::\n");
                printf("\t\t\t\t\t\t::Final Score::\n");
                printf("\t\t\t\t\t\t:::::::::::::::\n");
                printf("\n\n");
                printf("[1st Batting Team ");
                printf("\t");
                printf("make\t");
                sumofrun();
                printf("Run\nIn ");
                sumofwkt();
                printf("Wicket.");
                printf("\n");
                highestrun();
                printf("\n");
                printf("Avarage Run rate is\t");
                avaragerunrate();
                printf("\n\n");

                printf("[2nd Batting Team ");
                printf("\t");
                printf("Make\t");
                osumofrun();
                printf("Run\nIn ");
                osumofwkt();
                printf("Wicket.");
                printf("\n");
                ohighestrun();
                printf("\n");
                printf("Avarage Run Rate is\t");
                oavaragerunrate();

             printf("\n\n\n\n\nPress [ 1 ] and 'Enter' for Return to Main menu\n\nPress [ 2 ] and 'Enter' for Exit\n\n");
            while(scanf("%d",&a))
        {
            if(a == 1 || a == 2)
                {
                    if(a == 1)
                    {
                        printf("OK, Now Were You Want to go :-)");
                        option();
                        break;
                    }
            if(a == 2)
                   {
                       forexit();
                   }
                   else
                   {
                       printf("Invalid Input");
                   }

                }
            }
        }

            if(choption == 6)
            {
                forexit();
                break;
            }
    }
else {
        printf("\nInvaild Input!");
        printf("\n\n");
        fflush(stdin);
      }
    }
}

int forexit()
{
    system("cls");
                 printf("\n  Do You Want To Exit.\n  Press[1]Yes\n  Press[2]No\n");
              while(scanf("%d",&a))
   {
                if(a == 1)


            {
                printf("\nOk, See You Again :-)");
                printf("\n\n");
                exit(EXIT_SUCCESS);
            }

                if(a == 2)
                {
                    option();
                    break;
                }
           else
           {
               printf("Wrong keyword!! Please Choose 1 or 2 and Press Enter.");
               Sleep(1000);
               forexit();
           }
   }
}

int gmdtls()
{
    system("cls");
    FILE *gmdtl;
    gmdtl=fopen("GameDetails.txt","a");
    if(gmdtl==NULL)
    {
        perror("Error");
        exit(1);
    }
    fflush(stdin);

        printf("\nCompetition Type:\n");
        gets(g.competition);
        printf("\nVenue:\n");
        gets(g.venue);
        printf("\n1st Team:\n");
        gets(g.matchbetween);
        printf("\n2nd Team:\n");
        gets(g.versus);
        printf("\nToss Won by:\n");
        gets(g.tosswonby);
        printf("\nElected to:\n");
        gets(g.electedto);
        printf("\nInnings in this match:\n");
        scanf("%d",&g.inningsof);
        printf("\n");
        {
        printf("Todays Date is:-\n");
        //time_t t;
        time(&g.t);
        printf("%s",ctime(&g.t));
        }
  fwrite(&g, sizeof(g), 1, gmdtl);
  fclose(gmdtl);
  printf("\n\nPress [ 1 ] for Add player details\n\nPress [ 2 ] and 'Enter for Main menu.\n");

  while(scanf("%d",&a))
  {
      if(a == 1 || a == 2)
        {
            if(a == 1)
            {
                 printf("OK, ADD Player Details now :-)\n\n");
                 btsdtls();
                 break;
            }
            if(a == 2)
            {
                 printf("OK, Now Were You Want to go :-)");
                 option();
                 break;
            }
        }
      else
      {
         printf("'INVALID OPTION'. Please Press '1' or '2' And 'Enter' for Options");
      }
  }
  return 0;
}

int btsdtls()
{
    system("cls");
    FILE *btdtl;
    btdtl=fopen("BatsmanDetails.txt","a");
     if(btdtl==NULL)
    {
        perror("Error");
        exit(1);
    }
    fflush(stdin);

        printf("Player Name(First Batting):-\n");
        gets(g.btsnm);
        printf("Run made by him(First Batting):-\n");
        scanf("%d",&g.btsrn);
        printf("Ball He Faceed(First Batting):-\n");
        scanf("%d",&g.btsbf);
        printf("Four He Made(First Batting):-\n");
        scanf("%d",&g.btsfr);
        printf("SIX He Made(First Batting):-\n");
        scanf("%d",&g.btssx);

    fwrite(&g, sizeof(g), 1, btdtl);
    fclose(btdtl);
    printf("\n\tPress [ 1 ] and 'Enter' for Add Another Batsman Details\n\tPress [ 2 ] and 'Enter' for Add Bowler Info\n\tPress [ 3 ] and 'Enter' for Return to Main menu\n");
    printf("==>\t");

     char option_ch;
     option_ch = _getch();

          switch (option_ch)
          {
              case '1':
               {
                btsdtls();
                break;
               }
               case '2':
               {
                bldtls();
                break;
               }
            case '3':
            {
                 printf("OK, Now Were You Want to go :-)\n");
                 option();
                 break;
            }
            default:
                {
                    printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
                }
         }
  return 0;
}

int bldtls()
{
    system("cls");
    FILE *bldtl;
    bldtl=fopen("BowlersDetails.txt","a");
     if(bldtl==NULL)
    {
        perror("Error");
        exit(1);
    }
    fflush(stdin);

        printf("Bowler Name(First Bowling):-\n");
        gets(g.blsnm);
        printf("Total over he do(First Bowling):-\n");
        scanf("%d",&g.blsovr);
        printf("Total Run he Given(First Bowling):-\n");
        scanf("%d",&g.blsrg);
        printf("Wicket he take(First Bowling):-\n");
        scanf("%d",&g.blswtk);
        printf("Maiden over(First Bowling):-\n");
        scanf("%d",&g.blsmdnovr);

    fwrite(&g, sizeof(g), 1, bldtl);
    fclose(bldtl);
    printf("\n\tPress [ 1 ] and 'Enter' for Add Another Bowler Details\n\tPress [ 2 ] and 'Enter' for Add secound Team's Batsman's info\n\tPress [ 3 ] and 'Enter' for Go to main menu\n");
    printf("==>\t");

     while(scanf("%d",&a))
  {
      if(a == 1 || a == 2 || a == 3)
        {
            if(a == 1)
               {
                    bldtls();
                break;
               }
            if(a == 2)
               {
                   obtsdtls();
                   break;
               }
            if(a == 3)
            {
                 printf("OK, Now Were You Want to go :-)");
                 option();
                 break;
            }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }
  return 0;
}


int obtsdtls()
{
    system("cls");
    FILE *obtdtl;
    obtdtl=fopen("OBatsmanDetails.txt","a");
     if(obtdtl==NULL)
    {
        perror("Error");
        exit(1);
    }
    fflush(stdin);

        printf("Player Name(Secound Bat):-\n");
        gets(g.obtsnm);
        printf("Run made by him(Secound Bat):-\n");
        scanf("%d",&g.obtsrn);
        printf("Ball He Faceed(Secound Bat):-\n");
        scanf("%d",&g.obtsbf);
        printf("Four He Made(Secound Bat):-\n");
        scanf("%d",&g.obtsfr);
        printf("SIX He Made(Secound Bat):-\n");
        scanf("%d",&g.obtssx);

    fwrite(&g, sizeof(g), 1, obtdtl);
    fclose(obtdtl);
    printf("\n\tPress [ 1 ] and 'Enter' for add another Batsman Details\n\tPress [ 2 ] and 'Enter' for Add Bowler Info\n\tPress [ 3 ] and 'Enter' for return to main menu\n");
    printf("==>\t");

     while(scanf("%d",&a))
  {
      if(a == 1 || a == 2 || a == 3)
        {
            if(a == 1)
               {
                    obtsdtls();
                    break;
               }
               if(a == 2)
               {
                    obldtls();
                    break;
               }
            if(a == 3)
            {
                 printf("OK, Now Were You Want to go :-)\n");
                 option();
                 break;
            }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options");
      }
  }
return 0;
}

int obldtls()
{
    system("cls");
    FILE *obldtl;
    obldtl=fopen("OBowlersDetails.txt","a");
     if(obldtl==NULL)
    {
        perror("Error");
        exit(1);
    }
    fflush(stdin);

        printf("Bowler Name(Secound Ball):-\n");
        gets(g.oblsnm);
        printf("Total over he do(Secound Ball):-\n");
        scanf("%d",&g.oblsovr);
        printf("Total Run he Given(Secound Bowling):-\n");
        scanf("%d",&g.oblsrg);
        printf("Wicket he take(Secoud Ball):-\n");
        scanf("%d",&g.oblswtk);
        printf("Maiden over(Secound Ball):-\n");
        scanf("%d",&g.oblsmdnovr);

    fwrite(&g, sizeof(g), 1, obldtl);
    fclose(obldtl);
    printf("\n\tPress [ 1 ] and 'Enter' for add another Bowler Details\n\tPress [ 2 ] and 'Enter' for Go to Main menu\n");
    printf("==>\t");

     while(scanf("%d",&a))
  {
      if(a == 1 || a == 2 || a == 3)
        {
            if(a == 1)
               {
                   obldtls();
                   break;
               }
            if(a == 2)
            {
                 printf("OK, Now Were You Want to go :-)\n");
                 option();
                 break;
            }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }
  return 0;
}

int showdtl()
{
        system("cls");
        FILE *sgmdtl;
        sgmdtl=fopen("GameDetails.txt","r");
        printf("Competition\tVenue\tMatch Between\tVersus\tToss won by\tElected to\tInnings of\t Date\n");
    while(fread(&g, sizeof(g), 1, sgmdtl))
    {
        printf("%s\t\t%s\t%s\t\t%s\t%s\t\t%s\t\t%d\t\t%s\n",g.competition,g.venue,g.matchbetween,g.versus,g.tosswonby,g.electedto,g.inningsof,ctime(&g.t));
    }
        fclose(sgmdtl);
        printf("\n\nWant to see Player Details??\n\tPress [ 1 ] and 'Enter' To see Player Data.\n\tPress [ 2 ] and 'Enter' to see Bowler info\n\tPress [ 3 ] Return to Main menu.\n");
        printf("==>\t");
    while(scanf("%d",&a))
        {
      if(a == 1 || a == 2 || a == 3)
        {
            if(a == 1)
               {
                    showbtsdtl();
                    break;
               }
               if(a == 2)
               {
                   showbldtl();
                   break;
               }
            if(a == 3)
            {
                 printf("OK, Now Were You Want to go :-)\n");
                 option();
                 break;
            }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }
  return 0;
}

int showbtsdtl()
{
        system("cls");
        printf("\n");
        printf("\n");

        printf("[Here is the Score of First Team]\n\n");
        FILE *sbtsdtl;
        sbtsdtl=fopen("BatsmanDetails.txt","r");
        printf("Player Name\t\tRun he made\t\tBall he faced\t\tFour he made\t\tSix he made\t\n");
    while(fread(&g, sizeof(g), 1, sbtsdtl))
  {
        printf("%s\t\t\t%d\t\t\t\t%d\t\t%d\t\t\t%d\t\t\n ",g.btsnm,g.btsrn,g.btsbf,g.btsfr,g.btssx);
  }
        fclose(sbtsdtl);

        printf("\n");

        printf("[And This is the Score of Secound Team]\n\n");

        FILE *osbtsdtl;
        osbtsdtl=fopen("OBatsmanDetails.txt","r");
        printf("Player Name\t\tRun he made\t\tBall he faced\t\tFour he made\t\tSix he made\t\n");
    while(fread(&g, sizeof(g), 1, osbtsdtl))
  {
        printf("%s\t\t\t%d\t\t\t\t%d\t\t%d\t\t\t%d\t\t\n ",g.obtsnm,g.obtsrn,g.obtsbf,g.obtsfr,g.obtssx);
  }

        fclose(osbtsdtl);
        printf("\n\nPress [ 1 ] to See Bowler's Data\n or \nPress [ 2 ] to Return to Main menu\n");
            while(scanf("%d",&a))
        {
      if(a == 1 || a == 2)
        {
            if(a == 1)
               {
                  showbldtl();
               }

            if(a == 2)
               {
                 printf("OK, Now Were You Want to go :-)\n");
                 option();
                 break;
               }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }
return 0;
}

int showbldtl()
{
        system("cls");
        printf("\n");
        printf("\n");
        printf("[Here is the Bowling Details of First Team]\n\n");
        FILE *sblsdtl;
        sblsdtl=fopen("BowlersDetails.txt","r");
        printf("Bowler Name\t\tOver he do\t\tRun He Give\t\tWicket he take\t\tHis best overs\t\n");
    while(fread(&g, sizeof(g), 1, sblsdtl))
  {
        printf("%s\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\n ",g.blsnm,g.blsovr,g.blsrg,g.blswtk,g.blsmdnovr);
  }

        fclose(sblsdtl);

         printf("\n");
        printf("[And Here is the Secound Team's Bowling Details.]\n\n");


        FILE *osblsdtl;
        osblsdtl=fopen("OBowlersDetails.txt","r");
        printf("Bowler Name\t\tOver he do\t\tRun he give\t\tWicket he take\t\tHis best overs\t\n");
    while(fread(&g, sizeof(g), 1, osblsdtl))
  {
        printf("%s\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\n ",g.oblsnm,g.oblsovr,g.oblsrg,g.oblswtk,g.oblsmdnovr);
  }

        fclose(osblsdtl);



                printf("\n\n\tPress [ 1 ] for Return to Main menu\n\tor \n\tPress [ 2 ] for Exit\n");
            while(scanf("%d",&a))
        {
      if(a == 1 || a == 2)
        {
            if(a == 1)
               {
                printf("OK, Now Were You Want to go :-)\n");
                 option();
               }

            if(a == 2)
               {
                printf("\nOk, See You Again :-)\n");
                printf("\n\n");
                exit(EXIT_SUCCESS);

                 break;
               }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }
}

int sumofrun()
{
    int k=0;
        FILE *smrn;
        smrn=fopen("BatsmanDetails.txt","r");

    while(fread(&g,sizeof(g),1,smrn))
    {
        k=k+g.btsrn;
    }
        printf("%d\t",k);
        fclose(smrn);
        return 0;
}

int osumofrun()
{
    int k=0;
        FILE *osmrn;
        osmrn=fopen("OBatsmanDetails.txt","r");

    while(fread(&g,sizeof(g),1,osmrn))
    {
        k=k+g.obtsrn;
    }
        printf("%d\t",k);
        fclose(osmrn);
        return 0;
}

int sumofwkt()
{
    int j=0;
        FILE *smwtk;
        smwtk=fopen("BowlersDetails.txt","r");

    while(fread(&g,sizeof(g),1,smwtk))
    {
        j=j+g.blswtk;
    }
        printf("%d\t",j);
        fclose(smwtk);
        return 0;
}

int osumofwkt()
{
    int j=0;
        FILE *osmwtk;
        osmwtk=fopen("OBowlersDetails.txt","r");

    while(fread(&g,sizeof(g),1,osmwtk))
    {
        j=j+g.oblswtk;
    }
        printf("%d\t",j);
        fclose(osmwtk);
        return 0;
}

int highestrun()
{
    int max=0;
        FILE *hr;
        hr=fopen("BatsmanDetails.txt","r");

    while(fread(&g,sizeof(g),1,hr))
    {
        if (g.btsrn>max)
            {
                max=g.btsrn;
            }
    }
    fclose(hr);

    FILE *hr2;
    hr2=fopen("BatsmanDetails.txt","r");
    while(fread(&g,sizeof(g),1,hr2))
        if(g.btsrn==max)
    {
        printf("Highest Run was making by %s, He made %d Run\n",g.btsnm,g.btsrn);
    }

        fclose(hr2);
        return 0;
}

int ohighestrun()
{
    int max=0;
        FILE *ohr;
        ohr=fopen("OBatsmanDetails.txt","r");

    while(fread(&g,sizeof(g),1,ohr))
    {
        if (g.obtsrn>max)
            {
                max=g.obtsrn;
            }
    }
    fclose(ohr);

    FILE *ohr2;
    ohr2=fopen("OBatsmanDetails.txt","r");
    while(fread(&g,sizeof(g),1,ohr2))
        if(g.obtsrn==max)
    {
        printf("Highest Run was making by %s, He made %d Run\n",g.obtsnm,g.obtsrn);
    }

        fclose(ohr2);
        return 0;
}

int avaragerunrate()
{
    double avrg;
    int ttlrn = 0;
    int c = 0;
    FILE *avrgrn;
    avrgrn=fopen("BatsmanDetails.txt","r");
    while(fread(&g,sizeof(g),1,avrgrn))

        {
            ttlrn=ttlrn+g.btsrn;
            c++;
        }
        avrg= ttlrn/c;
        printf("%.0lf]",avrg);
        fclose(avrgrn);
        return 0;
}

int oavaragerunrate()
{
    double avrg;
    int ttlrn = 0;
    int c = 0;
    FILE *oavrgrn;
    oavrgrn=fopen("OBatsmanDetails.txt","r");
    while(fread(&g,sizeof(g),1,oavrgrn))

        {
            ttlrn=ttlrn+g.obtsrn;
            c++;
        }
        avrg= ttlrn/c;
        printf("%.0lf]",avrg);
        fclose(oavrgrn);
        return 0;
}

int searchmain()
{
    int snf=0;
    FILE *fsnf;
    fsnf=fopen("GameDetails.txt","r");
   while(fread(&g,sizeof(g),1,fsnf))
    {
      snf=snf+1;
    }
    fclose(fsnf);
    search(snf);
    return 0;
}

int search(int snf)
{
        system("cls");
        int snfis=0;
        FILE *srchgmdtls;
        srchgmdtls=fopen("GameDetails.txt","r");
    char nm[20];
        printf("Which file you want to see?\n");
        Sleep(100);
        printf("Write the file Name Here:-\n");
        scanf("%s",nm);
    while(fread(&g,sizeof(g),1,srchgmdtls))
    {
         if(strcmp(nm,g.competition)==0)
         {
            printf("\n[This is what You Search]\n\n[Match Type : %s]\n[Venue : %s]\n[1st Team: %s]\n[2nd Team : %s]\n[Toss Won %s]\n[Selected to : %s]\n[Innings in this match : %d]\n %s\n",g.competition,g.venue,g.matchbetween,g.versus,g.tosswonby,g.electedto,g.inningsof,g.date);
            break;
         }
         snfis = snfis+1;

         if(snfis == snf)
         {
             printf("Data Not Found");
         }

    }
        fclose(srchgmdtls);



    printf("\n\nPress '1' and 'Enter' for show Player Details \n\nPress '2' for Main Menu.\n");

  while(scanf("%d",&a))
  {
      if(a == 1)
        {
                srchplrdtls();
                break;
        }
      if(a == 2)
      {
          printf("Select Option Again :-)\n");
          option();
          break;
      }
      else
      {
        printf("\nInvaild Input! Press 1 or 2 Option");
        printf("\n\n");
      }
  }
}

int btsdtasrch()
{
    printf("Press [ 1 ] for Show 1st Bating Team's Batsman Data.\nPress [ 2 ] for Show 2nd Bating Team's Bats man Data.\n");
    scanf("%d",&a);

    if(a == 1)
    {
         system("cls");
          int flag = 0;
        FILE *srchbtsdtls;
        srchbtsdtls=fopen("BatsmanDetails.txt","r");
    char nm[20];
        printf("Which file you want to see?\n");
        Sleep(100);
        printf("Write the file Name Here:-\n");
        scanf("%s",&nm);
    while(fread(&g,sizeof(g),1,srchbtsdtls))
    {
         if(strcmp(nm,g.btsnm)==0)
         {
            printf(" \n [This is what You Search]\n\n [Name : %s]\n [Run : %d]\n [Ball Faced : %d]\n [Four : %d]\n [Six : %d]\n",g.btsnm,g.btsrn,g.btsbf,g.btsfr,g.btssx);
            flag = 1;
         }
    }
            if(flag == 1)
    {
            printf("Data Found");
    }
    else
    {
          printf("\n\nData Not Found\n\n");
    }
        fclose(srchbtsdtls);

        printf("\n\n\tPress [ 1 ] to return to main menu\n\tor \n\tPress [ 2 ] for Exit\n");
            while(scanf("%d",&a))
        {
      if(a == 1 || a == 2)
        {
            if(a == 1)
               {
                printf("OK, Now Were You Want to go :-)\n");
                 option();
               }

            if(a == 2)
               {
                printf("\nOk, See You Again :-)");
                printf("\n\n");
                exit(EXIT_SUCCESS);

                 break;
               }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }

    }

    if(a == 2)
    {
         system("cls");
         FILE *srchobtsdtls;
        srchobtsdtls=fopen("OBatsmanDetails.txt","r");
         char nm[20];
         int flag = 0;
        printf("Which file you want to see?\n");
        Sleep(1000);
        printf("Write the file Name Here:-\n");
        scanf("%s",nm);
    while(fread(&g,sizeof(g),1,srchobtsdtls))
    {
         if(strcmp(nm,g.obtsnm)==0)
            {
                printf("\n [This is what You Search]\n\n [Name : %s]\n [Run : %d]\n [Ball Faced : %d]\n [Four : %d]\n [Six : %d]\n",g.obtsnm,g.obtsrn,g.obtsbf,g.obtsfr,g.obtssx);
                flag = 1;
            }
    }
        if(flag == 0)
        {
            printf("\n\nData Not Found\n\n");
        }
        fclose(srchobtsdtls);

        printf("\n\n\tPress [ 1 ] to return to main menu\n\tor \n\tPress [ 2 ] for Exit.\n");
            while(scanf("%d",&a))
        {
      if(a == 1 || a == 2)
        {
            if(a == 1)
               {
                printf("OK, Now Were You Want to go :-)\n");
                 option();
               }

            if(a == 2)
               {
                printf("\nOk, See You Again :-)");
                printf("\n\n");
                exit(EXIT_SUCCESS);

                 break;
               }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }
    }
return 0;
}

int blsdtasrch()

{
    printf("Press [ 1 ] for Show 1st Bowling Team's Bowler's Data.\nPress [ 2 ] for Show 2nd Bowling Team's Bowler's Data.\n");
    scanf("%d",&a);

    if(a == 1)
    {
        system("cls");
        FILE *srchblsdtls;
        srchblsdtls=fopen("BowlersDetails.txt","r");
        char nm[20];
        int flag = 0;
        printf("Which file you want to see?\n");
        Sleep(100);
        printf("Write the file Name Here:-\n");
        scanf("%s",nm);
    while(fread(&g,sizeof(g),1,srchblsdtls))
    {
         if(strcmp(nm,g.blsnm)==0)
            {
            printf("\n [Name : %s]\n [Over : %d]\n [Run Given : %d]\n [Wicket Taken : %d]\n [Maiden Over : %d]\n", g.blsnm,g.blsovr,g.blsrg,g.blswtk,g.blsmdnovr);
            flag = 1;
            }
    }
    if(flag == 0)
        {
            printf("\n\nData Not Found\n\n");
        }
        fclose(srchblsdtls);
        printf("\n\n\tPress [ 1 ] to return to main menu\n\tor \n\tPress [ 2 ] for Exit\n");
            while(scanf("%d",&a))
        {
      if(a == 1 || a == 2)
        {
            if(a == 1)
               {
                printf("OK, Now Were You Want to go :-)\n");
                 option();
               }

            if(a == 2)
               {
                printf("\nOk, See You Again :-)");
                printf("\n\n");
                exit(EXIT_SUCCESS);

                 break;
               }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }
    }
     if(a == 2)
     {
        system("cls");
        FILE *srchoblsdtls;
        srchoblsdtls=fopen("OBowlersDetails.txt","r");
    char nm[20];
    int flag = 0;
        printf("Which file you want to see?\n");
        Sleep(1000);
        printf("Write the file Name Here:-\n");
        scanf("%s",nm);
    while(fread(&g,sizeof(g),1,srchoblsdtls))
    {
         if(strcmp(nm,g.oblsnm)==0)
         {
            printf("\n [Name : %s]\n [Over : %d]\n [Run Given : %d]\n [Wicket Taken : %d]\n [Maiden Over : %d]\n", g.oblsnm,g.oblsovr,g.oblsrg,g.oblswtk,g.oblsmdnovr);
            flag = 1;
         }
    }
    if(flag == 0)
        {
            printf("\n\nData Not Found\n\n");
        }
        fclose(srchoblsdtls);
        printf("\n\n\tPress [ 1 ] to return to main menu\n\tor \n\tPress [ 2 ] for Exit\n");
            while(scanf("%d",&a))
        {
      if(a == 1 || a == 2)
        {
            if(a == 1)
               {
                printf("OK, Now Were You Want to go :-)\n");
                 option();
               }

            if(a == 2)
               {
                printf("\nOk, See You Again :-)");
                printf("\n\n");
                exit(EXIT_SUCCESS);

                 break;
               }
        }
      else
      {
         printf("INVALID OPTION. Please Press '1' or '2' And 'Enter' for Options\n");
      }
  }

     }
return 0;
}

int srchplrdtls()
{

    printf("\nPress [ 1 ] for Search Batsman Data\nPress [ 2 ] for search a Bowler Data\n\n");
    printf("==>");
    while(scanf("%d",&a))
    {
    if(a == 1)
    {
        btsdtasrch();
        break;
    }
    if(a == 2)
    {
       blsdtasrch();
        break;
    }
        else
      {
        printf("\nInvaild Input! Press 1 or 2 and Enter Please.");
        printf("\n\n");
        srchplrdtls();
        fflush(stdin);
      }
    }
}

int fordelete()
{
    system("cls");
    FILE *dlt,*dlt1;
    struct gamedetails g , g1;
    int found=0;
    char nm[30];
    dlt=fopen("GameDetails.txt","r");
    dlt1=fopen("Filefordatadelete.txt","w");
    fflush(stdin);
    printf("\nENTER GAME NAME WANT TO DELETE:\n");
    gets(nm);
    while( fread(&g1, sizeof(g1), 1, dlt))
    {
        if(feof(dlt))
        {
            break;
        }
        if(strcmp(nm,g1.competition)==0)
        {
            found=1;
            printf("\nDone!!\n");
        }
        else
        {
            fwrite(&g1, sizeof(g1), 1, dlt1);
        }
    }
    fclose(dlt);
    fclose(dlt1);
    if(found==0)
    {
        printf("\nSorry not Found\n\n");
    }
    else
    {
        dlt=fopen("GameDetails.txt","w");
        dlt1=fopen("Filefordatadelete.txt","r");
        while(1)
        {
            fread(&g1,sizeof(g1), 1, dlt1);
            if(feof(dlt1))
            {
                break;
            }
            fwrite(&g1, sizeof(g1), 1, dlt);
        }
    }
    fclose(dlt);
    fclose(dlt1);
    printf("\nPress [ 1 ] for Delete One More Game Details.\nPress [ 2 ] for Return to Main Menu.\n");
  while(scanf("%d",&a))
  {
      if(a == 1)
      {
          fordelete();
          break;
      }
      if(a == 2)
      {
           homepage();
           break;
      }
      else
      {
          printf("Invalid Keyword!! Choose 1 or 2 for Option.\n");
      }
  }
}

int foredit()
{
 FILE *edit,*edit1;
    struct gamedetails g , g2;
    int found=0;
    char nm[30];
    edit=fopen("BatsmanDetails.txt","r");
    edit1=fopen("Filefordataedit.txt","w");
    fflush(stdin);
    printf("ENTER PLAYER NAME TO EDIT HIS DATA:\n");
    gets(nm);
    while( fread(&g2, sizeof(g2), 1, edit))
    {
        if(feof(edit))
        {
            break;
        }
        if(strcmp(nm,g2.btsnm)==0)
        {
            found=1;
            printf("\nPlease Enter New Data for 1st Bating Team's Player\n");

            printf("Player Name(First Bating):-\n");
            gets(g3.btsnm);
            printf("Run made by him(First Bating):-\n");
            scanf("%d",&g3.btsrn);
            printf("Ball He Faceed(First Bating):-\n");
            scanf("%d",&g3.btsbf);
            printf("Four He Made(First Bating):-\n");
            scanf("%d",&g3.btsfr);
            printf("SIX He Made(First Bating):-\n");
            scanf("%d",&g3.btssx);

            strcpy(g2.btsnm,g3.btsnm);
            g2.btsrn=g3.btsrn;
            g2.btsbf=g3.btsbf;
            g2.btsfr=g3.btsfr;
            g2.btssx=g3.btssx;

            printf("\nEdit Successfully!!\n");

             fwrite(&g2, sizeof(g2), 1, edit1);

        }
        else
        {
            fwrite(&g2, sizeof(g2), 1, edit1);
        }
    }
    fclose(edit);
    fclose(edit1);
    if(found==0)
    {
        printf("\nSorry not Found\n\n");
    }
    else
    {
        edit=fopen("BatsmanDetails.txt","w");
        edit1=fopen("Filefordataedit.txt","r");
        while(1)
        {
            fread(&g2,sizeof(g2), 1, edit1);
            if(feof(edit1))
            {
                break;
            }
            fwrite(&g2, sizeof(g2), 1, edit);
        }
    }
    fclose(edit);
    fclose(edit1);
    printf("\nPress [ 1 ] and 'Enter' For Edit One more Player Data.\nPress [ 2 ] and 'Enter for Main Menu.\n");
    printf("=>");
    while(scanf("%d",&a))
    {
        if(a == 1)
        {
            foredit();
            break;
        }

        if(a == 2)
        {
             homepage();
             break;
        }
        else
        {
            printf("\nInvalid Keyword!!\n\nPlease Choose 1 or 2 ad Enter for Option.\n");
        }
    }
    return 0;
    }

int foredit1()
{
 FILE *edit2,*edit4;
    struct gamedetails g , g4;
    int found=0;
    char nm[30];
    edit2=fopen("OBatsmanDetails.txt","r");
    edit4=fopen("Filefordataedit.txt","w");
    fflush(stdin);
    printf("ENTER PLAYER NAME TO EDIT HIS DATA:\n");
    gets(nm);
    while( fread(&g4, sizeof(g4), 1, edit2))
    {
        if(feof(edit2))
        {
            break;
        }
        if(strcmp(nm,g4.obtsnm)==0)
        {
            found=1;
            printf("\nPlease Enter New Data for 2nd Bating Team's Player\n");

            printf("Player Name(Secound Bating):-\n");
            gets(g3.obtsnm);
            printf("Run made by him(Secound Bating):-\n");
            scanf("%d",&g3.obtsrn);
            printf("Ball He Faceed(Secound Bating):-\n");
            scanf("%d",&g3.obtsbf);
            printf("Four He Made(Secound Bating):-\n");
            scanf("%d",&g3.obtsfr);
            printf("SIX He Made(Secound Bating):-\n");
            scanf("%d",&g3.obtssx);

            strcpy(g4.obtsnm,g3.obtsnm);
            g4.obtsrn=g3.obtsrn;
            g4.obtsbf=g3.obtsbf;
            g4.obtsfr=g3.obtsfr;
            g4.obtssx=g3.obtssx;

            printf("\nEdit Successfully!!\n");

             fwrite(&g4, sizeof(g4), 1, edit4);

        }
        else
        {
            fwrite(&g4, sizeof(g4), 1, edit4);
        }
    }
    fclose(edit2);
    fclose(edit4);
    if(found==0)
    {
        printf("\nSorry not Found\n\n");
    }
    else
    {
        edit2=fopen("OBatsmanDetails.txt","w");
        edit4=fopen("Filefordataedit.txt","r");
        while(1)
        {
            fread(&g4,sizeof(g4), 1, edit4);
            if(feof(edit4))
            {
                break;
            }
            fwrite(&g4, sizeof(g4), 1, edit2);
        }
    }
    fclose(edit2);
    fclose(edit4);
    printf("\nPress [ 1 ] and 'Enter' For Edit One more Player Data.\nPress [ 2 ] and 'Enter for Main Menu.\n");
    printf("=>");
    while(scanf("%d",&a))
    {
        if(a == 1)
        {
            foredit1();
            break;
        }

        if(a == 2)
        {
             homepage();
             break;
        }
        else
        {
            printf("Invalid Keyword!!\n\nPlease Choose 1 or 2 ad Enter for Option.\n");
        }
    }
    return 0;
    }

int foredit2()
{
 FILE *edit5,*edit6;
    struct gamedetails g , g5;
    int found=0;
    char nm[30];
    edit5=fopen("BowlersDetails.txt","r");
    edit6=fopen("Filefordataedit.txt","w");
    fflush(stdin);

    printf("ENTER PLAYER NAME TO EDIT HIS DATA:\n");
    gets(nm);
    while( fread(&g5, sizeof(g5), 1, edit5))
    {
        if(feof(edit5))
        {
            break;
        }
        if(strcmp(nm,g5.blsnm)==0)
        {
            found=1;
            printf("\nPlease Enter New Data for 1st Bowling Team's Player\n");

        printf("Bowler Name(First Bowling):-\n");
        gets(g3.blsnm);
        printf("Total over he do(First Bowling):-\n");
        scanf("%d",&g3.blsovr);
        printf("Total Run he Given(First Bowling):-\n");
        scanf("%d",&g3.blsrg);
        printf("Wicket he take(First Bowling):-\n");
        scanf("%d",&g3.blswtk);
        printf("Maiden over(First Bowling):-\n");
        scanf("%d",&g3.blsmdnovr);

            strcpy(g5.blsnm,g3.blsnm);
            g5.blsovr=g3.blsovr;
            g5.blsrg=g3.blsrg;
            g5.blswtk=g3.blswtk;
            g5.blsmdnovr=g3.blsmdnovr;

            printf("\nEdit Successfully!!\n");

             fwrite(&g5, sizeof(g5), 1, edit6);

        }
        else
        {
            fwrite(&g5, sizeof(g5), 1, edit6);
        }
    }
    fclose(edit5);
    fclose(edit6);
    if(found==0)
    {
        printf("\nSorry not Found\n\n");
    }
    else
    {
        edit5=fopen("BowlersDetails.txt","w");
        edit6=fopen("Filefordataedit.txt","r");
        while(1)
        {
            fread(&g5,sizeof(g5), 1, edit6);
            if(feof(edit6))
            {
                break;
            }
            fwrite(&g5, sizeof(g5), 1, edit5);
        }
    }
    fclose(edit5);
    fclose(edit6);
    printf("\nPress [ 1 ] and 'Enter' For Edit One more Player Data.\nPress [ 2 ] and 'Enter for Main Menu.\n");
    printf("=>");
    while(scanf("%d",&a))
    {
        if(a == 1)
        {
            foredit2();
            break;
        }

        if(a == 2)
        {
             homepage();
             break;
        }
        else
        {
            printf("Invalid Keyword!!\n\nPlease Choose 1 or 2 ad Enter for Option.\n");
        }
    }
    return 0;
}

int foredit3()
{
 FILE *edit7,*edit8;
    struct gamedetails g , g6;
    int found=0;
    char nm[30];
    edit7=fopen("OBowlersDetails.txt","r");
    edit8=fopen("Filefordataedit.txt","w");
    fflush(stdin);
    printf("ENTER PLAYER NAME TO EDIT HIS DATA:\n");
    gets(nm);
    while( fread(&g6, sizeof(g6), 1, edit7))
    {
        if(feof(edit7))
        {
            break;
        }
        if(strcmp(nm,g6.oblsnm)==0)
        {
            found=1;
            printf("\nPlease Enter New Data for 2nd Bowling Team's Player\n");

        printf("Bowler Name(Secound Bowling):-\n");
        gets(g3.oblsnm);
        printf("Total over he do(Secound Bowling):-\n");
        scanf("%d",&g3.oblsovr);
        printf("Total Run he Given(Secound Bowling):-\n");
        scanf("%d",&g3.oblsrg);
        printf("Wicket he take(Secound Bowling):-\n");
        scanf("%d",&g3.oblswtk);
        printf("Maiden over(Secound Bowling):-\n");
        scanf("%d",&g3.oblsmdnovr);

            strcpy(g6.oblsnm,g3.oblsnm);
            g6.oblsovr=g3.oblsovr;
            g6.oblsrg=g3.oblsrg;
            g6.oblswtk=g3.oblswtk;
            g6.oblsmdnovr=g3.oblsmdnovr;

            printf("\nEdit Successfully!!\n");

             fwrite(&g6, sizeof(g6), 1, edit8);

        }
        else
        {
            fwrite(&g6, sizeof(g6), 1, edit8);
        }
    }
    fclose(edit7);
    fclose(edit8);
    if(found==0)
    {
        printf("\nSorry not Found\n\n");
    }
    else
    {
        edit7=fopen("OBowlersDetails.txt","w");
        edit8=fopen("Filefordataedit.txt","r");
        while(1)
        {
            fread(&g6,sizeof(g6), 1, edit8);
            if(feof(edit8))
            {
                break;
            }
            fwrite(&g6, sizeof(g6), 1, edit7);
        }
    }
    fclose(edit7);
    fclose(edit8);
    printf("\nPress [ 1 ] and 'Enter' For Edit One more Player Data.\nPress [ 2 ] and 'Enter for Main Menu.\n");
    printf("=>");
    while(scanf("%d",&a))
    {
        if(a == 1)
        {
            foredit3();
            break;
        }

        if(a == 2)
        {
             homepage();
             break;
        }
        else
        {
            printf("Invalid Keyword!!\n\nPlease Choose 1 or 2 ad Enter for Option.\n");
        }
    }
    return 0;
    }

#include<iostream>
#include<conio.h>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char Turn='X';
int row,col;
bool draw;
void Displayboard();
void Playerturn();
bool GameOver();
void header();
int main()
{
system("cls");
header();
cout<<"\n\n\n\t\t\t\t\t\tWELCOME to the Game.";
cout<<"\n\n\t\t\t\t\t--> 1. START THE GAME";
cout<<"\n\t\t\t\t\t--> 2. VIEW RULES OF GAME";
cout<<"\n\t\t\t\t\t--> 3. EXIT";
char start=getch();
if (start=='2')
{
    cout<<"\n\t\t\t\tTHESE ARE THE RULES."<<endl;
    getch();
    main();
}
else if (start=='3')
{
    return 0;
}
else if(start=='1')
{while(GameOver())    
{

Displayboard();
Playerturn();
GameOver();
}
if (Turn =='O' && draw==false)
{
    cout<<"\n\t\t\t Hooray! Player 1 (X) won the Game.";
    getch();
}
else if (Turn =='X' && draw==false)
{
    cout<<"\n\t\t\t Hooray! Player 2 (O) won the Game.";
    getch();
}
else 
{
    cout<<"\n\t\t\t GAME DRAW!!!";
}}
else 
{
    cout<<"\n\t\t\t\t INVALID CHOICE ";
    getch();
    main();
}
}
void Displayboard()
{
 system("cls"); 
 header();  
cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   "<<board[0][0]<<"  |  "<<board[0][1]<<"   | "<<board[0][2]<<"   "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t  ____|______|_____"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t   "<<board[1][0]<<"  |  "<<board[1][1]<<"   | "<<board[1][2]<<"   "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t  ____|______|_____"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t   "<<board[2][0]<<"  |  "<<board[2][1]<<"   | "<<board[2][2]<<"   "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t      |      |    "<<endl;
   
}
void Playerturn()
{
    if(Turn=='X')
    cout<<"\n\t\t\tPlayer 1 turn (X):" ;
    if(Turn=='O')
    cout<<"\n\t\t\tPlayer 2 turn (O):" ;
    char choice1=getch();
    switch (choice1)
    {
    case '1':
        row=0;col=0;
        break;
    case '2':
        row=0;col=1;
        break;
    case '3':
        row=0;col=2;
        break;
    case '4':
        row=1;col=0;
        break;
    case '5':
        row=1;col=1;
        break;
    case '6':
        row=1;col=2;
        break;
    case '7':
        row=2;col=0;
        break;
    case '8':
        row=2;col=1;
        break;
    case '9':
        row=2;col=2;
        break;    
    default:
        cout<<"Invalid choice.";
        Playerturn();
        break;
    }
    if(Turn=='X'&& board[row][col]!='X'&& board[row][col]!='O')
    {
        board[row][col]='X';
        Turn='O';        
    }
    else if(Turn=='O'&& board[row][col]!='X'&& board[row][col]!='O')
    {
        board[row][col]='O';
        Turn='X';
    }
    else if (board[row][col]=='X'|| board[row][col]=='O')
    {
        cout<<"\n\t\t\tAlready Filled !";
        Playerturn();
    }
    Displayboard();
}
bool GameOver()
{
    for (int i = 0; i < 3; i++)
    {
        if(board[i][0]==board[i][1] and board[i][0]==board[i][2] || board[0][i]==board[1][i] and board[0][i]==board[2][i] || board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board[0][2]==board[2][0])
        return false;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j]!='X' and board[i][j]!='O')
            {
                return true;
            }
            
        }
        
    }
    draw =true;
    return false;
    
}
void header()
{
cout<<"\n\n\t\t\t\t\t\t__________________ _______   _________ _______   _______   _________ _______   _______. "<<endl;
cout<<"\t\t\t\t\t\t\\__   __/\\__   __/(  ____ \\  \\__   __/(  ___  ) (  ____ \\  \\__   __/(  ____ ) |_______|"<<endl;
cout<<"\t\t\t\t\t\t   ) (      ) (   | (    \\/     ) (   | (   ) | | (    \\/     ) (   | (   ) | | (    "<<endl;
cout<<"\t\t\t\t\t\t   | |      | |   | |           | |   | (___) | | |           | |   | |   | | | (__    "<<endl;
cout<<"\t\t\t\t\t\t   | |      | |   | |           | |   |  ___  | | |           | |   | |   | | |  __)   "<<endl;
cout<<"\t\t\t\t\t\t   | |      | |   | |           | |   | (   ) | | |           | |   | |   | | | (      "<<endl;
cout<<"\t\t\t\t\t\t   | |   ___) (___| (____/\\     | |   | )   ( | | (____/\\     | |   | (___) | | (____/\\"<<endl;
cout<<"\t\t\t\t\t\t   )_(   \\_______/(_______/     )_(   |/     \\| (_______/     )_(   (_______) (_______/"<<endl;
                                                                                    
}

#include<bits/stdc++.h>

using namespace std;

char  ar[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};


char turn = '1';
bool draw = false;
int row,col,ch;

bool running();
void display();
void myturn();

bool running()
{
  
    for(int i=0; i<3; i++)
    {
	    if(ar[i][0] == ar[i][1] && ar[i][0] == ar[i][2])          //row wise winning
        return false;
    
        if( ar[0][i] == ar[1][i] && ar[0][i] == ar[2][i])        //column wise winning
        return false;
    }  
    if(ar[0][0] == ar[1][1] && ar[0][0] == ar[2][2] )           //diagonal 1 winning
    return false;
    
    if( ar[0][2] == ar[1][1] && ar[0][2] == ar[2][0])           //diagonal 2 winning
    return false;

    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(ar[i][j] != 'X' && ar[i][j] != 'O')
    return true;

    draw = true;
    return false;
}



void myturn()
{
    if(turn == '1')
	{
       cout<<"\t\tPLAYER1 ENTER YOUR CHOICE \n";
    }
    if(turn == '2')
	{
       cout<<"\t\tPLAYER2 ENTER YOUR CHOICE \n";
    }
   cin>> ch;

    if(ch==1)
    {
    	row=0;
		col=0;
	}
    else if (ch==2)
    {
    	row=0;
		col=1;
	}
	else if(ch==3)
	{
		row=0;
		col=2;
	}
	else if(ch==4)
	{
		row=1;
		col=0;
	}
	else if(ch==5)
	{
		row=1;
		col=1;
	}
	else if(ch==6)
	{
		row=1;
		col=2;
	}
	else if(ch==7)
	{
		row=2;
		col=0;
	}
	else if(ch==8)
	{
		row=2;
		col=1;
	}
	else if(ch==9)
	{
		row=2;
		col=2;
	}
	else
	{
		cout<<"\t\tITS AN INVALID CHOICE .....PLEASE TRY AGAIN";
	}

    

    if(turn == '1' && ar[row][col] != 'X' && ar[row][col] != 'O')
	{
      
        ar[row][col] = 'X';
        turn = '2';
    }
	else if(turn == '2' && ar[row][col] != 'X' && ar[row][col] != 'O')
	{
      
        ar[row][col] = 'O';
        turn = '1';
    }
	else 
	{
       
        cout<<"\t\tALREADY FILLED\n";
        myturn();
    }
   
    
}


void display()
{

    
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<ar[0][0]<<"  | "<<ar[0][1]<<"   |  "<<ar[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<ar[1][0]<<"  | "<<ar[1][1]<<"   |  "<<ar[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<ar[2][0]<<"  | "<<ar[2][1]<<"   |  "<<ar[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}



int main()
{
	cout<<"\n\n\t\tWELCOME TO THE GAME 'TIC TAC TOE'";
	cout<<"\n\t\tTHIS GAME IS TO BE PLAYED BETWEEN TWO PLAYERS \n";
	cout<<"\t\tFOR PLAYER 1 , 'X' IS THE SYMBOL \n";
	cout<<"\t\tFOR PLAYER 2 , 'O' IS THE SYMBOL \n";
	cout<<"\t\tHERE WE START WITH THE GAME, AND HERE YOU HAVE THE BLOCK \n";
	cout<<"\t\tBOTH THE PLAYERS HAVE TO CHOOSE THE BLOCK NUMBER FOR ASSIGNING THEIR SYMBOLS TO WIN \n";
	cout<<"\n \n";
    while(running()){
        display();
        myturn();
        running();
       
    }
    if(draw==false)
    {
	
               if(turn == '2' )
	            {
                     cout<<"\t\tCONGRATULATIONS!! PLAYER 1 WON THE GAME\n";
                }
               if(turn == '1')
            	{
                      cout<<"\t\tCONGRATULATIONS!! PLAYER2 WON THE GAME\n";
                }
    }
    
    
    else
   {
   
   
	cout<<"\t\tITS A DRAW ,CONGRATULATIONS TO BOTH THE PLAYERS \n";
   }
} 

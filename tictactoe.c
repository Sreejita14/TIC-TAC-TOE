#include <stdio.h>
#include <conio.h>

char box[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char p1[100],p2[100];
int game();
void board();

int main()
{
    int player = 1, i, choice;
    char mark;
   
    printf("\n Enter name of player1: ");
    scanf("%s",p1);
    printf("\n Enter name of player2: ");
    scanf("%s",p2);
    
    do
    {
        board();
        player = (player % 2) ? 1 : 2;
        if(player==1)
		printf("%s YOUR TURN\nFill the box by selecting any digit between 1 and 9: ",p1);
		else
		printf("%s YOUR TURN\nFill the box by selecting any digit between 1 and 9: ",p2);
		

        
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && box[1] == '1')
            box[1] = mark;
            
        else if (choice == 2 && box[2] == '2')
            box[2] = mark;
            
        else if (choice == 3 && box[3] == '3')
            box[3] = mark;
            
        else if (choice == 4 && box[4] == '4')
            box[4] = mark;
            
        else if (choice == 5 && box[5] == '5')
            box[5] = mark;
            
        else if (choice == 6 && box[6] == '6')
            box[6] = mark;
            
        else if (choice == 7 && box[7] == '7')
            box[7] = mark;
            
        else if (choice == 8 && box[8] == '8')
            box[8] = mark;
            
        else if (choice == 9 && box[9] == '9')
            box[9] = mark;
            
        else
        {
            printf("The box is already filled try a new box!");

            player--;
            getch();
        }
        i = game();

        player++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        {
        	if(player==2)
        	{
        		printf("\n\n CONGRATULATIONS!!! %s has won The Game\nHope you loved playing the game :)\n\n",p1);
        		getch();
			}
			else
			{
				printf("\n\n CONGRATULATIONS!!! %s has won The Game\nHope you loved playing the game :)\n\n",p2);
        		getch();
			}
		}
		else
		printf("\n\nOOPS!!! :( Game Draws!\n Better luck next time :)\n\n");
    getch();

    return 0;
}

/*********************************************
CHECKING THE WINNING CONDITIONS
FUNCTION TO RETURN GAME STATUS
1 ----->GAME IS OVER WITH RESULT
-1 ---->GAME IS IN PROGRESS
O ----->GAME IS OVER WITHOUT RESULT
 **********************************************/

int game()
{
    if (box[1] == box[2] && box[2] == box[3]) /***checking  row***/
        return 1;
        
    else if (box[4] == box[5] && box[5] == box[6])  /***checking  row***/
        return 1;
        
    else if (box[7] == box[8] && box[8] == box[9]) /***checking  row***/
        return 1;
        
    else if (box[1] == box[4] && box[4] == box[7]) /***checking  column***/
        return 1;
        
    else if (box[2] == box[5] && box[5] == box[8]) /***checking  column***/
        return 1;
        
    else if (box[3] == box[6] && box[6] == box[9]) /***checking  column***/
        return 1;
        
    else if (box[1] == box[5] && box[5] == box[9]) /***checking  diagonal***/
        return 1;
        
    else if (box[3] == box[5] && box[5] == box[7]) /***checking  diagonal***/
        return 1;
        
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] 
        != '7' && box[8] != '8' && box[9] != '9')

        return 0;
    else
        return  - 1;
}


/*******************************************************************
FUNCTION TO DRAW THE BOARD OF TIC TAC TOE WITH PLAYER'S NAME 
PLAYER 1 IS ASSIGNED 'X' AND PLAYER TWO IS ASSIGNED 'O'
 ********************************************************************/


void board()
{
    system("cls");
    
    printf("\n\n\tTic Tac Toe\n\n");
    printf(" %s(X)-----------%s(O)\n\n\n",p1,p2);

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

    printf("     |     |     \n\n");
}

/*******************************************************************
		-------xEND OF PROJECTx--------
 ********************************************************************/

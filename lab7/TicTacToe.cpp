/*

CSE201-F19 Tuesday Lab (depending on your lab day)

@file L6_Ex1.cpp

@author Akinyemi Adetunji 
@date November 12, 2019

DESCRIPTION: In a prewritten 2 player tic tac toe game, rewrite the program
to replace player 2 with a computer 


ALGORITHM:

when it's time for player 2 to make a move, a function (compMove) is called; this is 
where the computer "makes a move." In the function a vector is created containing
all posible moves. a position is randomly picked from the list. once a position
is picked the element at that position is removed, shortening the list and 
preventing the computer from making the same move again. The function return
the element that ws removed from vector and is gets passed as though it were 
the original player 2. 
 

*/

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;



char square[] = {'o','1','2','3','4','5','6','7','8','9'};

// addition
int movesArr[] = {1,2,3,4,5,6,7,8,9};
vector<int> moves; 



//initilize 2d vector
vector<vector<int> > m(16, vector<int>(3));

//winning moves
// int move[16][3] = 
// {{1,2,3}, {1,5,9}, {1,4,7},
// {2,5,8}, {3,2,1}, {3,5,7}, 
// {3,6,9}, {4,5,6}, {6,5,4}, 
// {7,4,1}, {7,5,3}, {7,8,9}, 
// {8,5,2}, {9,8,7}, {9,5,1}, 
// {9,6,3}};

//convert winning moves 2d array to 2d vector
// for (int i = 0; i < 16; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         m[i][j] = move[i][j]; 
//         //cout << m[i][j];  
//     }
//     //cout << endl; 
// }

void pop_vector(){
    for(unsigned int i = 0; i < 9; i++){
        moves.push_back(movesArr[i]); 
    }
}

int compMove(){
    int curr_move; 
    int r; 

    srand(time(0)); 
   
    r = (rand()%moves.size());
    curr_move = moves[r]; 

    moves.erase(moves.begin()+r);

    if (curr_move == 1 && square[1] == '1')

        return curr_move;
    else if (curr_move == 2 && square[2] == '2')

        return curr_move;
    else if (curr_move == 3 && square[3] == '3')

        return curr_move;
    else if (curr_move == 4 && square[4] == '4')

        return curr_move;
    else if (curr_move == 5 && square[5] == '5')

        return curr_move;
    else if (curr_move == 6 && square[6] == '6')

        return curr_move;
    else if (curr_move == 7 && square[7] == '7')

        return curr_move;
    else if (curr_move == 8 && square[8] == '8')

        return curr_move;
    else if (curr_move == 9 && square[9] == '9')

        return curr_move;
    else
    {
        //cout<<"Invalid move ";
        curr_move = compMove(); 
    }

    return curr_move; 
}


int checkwin();
void board();

int main()
{
	int player = 1,i,choice;

    pop_vector(); 

    char mark;
    do
    {
        board();

        if (player%2)
        	player = 1 ;
        else
        	player = 2 ;
        // player=(player%2)?1:2;

        //changes
        if (player == 1){
            cout << "Player " << player << ", enter a number:  ";
            cin >> choice;    
        } else {
            choice = compMove(); 
        }
        

        if (player == 1)
        	mark = 'X' ;
        else 
        	mark = 'O' ;
        // mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        // cout<<"==>\aPlayer "<<--player<<" win ";
        if(--player == 1){
            cout<<"==>\aPlayer 1"<<" win! ";
        } else{
            cout<<"==>\aComputer wins! ";
        }
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
********************************************************************/


void board()
{
    system("clear"); 
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Computer (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

/*******************************************************************
                END OF PROJECT
********************************************************************/
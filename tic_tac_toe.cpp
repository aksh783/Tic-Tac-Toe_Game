#include<iostream>
using namespace std;

char position[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int column;
char character = 'X';
string player1 = " ";
string player2 = " ";
bool tie = false;
int main();
void displayBoard()
{

    cout << "     |     |     " << endl;
    cout << "  " << position[0][0] << "  |  " << position[0][1] << "  |  " << position[0][2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << position[1][0] << "  |  " << position[1][1] << "  |  " << position[1][2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << position[2][0] << "  |  " << position[2][1] << "  |  " << position[2][2] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << "                 " << endl;   
}

void setValue()
{
    int digit;

    if (character == 'X')
    {
        cout << player1 << " Please enter a valid digit from 1 to 9(enter 0 to reset): ";
        cin >> digit;
    }

    if (character == 'O')
    {
        cout << player2 << " Please enter a valid digit from 1 to 9(enter 0 to reset): ";
        cin >> digit;
    }


    switch(digit){

        case 0:
           position[0][0]='1';
           position[0][1]='2';
           position[0][2]='3';
           position[1][0]='4';
           position[1][1]='5';
           position[1][2]='6';
           position[2][0]='7';
           position[2][1]='8';
           position[2][3]='9';
           character = 'X';
        
        displayBoard();
        cout << "The game has been reset" << endl;
        
        return;
        break;

        case 1:
           row = 0;
           column = 0;
           break;

        case 2:
           row = 0;
           column = 1;
           break;

        case 3:
           row = 0;
           column = 2;
           break;

        case 4:
           row = 1;
           column = 0;
           break;

        case 5:
           row = 1;
           column = 1;
           break;

        case 6:
           row = 1;
           column = 2;
           break;

        case 7:
           row = 2;
           column = 0;
           break;

        case 8:
           row = 2;
           column = 1;
           break;

        case 9:
           row = 2;
           column = 2;
           break;

        default:
           cout << "Invalid digit!" << endl;
           return;
    }
    

    if (character == 'X' && position[row][column] != 'X' && position[row][column] != 'O')
    {
        position[row][column] = 'X';
     character = 'O';
    }
    else if (character == 'O' && position[row][column] != 'X' && position[row][column] != 'O')
    {
        position[row][column] = 'O';
     character = 'X';   
    }
    
    else
    {
        cout << "That position is occupied" << endl;
        setValue();
    }

    displayBoard();
}

bool finish()
{
    for(int i=0 ; i<3 ; i++)
    {
        if(position[i][0] == position[i][1] && position[i][0] == position[i][2] || position[0][i] == position[1][i] && position[0][i] == position[2][i])
        return true;
    }

    if(position[0][0] == position[1][1] && position[1][1] == position[2][2] || position[0][2] == position[1][1] && position[1][1] == position[2][1])
    return true;
      
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(position[i][j] != 'X' && position[i][j] != 'O')
            return false;
        }
    }
     
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(position[i][j] == 'X' || position[i][j] == 'O')
            {
                tie = true;
                return true;
            }
            
        }
    }
        
    tie = true;
    return false;

}



int main()
{
    cout << " Enter the name of the first player : " << endl;
    getline(cin,player1);
    cout << "Enter the name of the second player : " << endl;
    getline(cin,player2);

    cout << player1 << " is player1 so he/she will play first(for X)" << endl;
    cout << player2 << " is player2 so he/she will play second(for O)" << endl;

    displayBoard();
    
    while(!finish())
    {
        setValue();
        finish();
    }

    if (character == 'X' && tie == false)
    {
        cout << player2 << " wins!" << endl;
    }
    else if (character == 'O' && tie == false)
    {
        cout << player1 << " wins!" << endl;
    }
    else
    {
        cout << "It's a draw!" << endl;
    }
}
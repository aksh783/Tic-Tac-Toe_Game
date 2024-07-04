#include<iostream>
using namespace std;
char grid3[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char grid4[4][4] = {{'1', '2', '3', '4'}, {'5', '6', '7', '8'}, {'9', 'a', 'b', 'c'}, {'d', 'e', 'f', 'g'}};
int row;
int column;
char character = 'X';
string player1 = " ";
string player2 = " ";
int gridSize;
bool tie = false;
void displayBoard3()
{   cout << "     |     |     " << endl << "  " << grid3[0][0] << "  |  " << grid3[0][1] << "  |  " << grid3[0][2] << "  " << endl << "_____|_____|_____" << endl << "     |     |     " << endl << "  " << grid3[1][0] << "  |  " << grid3[1][1] << "  |  " << grid3[1][2] << "  " << endl << "_____|_____|_____" << endl  << "     |     |     " << endl << "  " << grid3[2][0] << "  |  " << grid3[2][1] << "  |  " << grid3[2][2] << "  " << endl << "     |     |     " << endl;
}
void displayBoard4()
{   cout << "     |     |     |     " << endl << "  " << grid4[0][0] << "  |  " << grid4[0][1] << "  |  " << grid4[0][2] << "  |  " << grid4[0][3] << "  " << endl << "_____|_____|_____|_____" << endl << "     |     |     |     " << endl << "  " << grid4[1][0] << "  |  " << grid4[1][1] << "  |  " << grid4[1][2] << "  |  " << grid4[1][3] << "  " << endl<< "_____|_____|_____|_____" << endl<< "     |     |     |     " << endl<< "  " << grid4[2][0] << "  |  " << grid4[2][1] << "  |  " << grid4[2][2] << "  |  " << grid4[2][3] << "  " << endl<< "_____|_____|_____|_____" << endl<< "     |     |     |     " << endl<< "  " << grid4[3][0] << "  |  " << grid4[3][1] << "  |  " << grid4[3][2] << "  |  " << grid4[3][3] << "  " << endl<< "     |     |     |     " << endl;  
}
void setValue3()
{   char digit;
    if (character == 'X'){   
        cout << player1 << " Please enter a valid digit from 1 to 9(enter 0 to reset and x to exit): ";
        cin >> digit;
    }
    if (character == 'O'){
        cout << player2 << " Please enter a valid digit from 1 to 9(enter 0 to reset and x to exit): ";
        cin >> digit;
    }
    switch(digit){
        case '0':
           grid3[0][0]='1'; grid3[0][1]='2'; grid3[0][2]='3'; grid3[1][0]='4'; grid3[1][1]='5'; grid3[1][2]='6'; grid3[2][0]='7'; grid3[2][1]='8'; grid3[2][2]='9';
           character = 'X';
           displayBoard3();
           cout << "The game has been reset" << endl;
           return;
           break;
        case '1':
           row = 0;
           column = 0;
           break;
        case '2':
           row = 0;
           column = 1;
           break;
        case '3':
           row = 0;
           column = 2;
           break;
        case '4':
           row = 1;
           column = 0;
           break;
        case '5':
           row = 1;
           column = 1;
           break;
        case '6':
           row = 1;
           column = 2;
           break;
        case '7':
           row = 2;
           column = 0;
           break;
        case '8':
           row = 2;
           column = 1;
           break;
        case '9':
           row = 2;
           column = 2;
           break;
        case 'x':
           exit(0);
        default:
           cout << "Invalid digit!" << endl;
           return;
    }
    if (character == 'X' && grid3[row][column] != 'X' && grid3[row][column] != 'O'){
        grid3[row][column] = 'X';
     character = 'O';
    }
    else if (character == 'O' && grid3[row][column] != 'X' && grid3[row][column] != 'O'){
        grid3[row][column] = 'O';
     character = 'X';   
    }
    else{
        cout << "That position is occupied" << endl;
        setValue3();
    }
    displayBoard3();
}

void setValue4(){
    char digit;
    if (character == 'X'){
        cout << player1 << " Please enter a valid character(enter 0 to reset and x to exit): ";
        cin >> digit;
    }
    if (character == 'O'){
        cout << player2 << " Please enter a valid character(enter 0 to reset and x to exit): ";
        cin >> digit;
    }
    switch(digit){
        case '0':
           grid4[0][0]='1'; grid4[0][1]='2'; grid4[0][2]='3'; grid4[0][3]='4'; grid4[1][0]='5'; grid4[1][1]='6'; grid4[1][2]='7'; grid4[1][3]='8'; grid4[2][0]='9'; grid4[2][1]='a'; grid4[2][2]='b'; grid4[2][3]='c'; grid4[3][0]='d'; grid4[3][1]='e'; grid4[3][2]='f'; grid4[3][3]='g';
           character = 'X';
           displayBoard4();
           cout << "The game has been reset" << endl;
           return;
           break;
        case '1':
           row = 0;
           column = 0;
           break;
        case '2':
           row = 0;
           column = 1;
           break;
        case '3':
           row = 0;
           column = 2;
           break;
        case '4':
           row = 0;
           column = 3;
           break;
        case '5':
           row = 1;
           column = 0;
           break;
        case '6':
           row = 1;
           column = 1;
           break;
        case '7':
           row = 1;
           column = 2;
           break;
        case '8':
           row = 1;
           column = 3;
           break;
        case '9':
           row = 2;
           column = 0;
           break;
        case 'a':
           row = 2;
           column = 1;
           break;
        case 'b':
           row = 2;
           column = 2;
           break;
        case 'c':
           row = 2;
           column = 3;
           break;
        case 'd':
           row = 3;
           column = 0;
           break;
        case 'e':
           row = 3;
           column = 1;
           break;
        case 'f':
           row = 3;
           column = 2;
           break;
        case 'g':
           row = 3;
           column = 3;
           break;
        case 'x':
           exit(0);
        default:
           cout << "Invalid character!" << endl;
           return;
    } 
    if (character == 'X' && grid4[row][column] != 'X' && grid4[row][column] != 'O'){
        grid4[row][column] = 'X';
     character = 'O';
    }
    else if (character == 'O' && grid4[row][column] != 'X' && grid4[row][column] != 'O') {
        grid4[row][column] = 'O';
     character = 'X';   
    }
    else{
        cout << "That position is occupied" << endl;
        setValue4();
    }
    displayBoard4();
}
bool finish3(){
    for(int i=0 ; i<3 ; i++){
        if(grid3[i][0] == grid3[i][1] && grid3[i][0] == grid3[i][2] || grid3[0][i] == grid3[1][i] && grid3[0][i] == grid3[2][i])
        return true;
    }
    if(grid3[0][0] == grid3[1][1] && grid3[1][1] == grid3[2][2] || grid3[0][2] == grid3[1][1] && grid3[1][1] == grid3[2][0])
    return true;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            if(grid3[i][j] != 'X' && grid3[i][j] != 'O')
            return false;
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            if(grid3[i][j] == 'X' || grid3[i][j] == 'O'){
                tie = true;
                return true;
            }
        }
    }  
    tie = true;
    return false;
}

bool finish4(){
    for(int i=0 ; i<4 ; i++){
        if(grid4[i][0] == grid4[i][1] && grid4[i][0] == grid4[i][2] && grid4[i][0] == grid4[i][3] || grid4[0][i] == grid4[1][i] && grid4[0][i] == grid4[2][i] && grid4[0][i] == grid4[3][i])
        return true;
    }
    if(grid4[0][0] == grid4[1][1] && grid4[1][1] == grid4[2][2] && grid4[2][2] == grid4[3][3] || grid4[0][3] == grid4[1][2] && grid4[1][2] == grid4[2][1] && grid4[2][1] == grid4[3][0])
    return true;  
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(grid4[i][j] != 'X' && grid4[i][j] != 'O')
            return false;
        }
    }
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(grid4[i][j] == 'X' || grid4[i][j] == 'O'){
                tie = true;
                return true;
            }  
        }
    }
    tie = true;
    return false;
}
int main(){
    cout << "Enter size of grid: " << endl;
    cin >> gridSize;
    if(gridSize == 3){
    cout << "Enter the name of the first player : " ;
    cin.ignore();
    getline(cin,player1);
    cout << "Enter the name of the second player : " ;
    getline(cin,player2);
    cout << endl;
    cout << player1 << " is player1 so he/she will play first(for X)" << endl;
    cout << player2 << " is player2 so he/she will play second(for O)" << endl;
    displayBoard3();
    while(!finish3()){
        setValue3();
        finish3();
    }
    if (character == 'X' && tie == false)
        cout << player2 << " wins!" << endl;
    else if (character == 'O' && tie == false)
        cout << player1 << " wins!" << endl;
    else
        cout << "It's a draw!" << endl;
    }
    else if(gridSize == 4){
    cout << "Enter the name of the first player : " ;
    cin.ignore();
    getline(cin,player1);
    cout << "Enter the name of the second player : " ;
    getline(cin,player2);
    cout << endl;
    cout << player1 << " is player1 so he/she will play first(for X)" << endl;
    cout << player2 << " is player2 so he/she will play second(for O)" << endl;   
    displayBoard4();
    while(!finish4()){
        setValue4();
        finish4();
    }
    if (character == 'X' && tie == false)
        cout << player2 << " wins!" << endl;
    else if (character == 'O' && tie == false)
        cout << player1 << " wins!" << endl;
    else
        cout << "It's a draw!" << endl;
    } 
    else cout << "Invalid grid size!" << endl;
}

// CST 231, Project 1
// Jennifer Nguyen

#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
void main()
{
	cout << "Play Connect Four!" << endl;
	cout << "(Press 0 to end game.) " << endl;
	int arr[6][7], col, column;
	char endgame;
	for (int xx = 0; xx < 6; xx++) // Starting board at 0
	{
		for (int yy = 0; yy < 7; yy++)
			arr[xx][yy] = 0;
	}
	for (int i = 0;; i++)
	{
		for (int xx = 0; xx < 6; xx++) //Prints board
		{
			for (int yy = 0; yy < 7; yy++)
			{
				if (arr[xx][yy] == 0)
					cout << " . ";
				if (arr[xx][yy] == 1)
					cout << " X ";
				if (arr[xx][yy] == 2)
					cout << " O ";
			}
			cout << endl << endl;
		}
		cout << " 1  2  3  4  5  6  7 " << endl;

		// Checks for any wins
		if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2 && arr[0][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][1] == 2 && arr[0][2] == 2 && arr[0][3] == 2 && arr[0][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][2] == 2 && arr[0][3] == 2 && arr[0][4] == 2 && arr[0][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][3] == 2 && arr[0][4] == 2 && arr[0][5] == 2 && arr[0][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 2 && arr[1][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][1] == 2 && arr[1][2] == 2 && arr[1][3] == 2 && arr[1][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][2] == 2 && arr[1][3] == 2 && arr[1][4] == 2 && arr[1][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][3] == 2 && arr[1][4] == 2 && arr[1][5] == 2 && arr[1][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2 && arr[2][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][1] == 2 && arr[2][2] == 2 && arr[2][3] == 2 && arr[2][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][2] == 2 && arr[2][3] == 2 && arr[2][4] == 2 && arr[2][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][3] == 2 && arr[2][4] == 2 && arr[2][5] == 2 && arr[2][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[3][0] == 2 && arr[3][1] == 2 && arr[3][2] == 2 && arr[3][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[3][1] == 2 && arr[3][2] == 2 && arr[3][3] == 2 && arr[3][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[3][2] == 2 && arr[3][3] == 2 && arr[3][4] == 2 && arr[3][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[3][3] == 2 && arr[3][4] == 2 && arr[3][5] == 2 && arr[3][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[4][0] == 2 && arr[4][1] == 2 && arr[4][2] == 2 && arr[4][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[4][1] == 2 && arr[4][2] == 2 && arr[4][3] == 2 && arr[4][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[4][2] == 2 && arr[4][3] == 2 && arr[4][4] == 2 && arr[4][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[4][3] == 2 && arr[4][4] == 2 && arr[4][5] == 2 && arr[4][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[5][0] == 2 && arr[5][1] == 2 && arr[5][2] == 2 && arr[5][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[5][1] == 2 && arr[5][2] == 2 && arr[5][3] == 2 && arr[5][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[5][2] == 2 && arr[5][3] == 2 && arr[5][4] == 2 && arr[5][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[5][3] == 2 && arr[5][4] == 2 && arr[5][5] == 2 && arr[5][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2 && arr[3][0] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][0] == 2 && arr[2][0] == 2 && arr[3][0] == 2 && arr[4][0] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][0] == 2 && arr[3][0] == 2 && arr[4][0] == 2 && arr[5][0] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2 && arr[3][1] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][1] == 2 && arr[2][1] == 2 && arr[3][1] == 2 && arr[4][1] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][1] == 2 && arr[3][1] == 2 && arr[4][1] == 2 && arr[5][1] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2 && arr[3][2] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][2] == 2 && arr[2][2] == 2 && arr[3][2] == 2 && arr[4][2] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][2] == 2 && arr[3][2] == 2 && arr[4][2] == 2 && arr[5][2] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][3] == 2 && arr[1][3] == 2 && arr[2][3] == 2 && arr[3][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][3] == 2 && arr[2][3] == 2 && arr[3][3] == 2 && arr[4][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][3] == 2 && arr[3][3] == 2 && arr[4][3] == 2 && arr[5][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][4] == 2 && arr[1][4] == 2 && arr[2][4] == 2 && arr[3][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][4] == 2 && arr[2][4] == 2 && arr[3][4] == 2 && arr[4][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][4] == 2 && arr[3][4] == 2 && arr[4][4] == 2 && arr[5][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][5] == 2 && arr[1][5] == 2 && arr[2][5] == 2 && arr[3][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][5] == 2 && arr[2][5] == 2 && arr[3][5] == 2 && arr[4][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][5] == 2 && arr[3][5] == 2 && arr[4][5] == 2 && arr[5][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][6] == 2 && arr[1][6] == 2 && arr[2][6] == 2 && arr[3][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][6] == 2 && arr[2][6] == 2 && arr[3][6] == 2 && arr[4][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][6] == 2 && arr[3][6] == 2 && arr[4][6] == 2 && arr[5][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[3][0] == 2 && arr[2][1] == 2 && arr[1][2] == 2 && arr[0][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[4][0] == 2 && arr[3][1] == 2 && arr[2][2] == 2 && arr[1][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[3][1] == 2 && arr[2][2] == 2 && arr[1][3] == 2 && arr[0][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[5][0] == 2 && arr[4][1] == 2 && arr[3][2] == 2 && arr[2][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[4][1] == 2 && arr[3][2] == 2 && arr[2][3] == 2 && arr[1][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[3][2] == 2 && arr[2][3] == 2 && arr[1][4] == 2 && arr[0][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[5][1] == 2 && arr[4][2] == 2 && arr[3][3] == 2 && arr[2][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[4][2] == 2 && arr[3][3] == 2 && arr[2][4] == 2 && arr[1][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[3][3] == 2 && arr[2][4] == 2 && arr[1][5] == 2 && arr[0][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[5][2] == 2 && arr[4][3] == 2 && arr[3][4] == 2 && arr[2][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[4][3] == 2 && arr[3][4] == 2 && arr[2][5] == 2 && arr[1][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[5][3] == 2 && arr[4][4] == 2 && arr[3][5] == 2 && arr[2][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][0] == 2 && arr[3][1] == 2 && arr[4][2] == 2 && arr[5][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][0] == 2 && arr[2][1] == 2 && arr[3][2] == 2 && arr[4][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][1] == 2 && arr[3][2] == 2 && arr[4][3] == 2 && arr[5][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2 && arr[3][3] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][1] == 2 && arr[2][2] == 2 && arr[3][3] == 2 && arr[4][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][2] == 2 && arr[3][3] == 2 && arr[4][4] == 2 && arr[5][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][1] == 2 && arr[1][2] == 2 && arr[2][3] == 2 && arr[3][4] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][2] == 2 && arr[2][3] == 2 && arr[3][4] == 2 && arr[4][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[2][3] == 2 && arr[3][4] == 2 && arr[4][5] == 2 && arr[5][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][2] == 2 && arr[1][3] == 2 && arr[2][4] == 2 && arr[3][5] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[1][3] == 2 && arr[2][4] == 2 && arr[3][5] == 2 && arr[4][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}
		if (arr[0][3] == 2 && arr[1][4] == 2 && arr[2][5] == 2 && arr[3][6] == 2)
		{
			cout << "Player 2 wins!";
			break;
		}

		cout << "Player 1 (X) , enter a column (1-7): ";    // Player 1 inputs column
		cin >> col;
		if (col > 7) //If user mis-types
		{
			cout << "Error. Enter a column (1-7) again.";
			cin >> col;
		}
		if (col == 0) // If user types '0', user will be asked again
		{
			cout << "Are you sure you want to end the game? (y/n) "; // End game?
			cin >> endgame;
			if (endgame == 'y')
				break;
			if (endgame == 'n')
			{
				cout << "Continuing game. Player 1 (X) , enter a column (1-7): ";
				cin >> col;
			}
		}
		column = col - 1;
		for (int xx = 5; xx >= 0; xx--) // Changes 0 to 1 for player 1
		{
			if (arr[xx][column] == 0)
			{
				arr[xx][column] = 1;
				break;
			}
		}

		for (int xx = 0; xx < 6; xx++) //Prints board
		{
			for (int yy = 0; yy < 7; yy++)
			{
				if (arr[xx][yy] == 0)
					cout << " . ";
				if (arr[xx][yy] == 1)
					cout << " X ";
				if (arr[xx][yy] == 2)
					cout << " O ";
			}
			cout << endl << endl;
		}
		cout << " 1  2  3  4  5  6  7 " << endl;

		// Checks for wins
		if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1 && arr[0][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][1] == 1 && arr[0][2] == 1 && arr[0][3] == 1 && arr[0][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][2] == 1 && arr[0][3] == 1 && arr[0][4] == 1 && arr[0][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][3] == 1 && arr[0][4] == 1 && arr[0][5] == 1 && arr[0][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1 && arr[1][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][1] == 1 && arr[1][2] == 1 && arr[1][3] == 1 && arr[1][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][2] == 1 && arr[1][3] == 1 && arr[1][4] == 1 && arr[1][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][3] == 1 && arr[1][4] == 1 && arr[1][5] == 1 && arr[1][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1 && arr[2][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][1] == 1 && arr[2][2] == 1 && arr[2][3] == 1 && arr[2][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][2] == 1 && arr[2][3] == 1 && arr[2][4] == 1 && arr[2][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][3] == 1 && arr[2][4] == 1 && arr[2][5] == 1 && arr[2][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[3][0] == 1 && arr[3][1] == 1 && arr[3][2] == 1 && arr[3][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[3][1] == 1 && arr[3][2] == 1 && arr[3][3] == 1 && arr[3][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[3][2] == 1 && arr[3][3] == 1 && arr[3][4] == 1 && arr[3][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[3][3] == 1 && arr[3][4] == 1 && arr[3][5] == 1 && arr[3][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[4][0] == 1 && arr[4][1] == 1 && arr[4][2] == 1 && arr[4][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[4][1] == 1 && arr[4][2] == 1 && arr[4][3] == 1 && arr[4][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[4][2] == 1 && arr[4][3] == 1 && arr[4][4] == 1 && arr[4][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[4][3] == 1 && arr[4][4] == 1 && arr[4][5] == 1 && arr[4][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[5][0] == 1 && arr[5][1] == 1 && arr[5][2] == 1 && arr[5][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[5][1] == 1 && arr[5][2] == 1 && arr[5][3] == 1 && arr[5][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[5][2] == 1 && arr[5][3] == 1 && arr[5][4] == 1 && arr[5][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[5][3] == 1 && arr[5][4] == 1 && arr[5][5] == 1 && arr[5][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1 && arr[3][0] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][0] == 1 && arr[2][0] == 1 && arr[3][0] == 1 && arr[4][0] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][0] == 1 && arr[3][0] == 1 && arr[4][0] == 1 && arr[5][0] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1 && arr[3][1] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][1] == 1 && arr[2][1] == 1 && arr[3][1] == 1 && arr[4][1] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][1] == 1 && arr[3][1] == 1 && arr[4][1] == 1 && arr[5][1] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1 && arr[3][2] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][2] == 1 && arr[2][2] == 1 && arr[3][2] == 1 && arr[4][2] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][2] == 1 && arr[3][2] == 1 && arr[4][2] == 1 && arr[5][2] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][3] == 1 && arr[1][3] == 1 && arr[2][3] == 1 && arr[3][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][3] == 1 && arr[2][3] == 1 && arr[3][3] == 1 && arr[4][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][3] == 1 && arr[3][3] == 1 && arr[4][3] == 1 && arr[5][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][4] == 1 && arr[1][4] == 1 && arr[2][4] == 1 && arr[3][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][4] == 1 && arr[2][4] == 1 && arr[3][4] == 1 && arr[4][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][4] == 1 && arr[3][4] == 1 && arr[4][4] == 1 && arr[5][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][5] == 1 && arr[1][5] == 1 && arr[2][5] == 1 && arr[3][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][5] == 1 && arr[2][5] == 1 && arr[3][5] == 1 && arr[4][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][5] == 1 && arr[3][5] == 1 && arr[4][5] == 1 && arr[5][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][6] == 1 && arr[1][6] == 1 && arr[2][6] == 1 && arr[3][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][6] == 1 && arr[2][6] == 1 && arr[3][6] == 1 && arr[4][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][6] == 1 && arr[3][6] == 1 && arr[4][6] == 1 && arr[5][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[3][0] == 1 && arr[2][1] == 1 && arr[1][2] == 1 && arr[0][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[4][0] == 1 && arr[3][1] == 1 && arr[2][2] == 1 && arr[1][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[3][1] == 1 && arr[2][2] == 1 && arr[1][3] == 1 && arr[0][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[5][0] == 1 && arr[4][1] == 1 && arr[3][2] == 1 && arr[2][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[4][1] == 1 && arr[3][2] == 1 && arr[2][3] == 1 && arr[1][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[3][2] == 1 && arr[2][3] == 1 && arr[1][4] == 1 && arr[0][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[5][1] == 1 && arr[4][2] == 1 && arr[3][3] == 1 && arr[2][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[4][2] == 1 && arr[3][3] == 1 && arr[2][4] == 1 && arr[1][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[3][3] == 1 && arr[2][4] == 1 && arr[1][5] == 1 && arr[0][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[5][2] == 1 && arr[4][3] == 1 && arr[3][4] == 1 && arr[2][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[4][3] == 1 && arr[3][4] == 1 && arr[2][5] == 1 && arr[1][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[5][3] == 1 && arr[4][4] == 1 && arr[3][5] == 1 && arr[2][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][0] == 1 && arr[3][1] == 1 && arr[4][2] == 1 && arr[5][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][0] == 1 && arr[2][1] == 1 && arr[3][2] == 1 && arr[4][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][1] == 1 && arr[3][2] == 1 && arr[4][3] == 1 && arr[5][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1 && arr[3][3] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][1] == 1 && arr[2][2] == 1 && arr[3][3] == 1 && arr[4][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][2] == 1 && arr[3][3] == 1 && arr[4][4] == 1 && arr[5][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][1] == 1 && arr[1][2] == 1 && arr[2][3] == 1 && arr[3][4] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][2] == 1 && arr[2][3] == 1 && arr[3][4] == 1 && arr[4][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[2][3] == 1 && arr[3][4] == 1 && arr[4][5] == 1 && arr[5][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][2] == 1 && arr[1][3] == 1 && arr[2][4] == 1 && arr[3][5] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[1][3] == 1 && arr[2][4] == 1 && arr[3][5] == 1 && arr[4][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}
		if (arr[0][3] == 1 && arr[1][4] == 1 && arr[2][5] == 1 && arr[3][6] == 1)
		{
			cout << "Player 1 wins!";
			break;
		}

		cout << "Player 2 (O) , enter a column (1-7): "; // Player 2 enters column
		cin >> col;
		if (col > 7) //If user mis-types
		{
			cout << "Error. Enter a column (1-7) again.";
			cin >> col;
		}
		if (col == 0) // If user types '0', user will be asked again
		{
			cout << "Are you sure you want to end the game? (y/n) "; // End game?
			cin >> endgame;
			if (endgame == 'y')
				break;
			if (endgame == 'n')
			{
				cout << "Continuing game. Player 2 (O) , enter a column (1-7): ";
				cin >> col;
			}
		}
		column = col - 1;
		for (int xx = 5; xx >= 0; xx--) // Changes 0 to 2 for player 2
		{
			if (arr[xx][column] == 0)
			{
				arr[xx][column] = 2;
				break;
			}
		}
	}
	cout << endl << "Game has ended. " << endl;

	system("pause");
}
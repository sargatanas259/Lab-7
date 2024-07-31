#include<iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

void display();
void start();
void Loop();
void Match();


HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
int Turns = 0;
int row1Value, column1Value, row2Value, column2Value, Board[4][4];
int Play;
bool Board2[4][4];

int main()
{

    start();


}
void display() {

    cout << "    1 2 3 4\n"
         << "  ";

    for (int i = 0; i <= 8; i++) {
        cout << "-";
    }
    cout << endl;
    for (int row = 0; row < 4; row++) {
        cout << row + 1 << " | ";
        for (int column = 0; column < 4; column++) {
            if (Board2[row][column]) {
                cout << Board[row][column];
            } else {
                cout << '*';
            }
            cout << ' ';
        }
        cout << endl;
    }
    cout << endl;
}
void start()
{
    SetConsoleTextAttribute(color, 9);
    cout << "Welcome to Memory \n The Card Game\n \n";
    do {
        cout << "Game Menu\n"
             << "********************\n \n"
             << "Select 1 for a New Game and 2 to Exit Game\n \n"
             << "1. New Game\n"
             << "2. Exit Game\n \n"
             << "********************\n";
        cin >> Play;
        switch (Play) {
            case 1:
                cout << "Lets play Memory \n The Card Game \n";
                break;
            case 2:
                cout << "GoodBye";
                return;
        }
    } while(Play==2);
    srand( time(NULL));
    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 4; column++) {
            Board[row][column] = rand() % 8 + 1;
            Board2[row][column] = false;
        }
    }
    display();
    Loop();
}
void Loop()
{

    while (Turns != 20) {
        cout << "Please enter a row value for first card: \n";
        cin >> row1Value;
        cout<<"Please enter a column value for first card: " << endl;
        cin >> column1Value;
        cout <<"Please enter a row value for second card: " << endl;
        cin >> row2Value;
        cout <<"Please enter a column value for second card: " << endl;
        cin >> column2Value;
        row1Value--;
        column1Value--;
        row2Value--;
        column2Value--;
        Board2[row1Value][column1Value] = true;
        Board2[row2Value][column2Value] = true;
        display();
        Match();
        Turns++;

    }
}
void Match()
{
    if (Board[row1Value][column1Value] == Board[row2Value][column2Value])
    {
        SetConsoleTextAttribute(color, 10);
        cout << "Congratulations!\n"
             << "Your Two Cards Match!\n";
        SetConsoleTextAttribute(color, 9);
    }
    else
    {
        SetConsoleTextAttribute(color, 4);
        cout << "Oh No!\n"
             << "Your Two Cards Do Not Match!\n";
        SetConsoleTextAttribute(color, 9);
        Board2[row1Value][column1Value] = false;
        Board2[row2Value][column2Value] = false;
    }
}

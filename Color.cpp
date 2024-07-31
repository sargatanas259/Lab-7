#include <iostream>
#include <string>
#include <windows.h>
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;



void Product ();
void Menu ();
int main() {
    Menu();

    return 0;
}
void Product ()
{

    string Product_Number;
cout<<"What is the product number?";
cin>>Product_Number;

    int NumberLength = Product_Number.length();

if(NumberLength<7){
    cout<<"You input a wrong product number ";
    return Menu();
}
    else if (NumberLength==7)
    {
        char Camera_Color = Product_Number.at(3);
        toupper(Camera_Color);
        //cout<<Camera_Color;

        switch (Camera_Color) {
            case 'B':
            case 'b':
                SetConsoleTextAttribute(color, 7);
                cout<<" Your camera is black";
                SetConsoleTextAttribute(color, 7);
                return Menu();
            case 'G':
            case 'g':
                SetConsoleTextAttribute(color, 2);
                cout<<"Your camera is green";
                SetConsoleTextAttribute(color, 7);
                return Menu();
            case 'R':
            case 'r':
                SetConsoleTextAttribute(color, 4);
                cout<<"Your camera is Red";
                SetConsoleTextAttribute(color, 7);
                return Menu();
            case 'W':
            case 'w':
                SetConsoleTextAttribute(color, 15);
                cout<<" Your camera is white";
                SetConsoleTextAttribute(color, 7);
                return Menu();
        }
    }
}

void Menu () {
    int Options;

    SetConsoleTextAttribute(color, 9);
    cout << "\nFind out what color your camera is :\n"
         << "\n 1 to Start or any other number to quit\n";
    cin >> Options;
    SetConsoleTextAttribute(color, 9);
    do {


        if (Options == 1)
            Product();
        else if (Options > 1)
            cout << "Good bye ";
        return;
    } while (Options > 1);
}

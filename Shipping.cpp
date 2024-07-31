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
    cout<<"What is the product number?\n";
    cin>>Product_Number;

    int NumberLength = Product_Number.length();

    if(NumberLength<1||NumberLength>5)
    {
     cout<<"You input a wrong product number ";
    return Menu();
    }
    else if (NumberLength>=4||NumberLength<=5)
    {
        string Shipping = Product_Number.substr(1,2);
        if (Shipping!="MP"||Shipping!="mp"||Shipping!="MS"||Shipping!="ms"||Shipping!="UP"||Shipping!="up"||Shipping!="FO"||Shipping!="fo"||Shipping!="FS"||Shipping!="fs"){
            cout<<"Your number is not correct";
            return Menu();
        }


        //cout<<Shipping;

        else if ( Shipping=="FS"||Shipping=="fs")
        {
            //case 'FS':
            //case 'fs':
                SetConsoleTextAttribute(color, 7);
                cout<<" Your shipping is Fed Ex Standard\n";
                SetConsoleTextAttribute(color, 7);
                return Menu();
        }
            else if (Shipping=="FO"||Shipping=="fo"){
                SetConsoleTextAttribute(color, 2);
                cout<<" Your shipping is Fed Ex Overnight\n";
                SetConsoleTextAttribute(color, 7);
                return Menu();
            }
            //'FO':
            //case 'fo':
        else if (Shipping=="UP"||Shipping=="up")
        {
        //    case 'UP':
          //  case 'up':
                SetConsoleTextAttribute(color, 7);
                cout<<" Your shipping is UPS Standard\n";
                SetConsoleTextAttribute(color, 7);
                return Menu();
        }
        else if (Shipping=="MS"||Shipping=="ms") {
            //case 'MS':
            //case 'ms':
            SetConsoleTextAttribute(color, 7);
            cout << " Your shipping is USPS Mail Standard\n";
            SetConsoleTextAttribute(color, 7);
            return Menu();
        }
        else if (Shipping=="MP"||Shipping=="mp") {
            //case 'MP':
            //case 'mp':
            SetConsoleTextAttribute(color, 2);
            cout << " Your shipping is USPS Mail Priority\n";
            SetConsoleTextAttribute(color, 7);
            return Menu();
        }
    }

}


void Menu () {
    int Options;

    SetConsoleTextAttribute(color, 9);
    cout << "\nFind out what your shipping is :\n"
         << "\n 1 to Start or any other number to quit\n";
    cin >> Options;
    SetConsoleTextAttribute(color, 7);
    do {


        if (Options == 1)
            Product();
        else if (Options > 1)
            cout << "Good bye ";
        return;
    } while (Options > 1);
}

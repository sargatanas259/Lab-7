#include <iostream>

#include <windows.h>

using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
void Zip_Check();
void Menu ();

int main() {
    Menu();
    return 0;
}
void Zip_Check() {
    int Zip_code,Zip_Check;
    cout<<"What is your zip\n";
    cin>> Zip_code;
    Zip_code=(Zip_code/100);

 //cout<<Zip_code;
 int Zip1 =605, Zip2 = 606;
    do {
        if (Zip_code == Zip1){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << " Your shipping cost for shipping  $25. \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            return Menu();
        }

        if (Zip_code == Zip2){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "Your shipping cost is $30\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            return Menu();
        }


        else if (Zip_code !=Zip1 || Zip2 != Zip_code){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout<<" Your address is out of our shipping range \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            return Menu();
        }

    } while (Zip_code ==Zip1 || Zip2 == Zip_code);

}
void Menu ()
{
   int Options;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    cout<<"\nWould you like to Calculate your shipping cost?\n"
        <<"\n 1 to continue or any other number to quit\n";
    cin>> Options;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    do
    {


     if(Options==1)
         Zip_Check();
     else if(Options>1)
         cout<<"Good bye ";
        return;
    }while( Options>1);

}
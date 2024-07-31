#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Board();

const int row=20,column=20;

int main() {
    Board();

    return 0;
}
void Board() {
    int Board[20][20];
    int row = 0, Column = 0;
    srand(time(NULL));
    for (int row = 0; row < 20; row++) {
        for (int column = 0; column < 20; column++) {
            Board[row][column] = rand() % 8 + 1;

        }
    }
    for (int row = 0; row < 20; row++) {
        for (int column = 0; column < 20; column++) {
            if (Board[row][column]) {
                cout << Board[row][column]<< "  ";
            }
        }
        cout << endl;
    }
    int Starting=0,Peak_counting=0,MinPeakCounting;
    for (int i = 1; i <20-1 ; i++)
        for (int j = 1; j <20-1 ; j++)
        {
            Starting=Board[i][j];
            for (int k = i-1; k <=i+1 ; k++)
            {
                for (int l = j-1; l <=j+1 ; l++)
                {
                    if (Board[k][l]<Starting)
                        Peak_counting++;
                    if (Board[k][l]>Starting)
                        MinPeakCounting++;
                }

            }
            if (Peak_counting==8)
                cout<< "Peak ("<<i<<" , "<<j <<")\n";
            if (MinPeakCounting==8)
                cout<< "Min Peak ("<<i<<" , "<<j <<")\n";
            Peak_counting=0;
            MinPeakCounting=0;

        }



}
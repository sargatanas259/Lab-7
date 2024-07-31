#include <iostream>
#include <fstream>
using namespace std;


int Prime_check();

int main() {


    cout << "Enter an integer between 1-100,000,000: \n ";
    Prime_check();



    return 0;
}
int Prime_check(){
    int i,n;
    bool Prime = true;
    cin >> n;
    if (n == 0 || n == 1) {
        Prime = false;
    }
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            Prime = false;
            break;
        }
    }
    if (Prime)
        cout << n << " is a prime number";
    else if (!Prime) {
        cout << n << " is Composite number ";
        for (int i = 1; i < n; i++) {
            if (n % i == 0)
                cout  << i << " ";
        }
    }

}

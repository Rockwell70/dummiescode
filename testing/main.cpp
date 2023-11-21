#include <iostream>

using namespace std;
int main() {

//    int i;
//    cout << "Enter an number." << endl;
//    cin >> i;
//
//    if (i > 100){
//        cout << "your number is greater than 100." << endl;
//    }
//
//    else if (i > 10)
//    {
//        cout << "your number is greater than 10." << endl;
//    }
//
//    else
//    {
//        cout << "What's the matter with you!" << endl;
//    }

//Looping
    int x = 0;

    for (int i = 1; i <= 100; i++) {
        x += i;

        if (x % 2 == 0) {
            cout << x << " is even." << endl;
        } else {
            cout << x << " is odd." << endl;
        }

    }

    return 0;
}

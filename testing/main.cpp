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
//    int x = 0;
//
//    for (int i = 1; i <= 100; i++) {
//        x += i;
//
//        if (x % 2 == 0) {
//            cout << "i is " << i << " and " << x << " is even." << endl;
//        } else {
//            cout << "i is " << i << " and " << x << " is odd." << endl;
//        }
//
//    }

//Looping with multiple variables

    string A = "Hello";
    string B = "1122334455";

    for (autot i = 0, j = 0; i < 5; i++, j += 2)
    {
        cout << A[i] << B[j] << endl;
    }

    return 0;
}

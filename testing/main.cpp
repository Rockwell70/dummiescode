#include <iostream>

using namespace std;
int main() {

    int i;
    cout << "Enter an number." << endl;
    cin >> i;

    if (i > 100){
        cout << "your number is greater than 100." << endl;
    }

    else if (i > 10)
    {
        cout << "your number is greater than 10." << endl;
    }

    else
    {
        cout << "What's the matter with you!" << endl;
    }


    return 0;
}

#include <iostream>

using namespace std;
int func1() {
    std::cout << "This is function 1" << std::endl;
    return 0;
}

int func2() {
    std::cout << "This is function 2\n" << std::endl;
    return 0;
}

int main() {
    int i;
    cout << "Enter either 1 or 2\n" << endl;
    cin >> i;
    if (i == 1){
        func1();

    } else if (i == 2) {
        func2();
    }

    else{
        cout << "error!" << endl;
    }


}



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

//int main() {
//    int i;
//    cout << "Enter either 1 or 2\n" << endl;
//    cin >> i;
//    if (i == 1){
//        func1();
//
//    } else if (i == 2) {
//        func2();
//    }
//
//    else{
//        cout << "error!" << endl;
//    }
//
//
//}

//this is looping with continue

int main() {
    int i;
    for (i=0; i < 10; i++){
        cout << i << " ";
        if (i == 5) {
            cout << endl;
            continue;
        }
        cout << i * 2 << endl;
    }
    cout << "Finished" << endl;
    return 0;
}

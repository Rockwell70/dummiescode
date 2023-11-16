#include <iostream>

using namespace std;

int main()
{
    int start, end;
    char ch = '\t';
    string result;
    string mystring = "abcdef";

    start = 1;
    end = 11;
    end += 45;
    result = (start == end) ? "equal" : "not equal";
    cout << "Hello People Who do you think" << ch << "you are?\n" << endl;
    cout << "False is actually a number " << result << endl;
    cout << "Start and End are equal? " << result << endl;

    cout << end - start << endl;
    cout << mystring[2] << endl;
    return 0;
}
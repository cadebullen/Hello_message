#include <iostream>
#include <string>

using namespace std;

int main() {
    string fName, lName;
    int section;

    cout << "Please enter your first name >>\n";
    cin >> fName;

    cout << "Please enter your last name >>\n";
    cin >> lName;

    cout << "Please enter your CS 280 section number >>\n";
    cin >> section;

    cout << "Hello " << fName <<  ", welcome to CS 280 section " << section << :: endl;

    return 0;
}
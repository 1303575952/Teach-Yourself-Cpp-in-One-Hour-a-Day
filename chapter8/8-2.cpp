#include <iostream>

using namespace std;

int main() {
    int age = 30;
    int *pointsToInt = &age;

    // Displaying the value of pointer
    cout << "Integer age is at: " << pointsToInt << endl;

    return 0;
}
//carrots.cpp--food processing program
//uses and displays a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots;                            // declare an integer varible

    carrots = 25;                           // assign a value to the variable
    cout << "I have";
    cout << carrots;                        // display the value to the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;                  //modify the variable
    cout << "Crunch,crunch. Now I have" << carrots << " carrots." << endl;
    return 0;
}

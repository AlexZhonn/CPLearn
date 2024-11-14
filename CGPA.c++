#include <iostream>
using namespace std;
void CGPA_Calculator();
void GPA_Calculator();
int main()
{
    system("cls");
    int input;
    cout << "--------------------------" << endl;
    cout << "Welcome to CGPA Calculator";
    switch (input)
    {
    case 1:
        CGPA_Calculator();
    case 2:
        GPA_Calculator();
    case 3:
        exit(EXIT_SUCCESS);
    }
    return 0;
}

void CGPA_Calculator()
{
    int p;
    system("cls");
    cout << "Enter how many subjects you wanna calc";
    cin >> p;
    cout << "--------Calculating the CGPA--------";
}

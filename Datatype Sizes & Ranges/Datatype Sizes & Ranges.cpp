#include <iostream>

using namespace std;

int main()
{
    short A, B;
    cout << "Please enter the first number?\n";
    cin >> A;
    cout << "Please enter the second number?\n";
    cin >> B;
    cout << endl;
    cout << A << " + " << B << " = " << A + B << endl;
    cout << A << " * " << B << " = " << A * B << endl;
    cout << A << " - " << B << " = " << A - B << endl;
    cout << A << " / " << B << " = " << A / B << endl;
    cout << A << " % " << B << " = " << A % B << endl;
    
    cout << endl << "Size of A : " << sizeof(A);
    cout << endl << "Size of B : " << sizeof(B);
    return 0;

}
//
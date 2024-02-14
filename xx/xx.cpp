#include <iostream>
using namespace std;


void ql()
{
    int k;
    string l;
    string a[9]{ " ", " ", " ", " ", " ", " ", " ", " ", " " };
    cout << "    A  B  C" << endl;
    cout << " 1 [" << a[0] << "][" << a[1] << "][" << a[2] << "]" << endl;
    cout << " 2 [" << a[3] << "][" << a[4] << "][" << a[5] << "]" << endl;
    cout << " 3 [" << a[6] << "][" << a[7] << "][" << a[8] << "]" << endl;
    cout << "Input A/B/C" << endl;
    cin >> k;
    cout << "Input 1/2/3" << endl;
    cin >> l;
    if (l = 'A')
        cout << "qq" << endl;

}


int main()
{
    int coo;
    int c;
    int b;
    cout << "Game rules" << endl;
    ql();
    for (int i = 0; i > 9; i++)
    {
        cout << "Крестик ходит" << endl;
        coo = 1;
    }

}

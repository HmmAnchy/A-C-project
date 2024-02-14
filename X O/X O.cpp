#include <iostream>
using namespace std;


void ql()
{
    int k;
    int l;
    string a[9]{ " ", " ", " ", " ", " ", " ", " ", " ", " " };
    cout << "    A  B  C" << endl;
    cout << " 1 [" << a[0] << "][" << a[1] << "][" << a[2] << "]" << endl;
    cout << " 2 [" << a[3] << "][" << a[4] << "][" << a[5] << "]" << endl;
    cout << " 3 [" << a[6] << "][" << a[7] << "][" << a[8] << "]" << endl;
    cout << "Введите буквенную координату" << endl;
    cin >> k;
    cout << "Введите цифровую координату" << endl;
    cin >> k;
}


int main()
{
    int coo;
    int i;
    int c;
    int b;
    cout << "Game rules" << endl;
    ql();
    if (i++)
    {
        cout << "Крестик ходит" << endl;
        coo = 1;
    }
    else
    {
        cout << "Победа" << endl;
    }
    
}

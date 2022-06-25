#include<iostream>
using namespace std;

int main()
{
    float a,b;
   // float d;
    char op;
    cout <<"Choose op:+,-,*,/: ";
    cin >>op;

    cout <<"Enter the value of a: ";
    cin >>a;

    cout <<"Enter the value of b: ";
    cin >>b;

    switch(op)
    {
        case '+':
        cout << a << '+' << b << '=' << a+b;
        break;

        case '-':
        cout << a << '-' << b << '=' << a-b;
        break;

        case '*':
        cout << a << '*' << b << '=' << a*b;
        break;

        case '/':
        cout << a << '/' << b << '=' << a/b;
        break;

        default :
        {
            cout <<"Don't think much...";
        }
        return 0;
    }

    }
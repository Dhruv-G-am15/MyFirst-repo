#include<iostream>
using namespace std;

int main(){
    float c,f;

    cout <<"Enter the value of celsius: ";
    cin >>c;
    cout <<"Celsius is: "<<c<<endl;

    f=(c*9)/5+32;
    cout <<"Fahrenheit is: "<<f;
    return 0;
}
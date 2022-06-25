#include<iostream>
using namespace std;

int main() 
{ 
    float a,b,c,sum,avg;

    cout <<"Enter the value of a: ";
    cin >>a;

    cout <<"Enter the value of b: ";
    cin >>b;

    cout <<"Enter the value of c: ";
    cin >>c;

    sum=a+b+c;
    cout <<"Sum is: "<<sum<<endl;

    avg=sum/3;
    cout <<"Average is: "<<avg;

    return 0;

}
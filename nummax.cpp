#include<iostream>
using namespace std;

int main(){

    int first_number,second_number;

    cout <<"Enter the value of first_number: "<<endl;
    cin >>first_number;

    cout <<"Enter the value of second_number: "<<endl;
    cin >>second_number;

    if(first_number>second_number)
    {
        cout <<"first_number is maximum";
    }
    else
    {
        cout <<"second_number is maximum";
    }

    return 0;

}
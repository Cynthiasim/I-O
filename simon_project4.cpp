//  File name: main.cpp
//  Programmer: Cynthia Simon
//  Course: Prorgramming Fundamentals II (COSC 1337)
//  Professor: Isaac K. Gang
//  Institution: Texas A&M University-Commerce

//  Problem: I/O
//  Due date: 2/25/19

#include <iostream>
using namespace std;

int main()

{
    int num1, num2;
    char op;
    
    cout << "Enter two integers and operator" << endl;
    cin >> num1 >> op >> num2;
    
    if(op == '+')
        cout << num1 + num2 << endl;
    else if(op == '-')
        cout << num1 - num2 << endl;
    else if(op == '*')
        cout << num1 * num2 << endl;
    else if(op == '/' && num2 == 0)
        cout << "Any number divided by 0 is undefined" << endl;
    else
        cout << num1 / num2 << endl;
    
    return 0;
    
}



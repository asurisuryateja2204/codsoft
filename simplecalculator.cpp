#include<bits/stdc++.h>
using namespace std;
int main(){
    char op;
    int num1,num2;
    cout<<"CALCULATOR"<<endl;
    cout<<"<-------->"<<endl;
        cout<<"Press +, For Addition"<<endl;
        cout<<"Press -, For Subtraction"<<endl;
        cout<<"Press *, For Multiplication"<<endl;
        cout<<"Press /, For Division"<<endl;
        cout<<"Press %, For remainder"<<endl;
        cout<<"Press ^, For power"<<endl;
        cin>>op;
        cout<<"Enter any two numbers"<<endl;
        cin>>num1>>num2;
        switch(op){
            case '+':
            cout<<num1<<"+"<<num2<<"="<<(num1+num2)<<endl;
            break;
            case '-':
            cout<<num1<<"-"<<num2<<"="<<(num1-num2)<<endl;
            break;
            case '*':
            cout<<num1<<"*"<<num2<<"="<<(num1*num2)<<endl;
            break;
            case '/':
            cout<<num1<<"/"<<num2<<"="<<(num1/num2)<<endl;
            break;
            case '%':
            cout<<num1<<"%"<<num2<<"="<<(num1%num2)<<endl;
            break;
            case '^':
            cout<<num1<<"^"<<num2<<"="<<pow(num1,num2)<<endl;
            break;
            default:
            cout<<"invalid choice";
            break;
        }
        
        return 0;
    }


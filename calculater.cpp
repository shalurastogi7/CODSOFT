#include<iostream>
#include<bits/stdc++.h>


using namespace std;
int a,b;
void getdata()
{
    cout<<"Enter two number ";
    cin>>a>>b;

}
void calculat()
{
    char op;
    cout<<"+ - * /\n";
    cout<<"Enter the Operation ";
    cin>>op;
    switch (op)
    {
        case '+':cout<<"Result="<<a+b;
        break;
        case  '-':cout<<"Result="<<a-b;
        break;
        case '*':cout<<"Result="<<a*b;
        break;
        case '/':cout<<"Result="<<a/b;
        break;
        defalut:
        cout<<"No opration perform";
     
    }
}
int main()
{
    getdata();
    calculat();
}


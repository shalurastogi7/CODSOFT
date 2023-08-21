#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Its about grading"<<endl;
    cout<<"75-100 = A"<<endl;
    cout<<"65-74 =  B"<<endl;
    cout<<"51-64 =  C"<<endl;
    cout<<"33-50 =  D"<<endl;
    cout<<"00-32 =  E"<<endl;
    int marks;
    cout<<"Enter your marks ";
    cin>>marks;
     if(marks>=75)
    {
        cout<<"Grade is A";
    }
    else if(marks>=65)
    {
        cout<<"Grade is B";
    }
    else if( marks >=51)
    {
        cout<<"Grade is C";
    }
    else if(marks>=33)
    {
        cout<<"Grade is D";
        
    }
    else if(marks>=0)
    {
        cout<<"Grade is E ";
    }
    else
    {
        cout<<"Enter the valid marks";
    }
     return 0;
}










    


#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    string name;
    char ip;
    int ipuser;
    cout<<"Enter your name";
    getline(cin,name);
    cout<<endl;
    do
    {
        srand(0);
        int variable=rand()%5+1;
        cout<<"enter any no. b/w 1 to 5  ";
        cin>>ipuser;
        cout<<endl;
        if(ipuser==variable)
        {
            cout<<"congrats  you guessed the orrect no."<<endl;

        }
        else{
            cout<<"s orry  you guessed the wrong no. try again"<<endl;
        }
        cout<<"do you like to try gain Y/N  ";
        cin>>ip;
        cout<<endl;

}while (ip!='N');
cout<<"Game end"<<endl;


    
}
    
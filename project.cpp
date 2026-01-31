#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" 
                     "abcdefghijklmnopqrstuvwxyz"
                     "0123456789"
                        "!@#$%^&*_";

    int length;
    cout<<"enter length of your password: ";
    cin>>length;
    
    srand(time(0)); // seed for randomness

    cout<<"Generatyed password: ";

    for(int i = 0; i<length;i++)
    {
        int index = rand() % chars.length();
        cout<<chars[index];
    }
return 0;

}
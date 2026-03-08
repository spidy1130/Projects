#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

string passwordGenerator(int length,int num=0,int special=0)
{
    string password="";
    string characters="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string numbers="0123456789";
    string specialChars="!@#$%^&*()~_-+=|\\:;\"'<>,.?/";
    srand(time(0));
    while(length)
    {
        password+=characters[rand()%characters.size()];
        length--;
        if(num && length)
        {
            password+=numbers[rand()%numbers.size()];
            length--;
            num--;
        }
        if(special && length)
        {
            password+=specialChars[rand()%specialChars.size()];
            length--;
            special--;
        }
    }

    return password;
}
int main()
{
    int length,num,special;
    cout<<"Enter the desired length of the password: ";
    cin>>length;
    cout<<"Enter the number of digits you want in the password: ";
    cin>>num;
    cout<<"Enter the number of special characters you want in the password: ";
    cin>>special;

    string generatedPassword=passwordGenerator(length,num,special);
    cout<<"Generated Password: "<<generatedPassword<<endl;

    return 0;
}
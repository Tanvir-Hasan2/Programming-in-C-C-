#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()

{
    string name;
    ofstream file;
    file.open("student.txt",ios::out|ios::app);
    cout<< "Enter your name : ";
    getline(cin,name);

    file<< "Welcome "<<name<<endl;
    //file << "I am Tanvir. I am 28 years old. I am from Satkhira.\n ";
    file.close();
    cout<<"Data stored"<<endl;
    return 0;
}


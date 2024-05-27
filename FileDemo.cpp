#include<iostream>
#include<fstream>
using namespace std;
int main()

{
    ofstream file;
    file.open("student.txt");
    file << "I am Tanvir. I am 28 years old. I am from Satkhira\n ";
    file.close();
    return 0;
}

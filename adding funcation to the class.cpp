#include<iostream>
using namespace std;

class student
{
    public :
    int id;
    double gpa;

    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }
};

int main()
{
    student Alim,Baishakhi,Shonge;

    Alim.id=102;
    Alim.gpa=3.59;
    //cout<<Alim.id<<" "<<Alim.gpa<<endl;
    Alim.display();

    Baishakhi.id=103;
    Baishakhi.gpa=3.29;
    //cout<<Baishakhi.id<<" "<<Baishakhi.gpa<<endl;
    Baishakhi.display();

    Shonge.id=104;
    Shonge.gpa=3.94;
    //cout<<Shonge.id<<" "<<Shonge.gpa<<endl;
    Shonge.display();



    return 0;
}


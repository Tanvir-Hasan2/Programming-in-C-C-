#include<iostream>
using namespace std;

class student
{
    public :
    int id;
    double gpa;

    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
   /* void setValue(int x,double y)
    {
        id=x;
        gpa=y;
    }*/
    student(int x,double y)
    {
      id=x;
      gpa=y;
    }
};

int main()
{
    student Alim(102,3.40),Baishakhi(103,3.20),Shonge(104,3.90);

    //Alim.id=102;
    //Alim.gpa=3.59;
    //cout<<Alim.id<<" "<<Alim.gpa<<endl;
    //Alim.setValue(102,3.40);
    Alim.display();

    //Baishakhi.id=103;
    //Baishakhi.gpa=3.29;
    //cout<<Baishakhi.id<<" "<<Baishakhi.gpa<<endl;
    //Baishakhi.setValue(103,3.20);
    Baishakhi.display();

    //Shonge.id=104;
    //Shonge.gpa=3.94;
    //cout<<Shonge.id<<" "<<Shonge.gpa<<endl;
    //Shonge.setValue(104,3.90);
    Shonge.display();



    return 0;
}



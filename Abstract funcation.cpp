#include<iostream>
using namespace std;

class MobileUser
{

public :
    void call()
    {
        cout<<" Hello !"<<endl;
    }
    virtual void sendMessage() = 0;
};

class Rahim : public MobileUser
{
public :
    void sendMessage()
    {
        cout<<"Hi, I am Rahim"<<endl;
    }
};
class Karim : public MobileUser
{
public :
    void sendMessage()
    {
        cout<<"Hi, I am Karim"<<endl;
    }
};

int main()
{
    MobileUser *m;
    Rahim r;
    Karim k;

    m = &r;
    m -> call();
    m -> sendMessage();

    m = &k;
    m -> sendMessage();



    return 0;
}

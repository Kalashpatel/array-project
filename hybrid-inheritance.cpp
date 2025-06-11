#include <iostream>
using namespace std;

class Grandparent{
    public:
        void GP(){
            cout << "Grandparent" << endl;
        }
};
class Parent1 : public Grandparent{
    public:
        void P1(){
            cout << "Parent1" << endl;
        }
};
class Parent2 : public Grandparent{
    public:
        void P2(){
            cout << "Parent2" << endl;
        }
};
class child : public Parent1, public Parent2{
    public:
        void C(){
            cout << "Child" << endl;
        }
};
int main(){



    return 0;
}
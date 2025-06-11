#include <iostream>
#include <string>
using namespace std;

class student {
private:
    int rno;
    string name;
    float per;

    public:
    void set_data(int r, string n, float p){
        rno = r;
        name = n;
        per = p;
    }
    void get_data(){
        cout << "roll no is: " << rno << endl
        << "name is: " << name << endl
        << "percentage is: " << per;

    }
};

int main() {

    int rno;
    string name;
    float per;

    student student1;
    student student2;
    student student3;
    student student4;
    student student5;
    student student6;

    cout << "enter roll no of student1: ";
    cin >> rno;
    cout << "enter name of student1: ";
    cin >> name;
    cout << "enter percentage of student1: ";
    cin >> per;


    student1.set_data(rno, name, per);
    student1.get_data();

    return 0;
}
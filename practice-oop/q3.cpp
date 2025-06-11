#include <iostream>
using namespace std;

class rectangle{
    private:
        int length, width;
    public:
        void set_data(int l, int w){
            length = l;
            width = w;
        }
        int get_data(){
            return length * width;
        }
};

int main(){

    int l, w;
    rectangle r1;
    cout << "enter length: ";
    cin >> l;
    cout << "enter width: ";
    cin >> w;

    r1.set_data(l, w);
    cout << "area of rectangle: " << r1.get_data();

    return 0;
}
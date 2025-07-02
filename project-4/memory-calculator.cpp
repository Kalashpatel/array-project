#include<iostream>
#include<vector>
#include<string>
using namespace std;

template <typename T1, typename T2>
class memoryCalculator{

    T1 ID;
    T2 name;

    public:
        memoryCalculator(T1 id, T2 nm){
           ID = id;
           name = nm;
        }

    void display_data(int a){

        cout << "Student " << a + 1 <<"'s id is: " << ID << endl;
        cout << "Student " << a + 1 <<"'s name is: " << name << endl << endl;

    }
    int get_ID(){
        return ID;
    }
};


int main(){

    int n;

    cout << "Enter the number of students: ";
    cin >> n;
    cout << endl;

    vector<memoryCalculator<int, string>> student;

    for(int i = 0; i < n; i++){

        int id;
        string name;

        cout << "Enter the id of student " << i + 1 << " : ";
        cin >> id;
        cout << "Enter the name of student " << i + 1 << " : ";
        cin.ignore();
        getline(cin, name);
        cout << endl;

        student.push_back(memoryCalculator<int, string>(id, name));

    }
    cout << "You have entered data of all students." << endl << endl;

    int choice;
    do{

        cout << "Press 1 to see record of all students." << endl;
        cout << "Press 2 to add a Student." << endl;
        cout << "Press 3 to delete a student record." << endl;
        cout << "Press 4 to search a student by ID." << endl;
        cout << "Select your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice){

            case 1:

                for(int i = 0; i < student.size(); i++){
                    student[i].display_data(i);
                }

                break;

            case 2:{

                int aid;
                string aname;

                cout << "Enter the id of student you want to add: ";
                cin >> aid;
                cout << "Enter the name of student you want to add: ";
                cin.ignore();
                getline(cin, aname);
                cout << endl;

                student.push_back(memoryCalculator<int, string>(aid, aname));

                cout << "student added successfully." << endl << endl;

                break;
            }

            case 3:{

                int delid;

                cout << "Enter the id of student you want to delete: ";
                cin >> delid;
                cout << endl;

                bool found = false;
                for(int i = 0; i < student.size(); i++){
                    if(student[i].get_ID() == delid){
                        student.erase((student.begin() + i));

                        cout << "Student record deleted successfully." << endl << endl;

                        found = true;
                    }
                }
                if (!found){
                    cout << "you have entered wrong ID." << endl << endl;
                }

                break;
            }
            case 4:{

                int sid;

                cout << "Enter the id of student you want to search: ";
                cin >> sid;
                cout << endl;

                bool sfound = false;
                for(int i = 0; i < student.size(); i++){
                    if(student[i].get_ID() == sid){
                        student[i].display_data(i);

                        sfound = true;
                    }
                }

                if(!sfound){
                    cout << "You have entered wrong ID." << endl << endl;
                }

                break;

            }
            case 0:

                break;

            default:

                break;
        }
        

    }while(choice != 0);


    return 0;
}
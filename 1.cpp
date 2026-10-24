#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int grade;

    void display() {
        cout << name << " " << grade;
    }
};

int main() {
    int o;
    Student s;
    s.name = "Ibram";
    s.grade = 90;
    s.display();
    cin >>o;
}





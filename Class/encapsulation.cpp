#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter methods (to set values)
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Getter methods (to get values)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s;

    s.setName("Ashwini");
    s.setAge(20);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;

    return 0;
}

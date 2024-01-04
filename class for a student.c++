#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    Student(std::string studentName, int studentAge) : name(studentName), age(studentAge) {
        std::cout << "Student " << name << " created." << std::endl;
    }
    ~Student() {
        std::cout << "Student " << name << " destroyed." << std::endl;
    }
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    Student myStudent("John Doe", 20);
    std::cout << "Student Name: " << myStudent.getName() << std::endl;
    std::cout << "Student Age: " << myStudent.getAge() << std::endl;
    return 0;
}

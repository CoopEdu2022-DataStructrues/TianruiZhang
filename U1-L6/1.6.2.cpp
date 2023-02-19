#include <iostream>

using namespace std;

struct Student {
    string name;
    int score;
};

struct Teacher {
    string name;
    Student *student;
};

int main() {
    Teacher *teacher;
    teacher = new Teacher;
    teacher->name = "teacher1";
    teacher->student = new Student;
    teacher->student->name = "student1";
    teacher->student->score = 100;
    cout << teacher->name << ": (" << teacher->student->name << ", " << teacher->student->score << ")\n";
}
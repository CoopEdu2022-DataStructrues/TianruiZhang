#include <iostream>

using namespace std;

struct Student {
    string name;
    int score;
};

struct Teacher {
    string name;
    Student student[5];
};

Student AddStudent(string name, int score) {
    Student student;
    student.name = name;
    student.score = score;
    return student;
}

Teacher AddTeacher(string name) {
    Teacher teacher;
    teacher.name = name;
    for (int i = 0; i < 5; i++) {
        teacher.student[i] = AddStudent("student" + to_string(i+1), rand() % 100);
    }
    return teacher;
}

int main() {
    Teacher teacher[3];
    for (int i = 0; i < 3; i++) {
        teacher[i] = AddTeacher("teacher" + to_string(i+1));
    }

    // print
    for (int i = 0; i < 3; i++) {
        cout << teacher[i].name << ", ";
        for (int j = 0; j < 5; j++) {
            cout << '(' << teacher[i].student[j].name << ", " << teacher[i].student[j].score << ") ";
        }
        cout << endl;
    }
}
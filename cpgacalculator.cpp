#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numCourses;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<float> grades(numCourses);
    vector<float> credits(numCourses);

    // Input grades and credit hours
    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Grade Point: ";
        cin >> grades[i];

        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    // Calculate GPA/CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display course details
    cout << "\n----- Course Details -----\n";
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1
             << " | Grade Point: " << grades[i]
             << " | Credit Hours: " << credits[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Semester GPA: " << cgpa << endl;
    cout << "Overall CGPA: " << cgpa << endl;

    return 0;
}
// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int total_credit = 0;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    for(auto x : grades){
        if(x.get_student_id() == id){
            for(auto y : courses){
                if(y.get_id() == x.get_course_id()){
                    total_credit += y.get_credits();
                    switch(x.get_grade()){
                        case 'A':
                            GPA += (4 * y.get_credits());
                            break;
                        case 'B':
                            GPA += (3 * y.get_credits());
                            break;
                        case 'C':
                            GPA += (2 * y.get_credits());
                            break;
                        case 'D':
                            GPA += y.get_credits();
                            break;
                        case 'E':
                            GPA += 0;
                            break;
                    }
                }
            }
        }
    }
    GPA /= total_credit;

    std::string student_str;
    student_str = students[id-1].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}

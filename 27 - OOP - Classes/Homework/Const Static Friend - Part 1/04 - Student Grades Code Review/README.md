# 4 - Student Grades Code Review

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Const Static and Friend Homework 1  
**Problem:** 4  
**Source status:** Verified assignment

## Description

Review StudentGradesInfo: find two coding bugs, OOP/design problems, an expensive future-change case, naming inconsistencies, two better names, and an improved get_courses declaration.

## Input

A student ID, parallel course/grade vectors, grade adjustment, add_grade ignoring an existing course, print_all_courses with a global print counter, getters, and total_grade_sum.

## Output

Review findings and proposed changes.

## Requirements and constraints

Grades are currently out of 100; printing statistics must be tracked.

## Supplied StudentGradesInfo class

This is assignment material to analyze, not a solution.


~~~cpp
int statistics_total_prints=0;
class StudentGradesInfo {
private:
    string student_id;
    vector<double> grades;
    vector<string> courses_names;
public:
    StudentGradesInfo() { assert(false); }
    StudentGradesInfo(string name, string student_id_) {
        student_id=student_id_;
    }
    int AdjustGrade(int grade) {
        if (grade < 0) return grade;
        if (grade > 100) return 100;
        return grade;
    }
    bool AddGrade(double grade, string course_name) {
        grade=AdjustGrade(grade);
        grades.push_back(grade);
        for (int i=0; i<(int)courses_names.size(); ++i)
            if (course_name == courses_names[i])
                return false;
        courses_names.push_back(course_name);
        return true;
    }
    void PrintAllCourses() {
        ++statistics_total_prints;
        cout << "Grades for student: " << student_id << "\n";
        for (int i=0; i<(int)grades.size(); ++i)
            cout << "\t" << courses_names[i] << " = " << grades[i] << "\n";
    }
    pair<string,double> GetCourseGradeInfo(int pos) {
        if (pos < 0 || pos >= (int)grades.size())
            return make_pair("", -1);
        return make_pair(courses_names[pos], grades[pos]);
    }
    string GetStudentId() { return student_id; }
    int GetTotalCoursesCount() { return grades.size(); }
    pair<double,double> get_total_gradesSum() {
        double sum=0, total=0;
        for (int i=0; i<(int)grades.size(); ++i)
            sum+=grades[i], total+=100;
        return make_pair(sum,total);
    }
};
~~~

## Source

- [Class Const, Static & Friend Homework 1](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875659#overview) - Homework 04: Code Review, class slides at 2:51 and 3:23. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

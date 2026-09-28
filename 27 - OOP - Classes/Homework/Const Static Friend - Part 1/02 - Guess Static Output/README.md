# 2 - Guess Static Output

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Const Static and Friend Homework 1  
**Problem:** 2  
**Source status:** Verified assignment

## Description

Predict the supplied program output and explain it.

## Input

The source program.

## Output

Printed output and explanation.

## Requirements and constraints

Analyze the given code as written.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class Employee {
private:
    string name;
public:
    Employee(string name) : name(name) {
        cout << "Constructor: " << name << "\n";
    }
    ~Employee() {
        cout << "Destructor: " << name << "\n";
    }
};
int main() {
    static Employee belal("Belal");
    Employee most("Mostafa");
    if (true)
        Employee("Mona");
    static Employee Asmaa("Asmaa");
    return 0;
}
~~~

## Source

- [Class Const, Static & Friend Homework 1](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875659#overview) - Homework 02: Order, 0:31. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

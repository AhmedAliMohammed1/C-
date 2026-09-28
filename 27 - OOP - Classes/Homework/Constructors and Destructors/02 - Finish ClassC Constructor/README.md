# 2 - Finish ClassC Constructor

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Constructor and Destructor Homework  
**Problem:** 2  
**Source status:** Verified assignment

## Description

Complete the supplied ClassC constructor in the possible ways, count ClassA constructor calls, explain why, and give design feedback.

## Input

The supplied class declarations and main below.

## Output

A completed constructor, call count, explanation, and review tip.

## Requirements and constraints

ClassC contains a reference member and a ClassB member.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class ClassA {
public:
    ClassA() { cout << "ClassA Constructor\n"; }
};
class ClassB {
private:
    ClassA aa;
    int x;
public:
    ClassB(int x) {
        this->aa = ClassA();
        this->x = x;
    }
};
class ClassC {
private:
    int &y;
    ClassB bb;
public:
    ClassC(int &y, const ClassB &bb) {
        // Complete this constructor.
    }
};
int main() {
    int hello=10;
    ClassB b(5);
    ClassC c(hello,b);
    return 0;
}
~~~

## Source

- [Class Constructor & Destructor Homework](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875649#overview) - Assignment item 2: Finish ClassC Constructor. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

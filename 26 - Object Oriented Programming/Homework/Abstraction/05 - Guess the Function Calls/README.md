# 5 - Guess the Function Calls

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 26 - Object Oriented Programming  
**Set:** Abstraction Homework  
**Problem:** 5  
**Source status:** Verified assignment

## Description

Predict the output of the supplied class program and name the language feature that permits the same function name with different parameter lists.

## Input

The supplied MyClass methods and main calls below.

## Output

The output and the name of the feature.

## Requirements and constraints

Predict before execution.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class MyClass {
private:
    int x, y, z;
public:
    void set(int x) { cout << "A\n"; }
    void set(double x) { cout << "B\n"; }
    void set(int x, int y) { cout << "C\n"; }
    void set(int x, int y, int z) { cout << "D\n"; }
    void get(int &a) { a=x; cout << "E\n"; }
    void get(int &a, int &b) { a=x; b=y; cout << "F\n"; }
};
int main() {
    MyClass m;
    m.set(1);
    m.set(1.5);
    m.set(1,2);
    m.set(1,2,3);
    return 0;
}
~~~

## Source

- [Abstraction Homework](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875641#overview) - Assignment item 5: Guess the Function Calls. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

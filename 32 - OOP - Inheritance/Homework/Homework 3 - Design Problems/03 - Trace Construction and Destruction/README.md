# 3 - Trace Construction and Destruction

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 32 - OOP: Inheritance  
**Set:** Inheritance Homework 3  
**Problem:** 3  
**Source status:** Verified assignment

## Description

Predict the supplied program output.

## Input

The supplied A, B, C classes and main below.

## Output

All printed lines in order.

## Requirements and constraints

Trace the program before running it.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class A {
public:
    A(string str) { cout << "Constructor " << str << "\n"; }
    ~A() { cout << "~A\n"; }
};
class B {
    A a1;
public:
    B() : a1(A("Most")) { cout << "Constructor B" << "\n"; }
    ~B() { cout << "~B\n"; }
};
class C : public B {
    A a2;
public:
    C() : a2(A("Ali")) { cout << "Constructor C" << "\n"; }
    ~C() { cout << "~C\n"; }
};
int main() {
    C c1;
    C* c2;
    return 0;
}
~~~

## Source

- [Inheritance Homework 3](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875775#overview) - Homework 3: What is the output?, 2:47. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

# 5 - Investigate Base and Derived Pointers

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 32 - OOP: Inheritance  
**Set:** Inheritance Homework 3  
**Problem:** 5  
**Source status:** Verified assignment

## Description

Investigate the supplied main, predict its behavior, and discuss which x/y/z members are visible through each object/pointer and inside hello.

## Input

The supplied A/B/C hierarchy, hello, and main below.

## Output

Predictions and visibility analysis.

## Requirements and constraints

Analyze the existing pointer types, member calls, and deletions as written.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class A {
public:
    int x=1;
    void print() { cout << "I am A\n"; }
    ~A() { cout << "A Destructor\n"; }
};
class B : public A {
public:
    int y=2;
    void print() { cout << "I am B\n"; }
    ~B() { cout << "B Destructor\n"; }
};
class C : public B {
public:
    int z=3;
    void print() { cout << "I am C\n"; }
    ~C() { cout << "C Destructor\n"; }
};
void hello(A* a) {
    a->x=1;
    a->print();
}
int main() {
    C* c=new C();
    A* a_points_c=new C();
    hello(c);
    hello(a_points_c);
    c->print();
    a_points_c->print();
    delete c;
    delete a_points_c;
    return 0;
}
~~~

## Source

- [Inheritance Homework 3](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875775#overview) - Homework 5: Investigate, 3:03. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

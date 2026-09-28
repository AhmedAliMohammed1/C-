# 4 - Find Name Lookup Problems

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 32 - OOP: Inheritance  
**Set:** Inheritance Homework 3  
**Problem:** 4  
**Source status:** Verified assignment

## Description

Find the problems in the supplied multiple-inheritance class, explain them, and correct them with appropriate syntax.

## Input

The supplied A, B, C definitions below.

## Output

Explanations and corrections.

## Requirements and constraints

Analyze both the field/function references and the salary function.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class A {
protected:
    int px;
    void pf() { }
};
class B {
protected:
    int px;
    void pf() { }
    int GetSalary() { return 100; }
};
class C : public A, public B {
public:
    void f() {
        px=1;
        pf();
    }
    int GetSalary() {
        int parent_salary=GetSalary();
        return 2*parent_salary+1;
    }
};
~~~

## Source

- [Inheritance Homework 3](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875775#overview) - Homework 4: Guess the problem, 2:51. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

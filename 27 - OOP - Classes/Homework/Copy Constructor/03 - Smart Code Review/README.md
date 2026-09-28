# 3 - Smart Code Review

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Copy Constructor Homework  
**Problem:** 3  
**Source status:** Verified assignment

## Description

Predict what happens with the supplied pointer-owning class, explain it, prevent the misuse, and give review advice.

## Input

The supplied ClassA below.

## Output

An explanation and safer class behavior.

## Requirements and constraints

Review the given ownership-related getter/setter usage.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class ClassA {
private:
    int *val;
public:
    ClassA(int v) { val=new int; *val=v; }
    ~ClassA() { delete val; val=NULL; }
    int *GetVal() { return val; }
    void SetVal(int *val) { this->val=val; }
};
int main() {
    ClassA a1(10);
    ClassA a2(20);
    a2.SetVal(a1.GetVal());
    return 0;
}
~~~

## Source

- [Class Copy Constructor Homework](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875685#overview) - Assignment item 3: Smart Code Review. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

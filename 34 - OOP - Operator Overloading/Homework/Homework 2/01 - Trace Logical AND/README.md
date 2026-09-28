# 1 - Trace Logical AND

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 34 - OOP: Operator Overloading  
**Set:** Operator Overloading Homework 2  
**Problem:** 1  
**Source status:** Verified assignment

## Description

Predict and run the supplied built-in/overloaded && program, compare the results, and give a coding tip.

## Input

The Boolean class and calls supplied below.

## Output

The observed print sequence and explanation.

## Requirements and constraints

Analyze the program as written before running it.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class Boolean {
private:
    bool is_true;
public:
    Boolean(bool is_true) : is_true(is_true) { }
    bool operator&&(const Boolean& other) const {
        return this->is_true && other.is_true;
    }
};
bool T() { cout << "T\n"; return true; }
bool F() { cout << "F\n"; return false; }
Boolean TC() { cout << "TC\n"; return Boolean(true); }
Boolean FC() { cout << "FC\n"; return Boolean(false); }
int main() {
    F() && T();
    FC() && TC();
}
~~~

## Source

- [Operator Overloading Homework 2](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875901#overview) - Homework 1: Operator &&, 0:33. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

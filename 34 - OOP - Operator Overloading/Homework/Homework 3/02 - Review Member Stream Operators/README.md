# 2 - Review Member Stream Operators

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 34 - OOP: Operator Overloading  
**Set:** Operator Overloading Homework 3  
**Problem:** 2  
**Source status:** Verified assignment

## Description

Add two lines that use the supplied member operators to read and write x/y, then give design advice.

## Input

The MyPair class with first/second values, its shown member operator declarations, and two objects x and y.

## Output

Working read/write calls and review advice.

## Requirements and constraints

Use the shown declarations for the requested read/write calls, then provide design advice. The source slide spells both shown operators >> even though its text discusses <<; this discrepancy is retained.

## Supplied MyPair member-operator excerpt

This is assignment material to analyze, not a solution.


~~~cpp
// These are the shown member functions of MyPair:
void operator>>(istream& input) {
    input >> first >> second;
}
void operator>>(ostream& output) {
    output << first << second;
}
// The supplied main begins:
int main() {
    MyPair x, y;
    // Add the requested reading and writing lines.
}
~~~

## Source

- [Operator Overloading Homework 3](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875923#overview) - Homework 2: Reading and Writing, 0:39. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

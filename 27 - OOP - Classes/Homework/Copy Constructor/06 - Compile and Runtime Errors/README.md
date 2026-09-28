# 6 - Compile and Runtime Errors

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Copy Constructor Homework  
**Problem:** 6  
**Source status:** Verified assignment

## Description

Identify which lines fail to compile and which can cause runtime errors, explaining each.

## Input

The supplied string/reference program below.

## Output

A line-by-line classification and explanations.

## Requirements and constraints

Do not silently correct the program before analyzing it.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
void print1(string &s) { }
void print2(const string &s) { }
string msg1() { string x="aa"; return x; }
const string &msg2() { return "aa"; }
const string &msg3() { string x="aa"; return x; }
int main() {
    string hello("Hello");
    print1(hello);
    print1(string("World"));
    print1("!");
    print2(hello);
    print2(string("World"));
    print2("!");
    string a1=msg1();
    string &a2=msg1();
    const string &a3=msg1();
    string a=msg2();
    string b=msg2();
    return 0;
}
~~~

## Source

- [Class Copy Constructor Homework](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875685#overview) - Assignment item 6: Compile and Runtime Errors. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

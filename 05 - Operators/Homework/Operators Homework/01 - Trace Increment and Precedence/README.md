# 1 - Trace Increment and Precedence

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 05 - Operators  
**Set:** Operators Homework  
**Problem:** 1  
**Source status:** Verified assignment

## Description

Predict the supplied program's output, including its increment operations and grouped arithmetic.

## Input

No console input; supplied code.

## Output

The printed values in order.

## Requirements and constraints

Predict first, then execute to compare.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
int a=0, b=1;
cout << a++ << "\n";
cout << ++a << "\n";
a += 2*b+1;
b = ++a*2;
cout << a << " " << b << "\n";
b = a;
a = 12+a/3/2-2*2;
cout << a << "\n";
a = b;
a = ((12+a)/3/2-2)*2;
cout << a << "\n";
~~~

## Source

- [Operators Homework- 3 Easy to Medium Challenges](https://www.udemy.com/course/cpp-4skills/learn/lecture/22870923#overview) - Assignment item 1: Trace Increment and Precedence. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

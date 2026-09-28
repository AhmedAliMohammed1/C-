# 3 - Trace Arithmetic and Assignment

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 05 - Operators  
**Set:** Operators Homework  
**Problem:** 3  
**Source status:** Verified assignment

## Description

Predict every line printed by the division, increment, decrement, and compound assignment statements.

## Input

No console input; supplied code.

## Output

All printed values in order.

## Requirements and constraints

The lecture warns against combining multiple variable updates in one expression; examine the given code as an exercise.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
int a=210;
a /= 2;
cout << a << "\n";
cout << (a /= 3) << "\n";
cout << (a /= 5) << "\n";
cout << (a /= 7) << "\n";
cout << (2+3)*(5-(-3))/5/8 << "\n";
a=10;
cout << a++ + 10 << "\n";
cout << ++a + 10 << "\n";
cout << a-- + 10 << "\n";
cout << --a + 10 << "\n";
int b=20;
cout << a++ + ++b << "\n";
cout << a << "\n";
++a += 10;
cout << a << "\n";
~~~

## Source

- [Operators Homework- 3 Easy to Medium Challenges](https://www.udemy.com/course/cpp-4skills/learn/lecture/22870923#overview) - Assignment item 3: Trace Arithmetic and Assignment. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

# 1 - Guess Logical Output

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 05 - Operators  
**Set:** Logical Operators Homework  
**Problem:** 1  
**Source status:** Verified assignment

## Description

Predict the results printed by the supplied logical expressions, then run the program to compare.

## Input

No console input; supplied values and expressions.

## Output

The printed boolean results.

## Requirements and constraints

Account for precedence and parentheses in the given expressions.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
int a=10, b=20, c=30, d=40;
cout << (a+b == c) << "\n";
cout << (a+b+c >= 2*d) << "\n";
cout << (a>5 || d<30) << "\n";
cout << (a>5 && d<30) << "\n";
cout << (a<=b && b<=c) << "\n";
cout << (a>5 && d<30 || c-b==10) << "\n";
cout << (a<=b && b<=c && c<=d) << "\n";
cout << (a>5 && d<30 || c>d || d%2==0) << "\n";
cout << (a>5 && d<30 || c>d && d%2==0) << "\n";
cout << (a==10 || b!=20 && c!=30 || d!=40) << "\n";
cout << ((a==10 || b!=20) && c!=30 || d!=40) << "\n";
~~~

## Source

- [Logical Operators Homework- 3 Easy to Medium Challenges](https://www.udemy.com/course/cpp-4skills/learn/lecture/22870931#overview) - Homework 1: Guess the output, slide 2. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

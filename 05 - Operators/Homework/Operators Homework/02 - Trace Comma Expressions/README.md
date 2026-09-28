# 2 - Trace Comma Expressions

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 05 - Operators  
**Set:** Operators Homework  
**Problem:** 2  
**Source status:** Verified assignment

## Description

Follow the comma-separated updates of a, b, and c and predict the final printed value.

## Input

No console input; supplied code.

## Output

The value printed by the expression.

## Requirements and constraints

Evaluate the supplied program as written before checking it by execution.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
int a=1, b=1, c;
cout << (c=a+b, a=b, b=c,
         c=a+b, a=b, b=c,
         c=a+b, a=b, b=c,
         c=a+b, a=b, b=c) << endl;
~~~

## Source

- [Operators Homework- 3 Easy to Medium Challenges](https://www.udemy.com/course/cpp-4skills/learn/lecture/22870923#overview) - Assignment item 2: Trace Comma Expressions. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

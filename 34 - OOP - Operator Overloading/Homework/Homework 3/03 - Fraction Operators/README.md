# 3 - Fraction Operators

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 34 - OOP: Operator Overloading  
**Set:** Operator Overloading Homework 3  
**Problem:** 3  
**Source status:** Verified assignment

## Description

Implement Fraction with numerator and denominator so the demonstrated construction, copying, multiplication, compound multiplication, and printing work.

## Input

Fraction values and operation calls.

## Output

Fraction results displayed in numerator/denominator form.

## Requirements and constraints

Support Fraction(n,d), integer*Fraction, Fraction*Fraction, *=, copying, and stream insertion. Simplifying fractions is optional; the lecture permits using GCD for it.

## Example

For the supplied calls, the slide prints 3/8, 3/4, 9/32, and 81/1024.

## Required Fraction usage

This is assignment material to analyze, not a solution.


~~~cpp
Fraction f1(3,8);
Fraction f2=2*f1;
Fraction f3=f1*f2;
Fraction f4=f3;
f4 *= f4;
cout << f1 << "\n" << f2 << "\n" << f3 << "\n" << f4;
~~~

## Source

- [Operator Overloading Homework 3](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875923#overview) - Homework 3: Fraction, 0:55. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

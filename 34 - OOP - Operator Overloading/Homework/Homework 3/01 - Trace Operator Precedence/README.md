# 1 - Trace Operator Precedence

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 34 - OOP: Operator Overloading  
**Set:** Operator Overloading Homework 3  
**Problem:** 1  
**Source status:** Verified assignment

## Description

Predict the supplied program output and check the precedence of its overloaded operator.

## Input

The source program.

## Output

The predicted output and precedence explanation.

## Requirements and constraints

Check the language precedence before tracing.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class MyNumber {
public:
    int num;
    MyNumber(int num) : num(num) { }
};
MyNumber operator^(const MyNumber& c1, int pow) {
    int res=1;
    while (pow--)
        res *= c1.num;
    return MyNumber(res);
}
MyNumber operator+(const MyNumber& c1, const MyNumber& c2) {
    return MyNumber(c1.num+c2.num);
}
int main() {
    MyNumber x(2);
    MyNumber res1=x^3;
    MyNumber res2=1+x^3;
    cout << res1.num << " " << res2.num;
}
~~~

## Source

- [Operator Overloading Homework 3](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875923#overview) - Homework 1: Guess the output, 0:10. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

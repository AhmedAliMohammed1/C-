# 14 - Trace Recursive Calls

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 12 - Recursive Functions  
**Set:** Recursive Functions Homework 2 - Problems 9 to 17  
**Problem:** 14  
**Source status:** Verified assignment

## Description

Trace the supplied recursive program, then exchange its indicated statements and trace it again.

## Input

Supplied code.

## Output

Both predicted outputs.

## Requirements and constraints

Do not run the code. Trace by hand what the function does and what happens after swapping the printing statement (slide line 6) and recursive call (slide line 7).

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
void do_something(int n) {
    if (n) {
        cout << n % 10;              // original slide line 6
        do_something(n / 10);         // original slide line 7
    }
}
int main() {
    do_something(123456);
    return 0;
}
~~~

## Source

- [Recursive Functions Homework 2 - 9 Medium to Hard Challenges](https://www.udemy.com/course/cpp-4skills/learn/lecture/22874635#overview) - Homework 14: Trace, 1:08. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

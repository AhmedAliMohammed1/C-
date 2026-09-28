# 10 - Answer Getter Styles

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Const Static and Friend Homework 2 - Problems 5 to 10  
**Problem:** 10  
**Source status:** Verified assignment

## Description

Compare the supplied alternatives for returning an Answer object's text.

## Input

The getter declarations from the slide.

## Output

A comparison of the alternatives.

## Requirements and constraints

Discuss the given return styles rather than implementing unrelated features.

## Getter alternatives to compare

This is assignment material to analyze, not a solution.


~~~cpp
// Four alternative getters, each returning the answer_text field:
string GetAnswerText() { return answer_text; }
string GetAnswerText() const { return answer_text; }
string& GetAnswerText() const { return answer_text; }
const string& GetAnswerText() const { return answer_text; }
~~~

## Source

- [Class Const, Static & Friend Homework 2](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875661#overview) - Homework 10: Returning objects, 7:04. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

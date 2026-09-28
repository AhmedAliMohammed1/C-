# 9 - Trace and Fix Memory Leaks

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Constructor and Destructor Homework  
**Problem:** 9  
**Source status:** Verified assignment

## Description

Predict the program output, find its two memory leaks, and fix them.

## Input

Class A has int* x. Its constructor prints A constructor, allocates a new int, and stores 10. Its destructor prints A destructor and does not release x. main allocates an A with new and ends without deleting it.

## Output

Predicted output and a corrected program.

## Requirements and constraints

Identify both leaks in this supplied lifecycle.

## Source

- [Class Constructor & Destructor Homework](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875649#overview) - Assignment item 9: Trace and Fix Memory Leaks. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

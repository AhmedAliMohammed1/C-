# 2 - Image Editor

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 32 - OOP: Inheritance  
**Set:** Inheritance Homework 4  
**Problem:** 2  
**Source status:** Verified assignment

## Description

Describe the supplied image-editor UML and discuss its implementation.

## Input

The class relationships and members listed below.

## Output

A diagram explanation and implementation/design thoughts.

## Requirements and constraints

Use the supplied model; the course later implements it in Polymorphism Practice 1.

## Assignment context

The supplied model has these relationships and members:

- ImageEditor aggregates zero or more Shape objects; its protected shapes member is a Shape collection, and it has public Draw().
- Shape has protected color and public ComputeArea(): double and Draw().
- Rectangle and Circle derive from Shape.
- Rectangle has private top_left and right_bottom points and supplies ComputeArea()/Draw().
- Circle has private radius and center and supplies ComputeArea()/Draw().
- AdobePhotoshop derives from ImageEditor, supplies Draw(), and adds EnlargeShapes(percent: double).

Describe the UML and give implementation thoughts. The later practice lecture implements this same model; it is a continuation, not a duplicate editor assignment.

The practice also asks how add_shape can retain an independent copy of an incoming Shape object without knowing its concrete type. The caller may destroy its original object; the editor must retain valid stored shapes and release the shapes it owns when destroyed. This is part of the same editor exercise, not a second editor project.

## Source

- [Inheritance Homework 4](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875777#overview) - Homework 2: Image Editor, 0:39. Reviewed through the signed-in Edge video/transcript.
- [Polymorphism Practice 1](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875805#overview) - Polymorphism Practice 1 - implementation of the same image-editor model.

[Set index](../README.md) | [Section index](../../../README.md)

# 4 - Validation Bugs

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Constructor and Destructor Homework  
**Problem:** 4  
**Source status:** Verified assignment

## Description

Find and fix one bug in OurPrice, then identify another potential bug and give coding advice for each.

## Input

The supplied OurPrice class below.

## Output

Corrections and review feedback.

## Requirements and constraints

Review the code as supplied; do not assume all public operations preserve the intended state.

## Supplied code to examine

This is assignment material to analyze, not a solution.


~~~cpp
class OurPrice {
private:
    int price;
    OurPrice(int price) : price(price) { }
public:
    int GetPrice() { return price; }
    void SetPrice(int price) {
        if (price < 10)
            price=0;
        this->price=price;
    }
    int SomeFun() {
        int price=10;
        int price2=20;
        int price3=20;
        return price + price2 + price3;
    }
};
~~~

## Source

- [Class Constructor & Destructor Homework](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875649#overview) - Assignment item 4: Validation Bugs. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

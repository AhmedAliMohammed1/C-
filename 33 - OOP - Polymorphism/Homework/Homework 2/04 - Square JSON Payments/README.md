# 4 - Square JSON Payments

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 33 - OOP: Polymorphism  
**Set:** Polymorphism Homework 2  
**Problem:** 4  
**Source status:** Verified assignment

## Description

Extend the generic payment service to use the supplied Square API accepting a JSON string.

## Input

The same transaction data and the supplied JSON format below.

## Output

The simulated Square payment result.

## Requirements and constraints

Make minimal changes and leave the Craigslist core unchanged. Use the stated JSON schema; no live payment is required.

## Assignment context

The added simulated interface is:

~~~cpp
class SquarePaymentAPI {
public:
    static bool WithDrawMoney(string JsonQuery);
};
~~~

Use this JSON structure (sample data from the slide):

~~~json
{
  "card_info": {
    "CCV": 333,
    "DATE": "09-2021",
    "ID": "11-22-33-44"
  },
  "money": 20.5,
  "user_info": ["mostafa", "canada"]
}
~~~

user_info contains the name and address; card_info contains the three stated card fields.

[Payment Services interfaces and transaction data](../03%20-%20Generic%20Payment%20Services/README.md)

## Source

- [Polymorphism Homework 2](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875835#overview) - Homework 4: Extended Payment Services, 5:52. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

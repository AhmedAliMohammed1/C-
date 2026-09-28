# 3 - Generic Payment Services

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 33 - OOP: Polymorphism  
**Set:** Polymorphism Homework 2  
**Problem:** 3  
**Source status:** Verified assignment

## Description

Implement a generic payment function that can use the supplied PayPal and Stripe interfaces.

## Input

Transaction information: amount, name, address, card ID, expiry date, and CCV; supplied provider interfaces below.

## Output

A boolean payment result through the generic site function.

## Requirements and constraints

Do not change the provider APIs. The core Craigslist payment code must not depend on a specific provider. These are course simulation APIs.

## Supplied simulation interfaces

This is assignment material to analyze, not a solution.


~~~cpp
class PayPalCreditCard {
public:
    string name, address, id, expire_date;
    int ccv;
};
class PayPalOnlinePaymentAPI {
public:
    void SetCardInfo(const PayPalCreditCard* const card) { }
    bool MakePayment(double money) { return true; }
};
class StripeUserInfo {
public:
    string name, address;
};
class StripeCardInfo {
public:
    string id, expire_date;
};
class StripePaymentAPI {
public:
    static bool WithDrawMoney(StripeUserInfo user,
                              StripeCardInfo card, double money) {
        return true;
    }
};
class TransactionInfo {
public:
    double required_money_amount;
    string name, address, id, expire_date;
    int ccv;
};
class Craigslist {
public:
    bool Pay(TransactionInfo info) {
        // Assignment: add generic payment behavior.
    }
};
~~~

## Source

- [Polymorphism Homework 2](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875835#overview) - Homework 3: Payment Services, PayPal 4:05, Stripe 4:39, transaction 5:17. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

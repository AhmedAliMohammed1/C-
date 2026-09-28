# 1 - Explain ATM UML

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 33 - OOP: Polymorphism  
**Set:** Polymorphism Homework 1  
**Problem:** 1  
**Source status:** Verified assignment

## Description

Read and explain the supplied ATM class diagram.

## Input

ATM hardware, transactions, bank database, and account relationships described below.

## Output

An explanation of the classes and relationships.

## Requirements and constraints

Describe the supplied diagram; an implementation is not required.

## Assignment context

Supplied diagram data, transcribed from the assignment slide:

| Connection | Marker/label | Multiplicity at first endpoint | Multiplicity at second endpoint |
|---|---|---|---|
| ATM - Keypad | Filled diamond at ATM | 1 | 1 |
| ATM - DepositSlot | Filled diamond at ATM | 1 | 1 |
| ATM - CashDispenser | Filled diamond at ATM | 1 | 1 |
| ATM - Screen | Filled diamond at ATM | 1 | 1 |
| ATM - BankDatabase | Authenticates user against; arrow to database | 1 | 1 |
| ATM - Transaction | Executes; arrow to Transaction | 1 | 0..1 |
| Transaction - BankDatabase | Accesses/modifies an account balance through; arrow to database | 0..1 | 1 |
| BankDatabase - Account | Contains; filled diamond at database | 1 | 0..1 |
| Transaction - Screen | Arrow to Screen | 0..1 | 1 |
| Withdrawal - Keypad | Arrow to Keypad | 0..1 | 1 |
| Withdrawal - CashDispenser | Arrow to CashDispenser | 0..1 | 1 |
| Deposit - Keypad | Arrow to Keypad | 0..1 | 1 |
| Deposit - DepositSlot | Arrow to DepositSlot | 0..1 | 1 |

Withdrawal, Deposit, and BalanceInquiry each have an open triangle pointing to the italicized Transaction class. The slide prints 0..1 next to Account; it is retained as shown. Explain the classes, markers, arrows, and multiplicities in this supplied model. The scenario supports checking a balance, withdrawing money, and depositing money.

## Source

- [Polymorphism Homework 1](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875813#overview) - Homework 1: Explain ATM-Machine UML, 0:33 (full diagram slide). Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

# 1 - Expedia Reservations

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 36 - Project #6: Expedia.com  
**Set:** Project 6 - Expedia  
**Problem:** 1  
**Source status:** Partial source - needs original material

> **Source material needed:** The instructor-provided dummy airline, hotel, and payment API code is still needed to match the required provider interfaces. The project feature requirements are verified; the full API attachments are blocked in Edge. This README is not a complete standalone statement yet.

## Description

Build a customer console for signup/login, profile viewing, constructing itineraries, booking flights/hotels, listing existing itineraries, and logout. The initial version supports direct, one-way flights and hotel stays.

## Input

Account data and menu choices. For a flight, receive origin/destination, dates, and counts of adults, children, and infants. For a hotel, receive arrival/departure dates, country/city, and counts of adults and children. Receive selections from the available results and a choice of debit or credit card for payment.

## Output

Search results, itinerary details/totals, booking outcomes, and saved-in-memory customer itineraries.

## Requirements and constraints

- Use the supplied simulated Air Canada, Turkish Airlines, Hilton, and Marriott APIs. Their interfaces use different types, names, parameter orders, and static/instance methods; preserve the supplied provider contracts.
- Let a customer repeatedly add a flight or hotel before finishing an itinerary. A customer may hold several itineraries, and each itinerary may contain several reservations.
- An itinerary total is the sum of its reservation costs. A hotel stay contributes its number of nights multiplied by its nightly rate.
- Support PayPal, Stripe, and Square, with one payment provider active at a time. The Square interface receives a JSON query.
- Call local dummy APIs. Remote services and file persistence are outside this assignment; dummy data may be used where convenient.
- Reproduce the customer flow shown in the demo using simulated data. Search dates need not match the dates returned by the dummy providers; dates do not determine whether a reservation succeeds.
- If a later reservation fails, cancel earlier successful reservations in that itinerary and reverse the corresponding payment.
- Demonstrate failure using a controlled dummy provider response. The instructor permits finishing the normal customer flow before adding the cancellation demonstration. Implement the application calls to cancellation; realistic provider cancellation internals are outside the assignment.
- Several users may be supported in memory. Restoring itineraries after logout and another login is outside the minimum demo scope.
- Make room for later reservation/provider types. Cars, cruises, and other package types are future extensions; implement flights and hotels in the initial version. Admin functionality is outside the required customer demo.

## Example

The lecture's cost example combines a flight costing 1,000, another costing 500, and a hotel stay costing 1,000. The itinerary total is 2,500.

## Source

- [Description](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875943#overview) - Assignment item 1: Expedia Reservations. Reviewed through the signed-in Edge video/transcript.
- [Project#6: Expedia problem statement](https://www.udemy.com/course/cpp-4skills/learn/#questions/16553962) - Instructor replies clarify the dummy dates/data, customer-only scope, in-memory users, and staged cancellation demonstration. This is the working learner view of the lecture's **QA Discussion** resource.

## Original material to recover

Open Description, then Resources → **50 Project #6 - Expedia.zip**. The exact dummy airline, hotel, and payment API definitions remain necessary to match the supplied provider contracts. The normal archive download was blocked by Edge during the review. The Q&A verifies the intended simulation behavior but does not supply a complete replacement archive.

[Set index](../README.md) | [Section index](../../README.md)

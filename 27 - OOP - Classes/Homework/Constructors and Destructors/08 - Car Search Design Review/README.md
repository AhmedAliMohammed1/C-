# 8 - Car Search Design Review

**Course:** Mastering 4 Critical SKILLS Using C++ 17  
**Section:** 27 - OOP: Classes  
**Set:** Class Constructor and Destructor Homework  
**Problem:** 8  
**Source status:** Verified assignment

## Description

Review the CarSpecs and AutoTrader implementation and explain what makes its design poor despite working correctly.

## Input

The supplied CarSpecs fields/accessors and AutoTrader search_match design below.

## Output

Design feedback.

## Requirements and constraints

Focus on future changes and responsibilities rather than runtime correctness.

## Supplied CarSpecs and search design

This is assignment material to analyze, not a solution.


~~~cpp
// The slide shows these fields and accessor declarations;
// their folded bodies are assumed to work correctly.
class CarSpecs {
private:
    string trim;
    string engine_type;
    pair<int,int> horsepower;
    string steering_ratio;
    // and more specification fields
public:
    string& GetEngineType();
    void SetEngineType(string& engineType);
    pair<int,int> GetHorsepower();
    void SetHorsepower(pair<int,int> horsepower);
    string& GetSteeringRatio();
    void SetSteeringRatio(string& steeringRatio);
    string& GetTrim();
    void SetTrim(string& trim);
};
class AutoTrader {
private:
    vector<CarSpecs> current_cars_vec;
public:
    void LoadDatabase(); // fills current_cars_vec
    bool search_match(CarSpecs& query_car) {
        for (auto available_car : current_cars_vec) {
            if (available_car.GetEngineType() != query_car.GetEngineType()) continue;
            if (available_car.GetHorsepower() != query_car.GetHorsepower()) continue;
            if (available_car.GetSteeringRatio() != query_car.GetSteeringRatio()) continue;
            if (available_car.GetTrim() != query_car.GetTrim()) continue;
            return true;
        }
        return false;
    }
};
~~~

## Assignment context

The assignment assumes this code works. Review the design visible in the fields, accessor interface, and matching function; the getter/setter bodies are folded on the slide and are not supplied here.

## Source

- [Class Constructor & Destructor Homework](https://www.udemy.com/course/cpp-4skills/learn/lecture/22875649#overview) - Homework 8: Car Specs Search, 3:12. Reviewed through the signed-in Edge video/transcript.

[Set index](../README.md) | [Section index](../../../README.md)

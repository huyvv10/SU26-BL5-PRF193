#pragma once
#include <iostream>
#include <string>

class Student {
private:
    int id;
    std::string name;
    int age;
    float score;
public:	
    Student();
    Student(int id, std::string name, int age, float score);
    
    // Getter / Setter
    int getId() const;
    void setName(std::string newName);
    std::string getName() const;
    void setAge(int newAge);
    int getAge() const;
    void setScore(float newScore);
    float getScore() const;
        
    void inputStd();
    void display() const;
};
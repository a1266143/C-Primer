//
//  Person.cpp
//  C++PrimerExercise
//
//  Created by Duke on 2020/4/1.
//  Copyright © 2020 Duke. All rights reserved.
//

#include "Person.hpp"

void Person::setName(std::string name){
    this->name = name;
}

void Person::setAge(int age){
    this->age = age;
}

int Person::getAge(){
    return this->age;
}

std::string Person::getName(){
    testPrivate();
    return this->name;
}

void Person::testPrivate(){
    std::cout<<"调用了私有方法"<<std::endl;
}

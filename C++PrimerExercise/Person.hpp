//
//  Person.hpp
//  C++PrimerExercise
//
//  Created by Duke on 2020/4/1.
//  Copyright © 2020 Duke. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Person{
    int age;
    std::string name;
    void testPrivate();
    
public:
    void setName(std::string name);
    void setAge(int age);
    std::string getName();
    int getAge();
    //构造方法
    Person(std::string name,int age):name(name),age(age){}
    Person() = default;
};

#endif /* Person_hpp */

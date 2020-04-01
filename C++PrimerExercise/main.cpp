//
//  main.cpp
//  C++PrimerExercise
//
//  Created by Duke on 2020/3/30.
//  Copyright © 2020 Duke. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
#include "Friend.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<< "Hello , world2";
    std::cout << "Hello, World!\n";
    Person person("xiaojun",29);
    std::cout<<"name="<<person.getName()<<std::endl;
    std::cout<<"age="<<person.getAge()<<std::endl;
    Friend fff(29,"??");
    outOfClassFunction(fff);
    return 0;
}

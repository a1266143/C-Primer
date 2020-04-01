//
//  copy.cpp
//  C++PrimerExercise
//  copy:类的拷贝：1.初始化变量 2.以值的方式传递 3.返回一个对象
//  Created by Duke on 2020/4/1.
//  Copyright © 2020 Duke. All rights reserved.
//

#include <stdio.h>
#include "Person.hpp"

//1.初始化变量
void initVar(){
    Person person("xiaojun",29);
}

//2.以值的方式传递
void givePerson(Person person){
    
}

void test(){
    Person person("xiaojun",29);
    givePerson(person);
    //上面调用givePerson的操作会执行拷贝操作
}

//返回一个对象
Person getPerson(){
    Person person("xiaojun",29);
    return person;
    //上面的返回person会执行拷贝操作
}

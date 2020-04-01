//
//  Friend.cpp
//  C++PrimerExercise
//  如果想在类的外部函数访问类的私有数据成员，可以使用friend关键字在类中声明一下函数为友元函数
//  Created by Duke on 2020/4/1.
//  Copyright © 2020 Duke. All rights reserved.
//

#include "Friend.hpp"
#include <iostream>

void Friend::setName(std::string name){
    this->friendName = name;
}

//友元函数访问类内部的数据成员,前提是要传入一个友元宿主进来
void outOfClassFunction(Friend f){
    std::cout<<"friendFunction"<<",outOfClass,"<<"friend.name="<<f.friendName<<",friend.age="<<f.friendAge<<std::endl;
}

//
//  Friend.hpp
//  C++PrimerExercise
//
//  Created by Duke on 2020/4/1.
//  Copyright © 2020 Duke. All rights reserved.
//

#ifndef Friend_hpp
#define Friend_hpp

#include <stdio.h>
#include <string>

class Friend{
    int friendAge;
    std::string friendName;
public:
    std::string getName(){
        return this->friendName;
    }
    void setName(std::string name);
    Friend(int friendAge,std::string friendName):friendAge(friendAge),friendName(friendName){
        
    }
    Friend() = default;
    
    friend void outOfClassFunction(Friend f);
};

void outOfClassFunction(Friend f);//类的外部函数，需要访问类内部的数据成员

#endif /* Friend_hpp */

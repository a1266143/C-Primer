//
//  test.cpp
//  C++PrimerExercise
//  struct与class的区别：
//  仅在于访问控制权限的区别：
//  struct默认是public class默认是private
//  Created by Duke on 2020/4/1.
//  Copyright © 2020 Duke. All rights reserved.
//

#include <stdio.h>

class Test{
    int name;//默认是private
    void privateMethod();
public:
    void test();
};

struct Test2{
    int name;//默认是public
    void publicMethod();//可以直接通过实例对象进行调用
};

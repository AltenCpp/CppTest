#include <iostream>
#include "polygon.h"

bool testEq(std::string title,Shape &a, Shape &b) {
    bool res = false;
    std::cout << "TEST EQ: " << title;
    if (a == b){
        std::cout << "True" << std::endl;
        res = true;
    } else {
        std::cout << "False" << std::endl;
        res = false;
    }
    return res;
}

int main(){
    Rectangle rectA(2,4);
    Rectangle rectB(5,5);
    Square sq(5);
    Circle cirk(10);
    
    bool res=true;
    res &= testEq("Test rectA==rectA: ",rectA,rectA);
    res &= testEq("Test rectB==rectB: ",rectB,rectB);
    res &= testEq("Test sq==rectB: ",sq,rectB);
    res &= !testEq("Test sq==cirk: ",sq,cirk);
    res &= !testEq("Test rectA==rectB: ",rectA,rectB);
    
    return (res) ? 0 : 1;
}
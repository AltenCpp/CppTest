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

bool testNotEq(std::string title,Shape &a, Shape &b) {
    bool res = false;
    std::cout << "TEST NOT EQ: " << title;
    if (a == b){
        std::cout << "False" << std::endl;
        res = false;
    } else {
        std::cout << "True" << std::endl;
        res = true;
    }
    return res;
}

int main(){
    Rectangle rectA(2,4);
    Rectangle rectB(5,5);
    Rectangle rectC(2,4);
    Square sq(5);
    Circle cirk(10);
    
    bool res=true;
    res &= testEq("Test rectA == rectA: ",rectA,rectA);
    res &= testEq("Test rectB == rectB: ",rectB,rectB);
    res &= testEq("Test rectA == rectC: ",rectA,rectC);
    res &= testEq("Test rectB == sq: ",rectB,sq);
    res &= testNotEq("Test cirk != sq: ",cirk,sq);
    res &= testNotEq("Test rectA != rectB: ",rectA,rectB);
    
    return (res) ? 0 : 1;
}
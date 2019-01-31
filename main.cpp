#include"priorityQueue.h"
#include<iostream>

int main(){
    priorityQueue a(10);
    a.push(10);
    a.push(30);
    a.push(25);
    a.push(35);
    a.push(5);
    a.push(50);
    a.push(20);
    a.push(40);
    a.push(15);
    a.push(45); 

    a.out();
    a.pop();
    a.pop();

    std::cout<<std::endl;
    a.out();

    int s = a.top();
    std::cout<<std::endl<<s;

    return 0;
}
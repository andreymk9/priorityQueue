#ifndef pQ
#define pQ

#include"priorityQueue.cpp"
#include<iostream>

priorityQueue::priorityQueue(const int& val){
    arrSize = val + 1;
    ptr = new int[arrSize];
    qSize = 0;
}

void priorityQueue::push(const int& val){
    ++qSize;
    ptr[qSize] = val;
    int temp;
    int j = qSize;
    for(int i = j/2; i != 0; i = i/2){
        if(ptr[j] < ptr[i]){
            temp = ptr[i];  
            ptr[i] = ptr[j];
            ptr[j] = temp;
            j = i; 
        }    
    }
    //++qSize;
}
void priorityQueue::out(){
    for(int i = 1; i < qSize; ++i){
        std::cout<<ptr[i]<<" ";
    }
}

void priorityQueue::pop(){
    int ix = 1;
    int temp;
    ptr[ix] = ptr[qSize];
    ptr[qSize] = 0;
    --qSize;
    for(int i = ix + 1; i < qSize; i *= 2){
        if(ptr[i] <= ptr[i + 1] && ptr[i] < ptr[ix]){
            temp = ptr[i];
            ptr[i] = ptr[ix];
            ptr[ix] = temp;
            ix = i;
        }
        if(ptr[i] > ptr[i + 1] && ptr[i + 1] < ptr[ix]){
            temp = ptr[i + 1];
            ptr[i + 1] = ptr[ix];
            ptr[ix] = temp;
            ix = i + 1;
        }
    }
}

#endif 

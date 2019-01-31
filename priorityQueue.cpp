
class priorityQueue{
        int* ptr = nullptr;
        int qSize;
        int arrSize;
    public:
        priorityQueue(const int& val = 50);
        ~priorityQueue() {delete [] ptr;}
        void push(const int& val);
        void pop();
        int top() {return ptr[1];}
        bool empty() {if(qSize == 0) return 1; return 0;}
        int size() {return qSize;}
        int maxSize() {return arrSize;}
        void out();
};
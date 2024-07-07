#include <iostream>
// include the stack into the code
#include <stack>
// use vectors
#include <vector>


class Parser{
    public:



};





int main(){
    std::stack<int> stack;
    stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
   
    while (!stack.empty()) {
        std::cout << stack.top() <<" ";
        stack.pop();
    }

    
    return 0;
}
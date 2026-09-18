class MyStack {
    private:
    queue<int>a ; 
    queue<int>b; 
public:
    MyStack() {
        
    }
    void push(int x) {
        b.push(x);                   // pushing x into a 
        while(!a.empty()){
            b.push(a.front());           // jb tk a empty nhi hora b me push krde b mein 
            a.pop() ;                    // and pop the a front 
        }
        swap(a,b);                    // if a empty ho jye then swap the queue elements 
    }   
    
   
    
    int pop() {
        int c = a.front() ;                 // store it in temp variable first then pop 
        a.pop() ;                           
        return c ;                           // and return  
    }
    
    int top() {
        return a.front() ;                   // check if its present or not 
    }
    
    bool empty() { 
        return a.empty() ;                    // return if its empty as a signal to void push fuinction 
     }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
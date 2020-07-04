/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
   if(s.empty()) return -1;
   else return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
    int t;
   if (s.empty()) return -1; 
   if(s.top()<minEle){
       t=minEle;
       minEle=2*minEle-s.top();
       s.pop();
   }
   else{
       t=s.top();
       s.pop();
   }
   return t;
}

/*push element x into the stack*/
void _stack::push(int x)
{
    if(s.empty()){ 
        s.push(x);
        minEle=x;
    }
    
    else if (x < minEle) 
        { 
            s.push(2*x - minEle); 
            minEle = x; 
        } 
    else s.push(x); 
    
    
}

// stack<int> st;
stack<int> sup_st;
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
   if(sup_st.empty()){ 
       minEle=-1;
       return -1;
   }
   minEle=-1;
   return sup_st.top();
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty()) return -1;
    int p=s.top();
   if(s.top()==sup_st.top()){
       sup_st.pop();
   }
   s.pop();
   return p;
}

/*push element x into the stack*/
void _stack::push(int x)
{

    if(s.empty()) sup_st=stack<int> ();
   if(sup_st.empty() || (x < s.top())) sup_st.push(x);
   s.push(x);
}

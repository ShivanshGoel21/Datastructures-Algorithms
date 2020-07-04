// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code
        int ans=-1;
        if(q1.empty()) return ans;
        int n=q1.size();
        for(int i=0;i<n;i++){
            if(i==n-1){
                ans=q1.front();
                q1.pop();
            } 
            else{
                q1.push(q1.front());
                q1.pop();
            }
        }
        return ans;
}

float findMedian(struct Node *root)
{
    vector <int> v;
    queue <struct Node*> q;
    q.push(root);
    while(!q.empty()){
        v.push_back(q.front()->data);
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        q.pop();
    }
    sort(v.begin(), v.end());
    int k=v.size();
    if (k%2==0) return float((v[(k/2)-1]+v[k/2]))/2;
    else return (v[k/2]);
}

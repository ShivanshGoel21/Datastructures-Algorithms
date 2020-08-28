vector <int> countDistinct (int arr[], int n, int k)
{
    int count=0;
    unordered_map<int,int> ump;
    vector<int> v;
    for(int i=0;i<k;i++){
        ump[arr[i]]++;
        if(ump[arr[i]]==1) count++;
    }
    v.push_back(count);
    int start=0;
    for(int i=k;i<n;i++){
        ump[arr[start]]--;
        if(!(ump[arr[start]]>0)) count--;  
        ump[arr[i]]++;
        if(ump[arr[i]]==1) count++;
        v.push_back(count);
        start++;
    }
    return v;
}

// the town judge trust nobody
// everybody trusts towm judge
// [a,b] a trust b
// trust[i][0]
// trust[i][1]

int findJudge(int N, int** trust, int trustSize, int* trustColSize){
    int *trust_count;
    int *ifTrust;
    ifTrust=(int*)calloc(sizeof(int),N+1);
    trust_count=(int*)calloc(sizeof(int),N+1);
    int i,j;
    for(i=0;i<trustSize;i++){
            trust_count[trust[i][1]]++;
            ifTrust[trust[i][0]]=1;
    }
    for(i=1;i<=N;i++){
        if(trust_count[i]==N-1 && ifTrust[i]==0) return i;
    }
    return -1;
}

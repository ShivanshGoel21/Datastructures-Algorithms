int size(char *s){
    return strlen(s);
}

int firstUniqChar(char * s){
    int hash[123]={0};
    int i;
    for(int i=0;i<size(s);i++){
        hash[s[i]]++;
    }
    for(int i=0;i<size(s);i++){
        if(hash[s[i]]==1) return i;
    }
    return -1;
}

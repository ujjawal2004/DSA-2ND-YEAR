int Solution::solve(string A) {
     int n=A.length();
    int cnt[26]={0};
    for(int i=0;i<n;i++)
    cnt[A[i]-'a']++;
   
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(cnt[i]%2!=0)
        count++;
       
        if(count>1)
        return 0;
    }
    return 1;
}

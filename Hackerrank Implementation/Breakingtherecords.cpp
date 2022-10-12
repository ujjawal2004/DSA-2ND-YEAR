#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    // your code goes here
    int ma = score[0];
    int mi = score[0];

    int cnta=0;
    int cntb=0;
    for(int i=1;i<n;++i){
        if(score[i]>ma){
            ++cnta;
            ma=score[i];
        }
        if(score[i]<mi){
            ++cntb;
            mi=score[i];
        }
    }
    
    cout << cnta << " "<<cntb;
    return 0;
}


https://www.hackerrank.com/challenges/breaking-best-and-worst-records/submissions/code/295528827

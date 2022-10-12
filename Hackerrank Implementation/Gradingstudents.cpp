#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        if (grade >= 38) {
            int rem = grade % 5;
            if (rem >= 3) grade += 5 - rem;
        }
        cout << grade << endl;
    }
    return 0;
}


https://www.hackerrank.com/challenges/grading/submissions/code/295528259

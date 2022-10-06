#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int a=0,b=0;
    if(a0>b0)
        a++;
    if(a0<b0)
        b++;
    if(a1>b1)
        a++;
    if(a1<b1)
        b++;
    if(a2>b2)
         a++;
    if(a2<b2)
        b++;
    cout<<a<<" "<<b;
    return 0;
}

https://www.hackerrank.com/challenges/compare-the-triplets/submissions/code/294505609

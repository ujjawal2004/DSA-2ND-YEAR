#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    string a,b;
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<endl;
    
    cout<<a+b<<endl;
    
    char t1=a[0];
    char t2=b[0];
    a[0]=t2;
    b[0]=t1;
    
    cout<<a<<" "<<b;
    return 0;
}

https://www.hackerrank.com/challenges/c-tutorial-strings/submissions/code/291833593

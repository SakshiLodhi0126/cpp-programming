#include <iostream>
using namespace std;
int main() {
/* a program that takes an integer input and returns the grade based on the following criteria:
90-100: A
80-89: B
70-79: C
60-69: D
<60: Failed */
    int n;
    cout<<"Enter the marks: ";
    cin>>n;
    if(n>=90 && n<=100) {
        cout<<"Grade: A";
    }   
    else if(n>=80 && n<90) {
        cout<<"Grade: B";
    }
    else if(n>=70 && n<80) {
        cout<<"Grade: C";
    }
    else if(n>=60 && n<70) {
        cout<<"Grade: D";
    }
    else {
        cout<<"Failed, Better Luck Next Time.";
    }
    return 0;
}
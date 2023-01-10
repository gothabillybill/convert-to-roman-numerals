#include <iostream>
using namespace std;

int n;
int counter;

int tho;
int hun;
int ten;
int one;

string thoS;
string hunS;
string tenS;
string oneS;

string output;

int main() {
    cout<<"Enter a positive integer to convert to Roman numerals: "<<endl;
    cin>>n;

    tho = n/1000;
    hun = (n - (tho*1000))/100;
    ten = (n - (tho*1000) - (hun*100))/10;
    one = (n - (tho*1000) - (hun*100) - (ten*10));

    for (counter = 1; counter <= tho; counter++) {
        thoS = thoS + "M";
    }
    if (hun >= 5) {
            hunS = "D";
            hun = hun - 5;
        }
    for (counter = 1; counter <= hun; counter++) {
        hunS = hunS + "C";
    }
    if (ten >= 5) {
            tenS = "L";
            ten = ten - 5;
        }
    for (counter = 1; counter <= ten; counter++) {
        tenS = tenS + "X";
    }
    if (one >= 5) {
            oneS = "V";
            one = one - 5;
        }
    for (counter = 1; counter <= one; counter++) {
        oneS = oneS + "I";
    }
    
    output = thoS + hunS + tenS + oneS;
    cout<<output;
    if(n <= 0) {
        cout<<"You did not enter a positive integer; translation aborted."<<endl;
    }

    return 0;
}
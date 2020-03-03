#include <iostream>
#include <string>
using namespace std;

int main(){
    string op;
    int a,b;
    cin >> a >> op >> b;
    
    if(op == "+"){
        cout << a + b << endl;
    }else if(op == "-"){
        cout << a - b << endl;
    }
}

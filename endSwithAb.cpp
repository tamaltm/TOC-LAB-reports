#include <iostream>
using namespace std;

int main(){
    int state =0;
    string s;
    cin >> s;
    int n = s.size();
    cout << "q" << state << "->";
    if(s[n-2]=='a'){
        if(state<2)
        state++;
    }else{
        state=0;
    }
    cout << "q" << state << "->";
    if(s[n-1]=='b'){
        if(state<2)
        state++;
    }else{
        state=1;
    }
    cout << "q" << state  << endl;
    if(state==2)cout << "accepted" << '\n';
    else cout << "rejected" << '\n';
}

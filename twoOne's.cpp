#include <bits/stdc++.h>
using namespace std;

int main(){
    int state=0;
    string s;
    cin >> s;
    int n = s.size();
    bool found ;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(state<2){
                state++;
            }else{
                cout << "rejected" << '\n';
                return 0;
            }
        }else{
            if(state<=2)
            state = 0;
            else
            found = true;
        }
        cout << state << "->";
    }
    if(found) cout << "Accepted" << '\n';
    else cout << "Rejected" << '\n';





}

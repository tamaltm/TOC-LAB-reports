#include <bits/stdc++.h>
using namespace std;

int main(){
    int state=0;
    string s;
    cin >> s;
    for(int i=1;i<s.size();i++){
        if(s[i]=='1' && s[i-1]=='1'){
            if(s[i+1]=='0'){
                cout << "Accepted" << endl;
                return 0;
            }
            else{
                i++;
            }
        }
    }
    cout << "Rejected" << endl;
    

    
}
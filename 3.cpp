#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    if(s[n-2]=='a' && s[n-1]=='b'){
        for(int i=0;i<n-2;i++){
            if(s[i]!='a' && s[i]!='b'){
                cout << "Rejected" << '\n';
                return 0;
            }
        }
        cout << "Accepted" << '\n';
        return 0;
    }
    cout << "Rejected" << '\n';
    return 0;
}
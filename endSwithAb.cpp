#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    if(s[n-1]=='b' && s[n-2]=='a'){
        cout << "Accepted" << '\n';
        return 0;
    }

    cout << "Rejected" << endl;
}

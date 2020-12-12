#include <string>

using namespace std;

string solution(string s) {
    bool even = true;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' ') {
            even = true;
            continue;
        }
        if(even && s[i]>='a') s[i]-=32;
        else if(!even && s[i]<='Z') s[i]+=32;
        even=!even;
    }
    return s;
}

#include <string>

using namespace std;

bool solution(string s)
{
    int cnt=0;
    for(char c:s){
        if(cnt<0) break;
        (c=='(')? cnt++:cnt--;
    }
    return (cnt==0)? true:false;
}

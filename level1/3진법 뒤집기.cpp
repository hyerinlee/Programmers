#include <string>
using namespace std;

int solution(int n) {
    int answer = 0, t=1;
    string ternary;
    while(n>0){
        ternary+=to_string(n%3);
        n/=3;
    }
    for(int i=ternary.size()-1; i>=0; i--){
        answer+=(ternary[i]-'0')*t;
        t*=3;
    }
    return answer;
}

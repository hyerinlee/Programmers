#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    stack<char> st;
    for(char c:s){
        (!st.empty() && c==st.top())? st.pop():st.push(c);
    }
    return !st.size();
}

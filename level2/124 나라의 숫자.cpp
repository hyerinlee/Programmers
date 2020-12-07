#include <string>

using namespace std;
string solution(int n) {
    string answer = "";
    string arr[3]={"1","2","4"};
    while(n>0){
        answer.insert(0,arr[(n-1)%3]);
        n=(n-1)/3;
    }
    return answer;
}

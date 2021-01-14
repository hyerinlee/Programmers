#include <vector>

using namespace std;

int lcm(int n,int m){
    int a=n,b=m,tmp;
    while(a%b!=0){
        tmp=a;
        a=b;
        b=tmp%b;
    }
    return n*m/b;
}

int solution(vector<int> arr) {
    int answer = arr[0];
    for(int i=1; i<arr.size(); i++) answer=lcm(answer,arr[i]);
    return answer;
}

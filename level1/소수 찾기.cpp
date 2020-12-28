#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> num(n+1);
    int answer = 0;
    for(int i=2; i<=n; i++){
        if(num[i]==1) continue;
        answer++;
        int j=2;
        while(i*j<=n){
            if(num[i*j]==0) num[i*j]=1;
            j++;
        }
    }
    return answer;
}

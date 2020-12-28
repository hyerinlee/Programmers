#include <vector>
#include <stack>

using namespace std;
vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    stack<int> index;
    for(int i=0; i<prices.size(); i++){
        answer[i]=prices.size()-1-i;
    }
    for(int i=0; i<prices.size(); i++){
        while(!index.empty() && prices[index.top()] > prices[i]){
            answer[index.top()] = i-index.top();
            index.pop();
        }
        index.push(i);
    }
    return answer;
}

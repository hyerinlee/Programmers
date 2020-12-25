#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    bool first = true;
    while(location>-1){
        first=true;
        for(int i=1;i<priorities.size();i++){
            if(priorities[0]<priorities[i]){
                first=false;
                break;
            }
        }
        if(!first){
            priorities.push_back(priorities[0]);
            if(location==0) location+=priorities.size()-1;
        }
        else answer++;
        priorities.erase(priorities.begin());
        location--;
    }
    return answer;
}

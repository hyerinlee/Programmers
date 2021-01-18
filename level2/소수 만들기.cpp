#include <vector>
#include <cmath>
using namespace std;

int answer=0;

bool prime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0) return false;
    }
    return true;
}

void dfs(int idx,int sum,int cnt,vector<int>nums){
    if(cnt==3){
        if(prime(sum)) answer++;
        return;
    }
    for(int i=idx+1;i<nums.size();i++){
        dfs(i,sum+nums[i],cnt+1,nums);
    }
}

int solution(vector<int> nums) {
    for(int i=0;i<=nums.size()-3;i++){
        dfs(i,nums[i],1,nums);
    }
    return answer;
}

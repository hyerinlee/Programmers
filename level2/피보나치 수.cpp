#include <vector>

using namespace std;

vector<int> v_fib(100001);

int solution(int n) {
    v_fib[1]=1;
    for(int i=2; i<=n; i++){
        v_fib[i] = (v_fib[i-2]+v_fib[i-1])%1234567;
    }
    return v_fib[n];
}

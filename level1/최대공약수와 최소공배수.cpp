#include <vector>

using namespace std;

int gcd(int a, int b){
    return (a%b==0)? b:gcd(b,a%b);
}

vector<int> solution(int n, int m) {
    int g=gcd(n,m);
    return {g, n*m/g};
}

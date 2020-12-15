#include <math.h>

using namespace std;

long long solution(long long n) {
    return (sqrt(n)-(int)sqrt(n)==0)? pow(sqrt(n)+1,2) : -1;
}

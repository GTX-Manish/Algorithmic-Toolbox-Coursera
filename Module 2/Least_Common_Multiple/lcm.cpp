#include <iostream>
using namespace std;

long long lcm_fast(int x, int y){
  int num = min(x, y);
  while(num > 0){
      if(x % num == 0 && y % num == 0){
        break;
      }
      num--;
  }
  long long res = (x*y)/num;
  return res;
}

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

int main() {
  // int a, b;
  // std::cin >> a >> b;
  // std::cout << lcm_naive(a, b) << std::endl;
  cout<<lcm_fast(4,6);
  return 0;
}

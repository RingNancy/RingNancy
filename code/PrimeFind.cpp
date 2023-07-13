#include<bits/stdc++.h>
using namespace std;
// 定义一个函数，输入一个正整数n，返回不超过n的所有素数的vector
vector<int> prime_sieve(int n) {
  // 创建一个布尔数组，初始值都为true，表示所有数都是素数候选
  vector<bool> is_prime(n + 1, true);
  // 将0和1标记为false，因为它们不是素数
  is_prime[0] = is_prime[1] = false;
  // 创建一个空的vector，用于存放找到的素数
  vector<int> primes;
  // 从2开始遍历所有数
  for (int i = 2; i <= n; i++) {
    // 如果当前数是素数候选
    if (is_prime[i]) {
      // 将其加入素数vector
      primes.push_back(i);
      // 将其所有的倍数标记为false，因为它们不是素数
      for (int j = i * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }
  // 返回素数vector
  return primes;
}
// 测试函数
int main() {
  vector<int> primes = prime_sieve(100);
  for (int p : primes) {
    cout << p << " ";
  }
  cout << endl;
  return 0;
}

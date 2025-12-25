// 1. 头文件是必须的！否则编译器不认识 cin/cout
#include <bits/stdc++.h> 

using namespace std;

// 2. 必须定义 ll，否则后面 ll a, b; 会报错
typedef long long ll;

int main() {
    // 3. 必须保留这两行加速
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b;
    // 核心考点：while(cin >> ...) 
    // 只要能读入数据，就一直循环；读不到数据（文件结束），自动退出
    while(cin >> a >> b) {
        cout << a + b << "\n"; 
    }

    return 0;
}

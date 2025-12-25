/*
 * DEV_Script_蓝桥杯-Template_Universal_v1.cpp
 * 适用于：蓝桥杯 C/C++ B组 (Dev-C++ 5.4.0 / C++98 环境)
 * 特性：防爆零、IO加速、兼容旧标准
 */

// 1. 万能头文件：在蓝桥杯环境下通常可用，省去记忆大量头文件的麻烦
// 如果本地 Dev-C++ 报错，请手动替换为下方的标准头文件组合
#include <bits/stdc++.h>

/* // 备用：如果 bits/stdc++.h 无法使用，请取消注释以下常用头文件
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
*/

using namespace std;

// 2. 类型定义：涉及数据计算（尤其是累加、大数乘法）时，无脑使用 ll
// 蓝桥杯常考大数据，int (2e9) 很容易溢出
typedef long long ll;
const int INF = 0x3f3f3f3f; // 无穷大常量，图论/DP常用

// 3. 数组开在全局区
// 栈空间有限(通常几MB)，全局数据区空间大(几百MB)，防止 Stack Overflow
const int N = 100005; 
// int a[N]; 

int main() {
    // 4. IO 加速 (核心！核心！核心！)
    // 关闭 cin/cout 与 scanf/printf 的同步，关闭缓冲区绑定
    // 开启后，cin 的速度与 scanf 相当，甚至更快
    // ?? 警告：开启后，严禁混用 cin/cout 和 scanf/printf，否则输出会乱序！
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // 5. 文件重定向 (仅用于本地调试，提交代码前必须注释掉！)
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    //在这里编写你的逻辑...
    
    // 示例：A+B
    // ll a, b;
    // while(cin >> a >> b) {
    //     cout << a + b << endl;
    // }

    // 6. 必须返回 0
    // 文档明确警告：没有 return 0 可能得 0 分
    return 0;
}

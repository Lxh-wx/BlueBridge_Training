#include <bits/stdc++.h>
using namespace std;

// 1. 修改：数组必须开到 2*N 以上
const int MAXN = 210; 
const int INF = 0x3f3f3f3f;

int n;
int a[MAXN];
int s[MAXN];
int f[MAXN][MAXN];
int g[MAXN][MAXN]; // 存最大值

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;

    for(int i=1; i<=n; i++) {
        cin >> a[i];
        a[i+n] = a[i]; // 复制一份
    }

    // 2. 修改：前缀和计算到 2*n
    for(int i=1; i<=2*n; i++) {
        s[i] = s[i-1] + a[i];
        f[i][i] = 0;
        g[i][i] = 0;
    }

    // 区间 DP
    for(int len=2; len<=n; len++) {
        // 3. 修改：标准的循环边界
        for(int i=1; i <= 2*n - len + 1; i++) {
            int j = i + len - 1;
            f[i][j] = INF;
            g[i][j] = 0; // 最大值初始化为0
            
            // 你的 sum 计算 s[j] - s[i-1] 是正确的
            int current_score = s[j] - s[i-1];

            for(int k=i; k<j; k++) {
                f[i][j] = min(f[i][j], f[i][k] + f[k+1][j] + current_score);
                // 逻辑正确：左边最大 + 右边最大 + 本次合并代价
                g[i][j] = max(g[i][j], g[i][k] + g[k+1][j] + current_score);
            }
        }
    }

    int min_ans = INF, max_ans = 0;
    for(int i=1; i<=n; i++) {
        min_ans = min(min_ans, f[i][i+n-1]);
        max_ans = max(max_ans, g[i][i+n-1]);
    }

    cout << min_ans << endl << max_ans << endl;
    return 0;
}

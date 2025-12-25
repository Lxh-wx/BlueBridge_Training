/*
  DFS 运行轨迹追踪器
  Subject: 可视化理解 "回溯" 与 "函数栈"
*/
#include <bits/stdc++.h>
using namespace std;

int n = 3; // 总共 3 个数
int k = 2; // 选 2 个
int path[10];

// 增加缩进，让层级关系更明显
string indent(int u) {
    string s = "";
    for(int i=0; i<u; i++) s += "    "; // 每深一层多 4 个空格
    return s;
}

void dfs(int u, int start) {
    cout << indent(u) << "-> 进入 Layer " << u << " (本层任务: 选第" << u+1 << "个数)" << endl;

    // Base Case: 选够了
    if (u == k) {
        cout << indent(u) << "   [★ 找到一组解!]: ";
        for(int i=0; i<k; i++) cout << path[i] << " ";
        cout << endl;
        cout << indent(u) << "<- Layer " << u << " 任务完成，返回上一层" << endl;
        return; // 返回上一层的调用处
    }

    // Loop
    for (int i = start; i <= n; i++) {
        cout << indent(u) << "   [循环中] Layer " << u << " 选中了数字 " << i << ", 呼叫下一层..." << endl;
        
        path[u] = i; // 记录
        
        // === 递归调用 ===
        dfs(u + 1, i + 1); 
        // ================
        
        // 这就是 "案发地点的下一行"
        cout << indent(u) << "   [回溯] Layer " << u << " 重新拿回控制权 (刚才选" << i << "的情况跑完了)" << endl;
    }

    cout << indent(u) << "<- Layer " << u << " 循环结束 (没数可选了)，本层销毁，返回更上一层" << endl;
}

int main() {
    cout << "开始 DFS 之旅..." << endl;
    dfs(0, 1);
    cout << "主函数结束。" << endl;
    return 0;
}

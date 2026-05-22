# MEMORY.md

此文件记录项目的关键上下文，辅助 Claude Code 跨会话保持记忆。

## 项目定位

蓝桥杯国赛 C++ 刷题仓库。省一基础，目标 6.6 国赛国二/国三。

## 2026-05-22：文件整理与命名统一

整理前约 90 个文件，命名混乱（缺题号、错别字、未命名草稿）。整理后统一为：

```
lanqiao-{题号}-{算法}-{题目}-{日期}.cpp
```

修正了的历史遗留问题：
- 错别字：前嘴和→前缀和、并归→归并、DSP→DFS、bsp→bfs、colanqiao→lanqiao
- 补全了约 30 个早期文件的题号（P1048/P1616/P1002 等）
- 删除了 11 个未命名/无意义的草稿文件

## 编码铁律

新 cpp 文件必须用 **GBK** 编码保存，否则 Dev-C++ 打开乱码。
写完文件后执行：`iconv -f UTF-8 -t GBK file.cpp -o file.cpp`
或者在 Dev-C++ 里直接新建文件编辑。

## 代码模板（所有文件通用）

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N = 100005;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // ...
    return 0;
}
```

## 目录与专题

- `00_Basics_STL/` — 排序、枚举、前缀和/差分、贪心、STL
- `01_Search/` — DFS、BFS、二分搜索、二分答案
- `02_DP/` — 背包、线性DP、区间DP、树形DP、递推
- `03_Graph/` — 最短路、拓扑排序、最小生成树
- `04_Math/` — 素数筛、快速幂、逆元、组合数
- `99_Drafts/` — 模拟赛代码和杂项

## 关联资源

- Obsidian 算法笔记：`D:\Aprograme\Obsidian Vault\蓝桥杯算法笔记\`
- 冲刺计划：`国赛冲刺计划_15天.md`
- 看板：`PLAN_Kanban.md`

## 已知问题

- 部分文件名含英文空格（如 `Backward Digit Sums`），bash 命令行操作时需用引号包裹
- 3 个 cpp 文件无对应 exe（未编译过）：铺地毯、走迷宫、木材仓库

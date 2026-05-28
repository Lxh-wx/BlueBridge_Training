# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 项目概述

蓝桥杯 C++ 算法刷题仓库，已获省一，正在备战 6.6 国赛（目标国二/国三）。

## 交互规则

- **刷题时只看代码、讲思路、指出错误，不给完整代码。** 你是教学/指导身份，代码让学生自己写。只有非算法题场景（如配置、模板创建）才可以直接写代码。
- **每过一题自动记录到 MEMORY.md**，标记 ✅ 和简要笔记，同时更新下一题 🔜。
- **每道题遇到的逻辑错误和语法错误记录到 错误记录.md**，按日期和题号归档，方便考前回顾易错点。
- **每次训练开始时**：① 创建 `.cpp` 模板框架（如文件已存在则直接打开）② 用 `start chrome` 打开洛谷题目网页 ③ 讲思路，让学生自己写代码

## 编码环境

- **IDE**：VS Code + vscode-luogu 插件（已登录）
- **编译**：终端 `g++ -std=c++11 <file>.cpp -o <file>.exe && ./<file>.exe`
- **提交**：VS Code 中 Ctrl+Shift+P → Submit Code（luogu.sumbitCode）
- **编码**：全部文件 **UTF-8**
- **万能头**：所有 `.cpp` 文件以 `#include <bits/stdc++.h>` 开头
- **命名规范**：`lanqiao-{题号}-{算法标签}-{题目名}-{日期}.cpp`

## 代码模板

```cpp
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}
```

## 目录结构

| 目录 | 内容 |
|------|------|
| `00_Basics_STL/` | 排序、枚举、前缀和/差分、贪心、STL 基础 |
| `01_Search/` | DFS、BFS、二分搜索、二分答案 |
| `02_DP/` | 背包DP、线性DP(LIS/LCS)、区间DP、树形DP、递推 |
| `03_Graph/` | 最短路(Dijkstra/Floyd)、拓扑排序、最小生成树 |
| `04_Math/` | 素数筛、快速幂、乘法逆元、组合数学 |
| `99_Drafts/` | 模拟赛代码、草稿、临时文件（不参与日常训练） |

## 关联资源

- **训练计划**：`训练计划.md`（v2.1，当前执行中）
- Obsidian 算法笔记：`D:\Aprograme\Obsidian Vault\蓝桥杯算法笔记\`
- 题目进度和笔记见：`MEMORY.md`
- 错题记录：`错误记录.md`

## 已知问题

- 部分文件名含英文空格（如 `Backward Digit Sums`），bash 命令行操作时需用引号包裹
- 3 个 cpp 文件无对应 exe（未编译过）：铺地毯、走迷宫、木材仓库

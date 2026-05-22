# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 项目概述

蓝桥杯 C++ 算法刷题仓库，已获省一，正在备战 6.6 国赛（目标国二/国三）。当前按照 15 天冲刺计划推进中。

## 编码环境

- **IDE**：Dev-C++ 5.11（C++11），文件编码 **GBK**
- **编译**：直接用 Dev-C++ 打开 `.cpp` 文件，F11 编译运行
- **万能头**：所有 `.cpp` 文件以 `#include <bits/stdc++.h>` 开头
- **命名规范**：`lanqiao-{题号}-{算法标签}-{题目名}-{日期}.cpp`，如 `lanqiao-P1048-背包DP-采药-251201.cpp`

## 代码风格

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N = 100005;  // 根据题目范围调整

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // ...
    return 0;
}
```

**重要**：文件保存时必须用 **GBK 编码**，否则 Dev-C++ 打开中文注释会乱码。创建新文件后需用 `iconv -f UTF-8 -t GBK` 转换，或直接用 Dev-C++ 新建。

## 目录结构

| 目录 | 内容 |
|------|------|
| `00_Basics_STL/` | 排序、枚举、前缀和/差分、贪心、STL 基础 |
| `01_Search/` | DFS、BFS、二分搜索、二分答案 |
| `02_DP/` | 背包DP、线性DP(LIS/LCS)、区间DP、树形DP、递推 |
| `03_Graph/` | 最短路(Dijkstra/Floyd)、拓扑排序、最小生成树 |
| `04_Math/` | 素数筛、快速幂、乘法逆元、组合数学 |
| `99_Drafts/` | 模拟赛代码、草稿、临时文件（不参与日常训练） |

## 笔记仓库

算法笔记在 Obsidian Vault：`D:\Aprograme\Obsidian Vault\蓝桥杯算法笔记\`
当前冲刺计划：`国赛冲刺计划_15天.md`

## 当前进度（5.22 开始冲刺）

- 5.22 DP（上）→ 5.23 DP（下）→ 5.24 图论 → 5.25 数据结构 → 5.26 数学
- 5.27~31 进阶 → 6.1~5 模考 → 6.6 国赛

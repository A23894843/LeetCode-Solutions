# `LeetCode-Solutions`

> **Think. Code. Optimize. Repeat.**

[![LeetCode](https://img.shields.io/badge/Platform-LeetCode-FFA116?style=for-the-badge&logo=leetcode&logoColor=black)](https://leetcode.com/)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![DSA](https://img.shields.io/badge/Focus-DSA%20%7C%20Algorithms-00D9A6?style=for-the-badge&logo=github&logoColor=white)](https://github.com/A23894843/LeetCode-Solutions)
[![Last Commit](https://img.shields.io/github/last-commit/A23894843/LeetCode-Solutions?style=for-the-badge&logo=git&logoColor=white)](https://github.com/A23894843/LeetCode-Solutions/commits/main)

*A growing collection of LeetCode solutions, algorithm patterns, and problem-solving practice in C++.*

---

## `01 // SYSTEM OVERVIEW`

This repository documents my ongoing journey in **Data Structures and Algorithms (DSA)**. Each solution helps me understand algorithms, improve implementation quality, and prepare for coding interviews.

**Goals**
- Strengthen logical thinking and problem-solving.
- Recognize reusable algorithm patterns instead of memorizing code.
- Analyze time and space complexity.
- Keep solutions organized for revision and interview preparation.
- Improve correctness, clarity, and efficiency over time.

> **Learning principle:** Solve the problem first, understand why the solution works, then look for a better one.

## `02 // LIVE DASHBOARD`

### GitHub

[![GitHub Profile](https://img.shields.io/badge/GitHub-@A23894843-181717?style=for-the-badge&logo=github)](https://github.com/A23894843)
[![Repositories](https://img.shields.io/badge/Explore-My%20Repositories-2ea44f?style=for-the-badge&logo=github)](https://github.com/A23894843?tab=repositories)
[![Commit History](https://img.shields.io/badge/View-Commit%20History-blue?style=for-the-badge&logo=git)](https://github.com/A23894843/LeetCode-Solutions/commits/main)

These links and badges are reliable fallbacks that do not depend on third-party stats-card APIs. GitHub profile totals and contribution history are available directly on GitHub.

### Coding Activity

[![Recent Repository Activity](https://github-readme-activity-graph.vercel.app/graph?username=A23894843&theme=react-dark&hide_border=true&area=true)](https://github.com/A23894843/LeetCode-Solutions/commits/main)

If this graph service is temporarily unavailable, use the [repository commit history](https://github.com/A23894843/LeetCode-Solutions/commits/main).

### LeetCode

[![LeetCode Stats](https://leetcard.jacoblin.cool/A23894843?theme=dark&font=Ubuntu&ext=activity)](https://leetcode.com/u/A23894843/)

The LeetCode card is supplied by an external service and may occasionally be unavailable or delayed.

## `03 // TOPICS & PATTERNS`

Topics represented in this repository include:

- **Arrays and strings:** traversal, prefix/suffix processing
- **Hash tables:** frequency maps and fast lookups
- **Sliding window:** fixed-size and variable-size windows
- **Two pointers:** pair and triplet searches
- **Sorting:** ordering and comparison-based techniques
- **Binary search:** searching sorted data and answer spaces
- **Trees:** breadth-first and depth-first traversal
- **Recursion:** base cases and recursive decomposition
- **Dynamic programming:** state transitions and overlapping subproblems
- **Greedy and mathematics:** local choices and number properties
- **Tries:** prefix-based string processing

This is a summary of topics represented in the repository, not a claim that every topic has complete coverage.

## `04 // REPOSITORY MAP`

Each problem is stored in its own folder, usually named with the LeetCode problem number and title.

```text
LeetCode-Solutions/
├── 1-two-sum/
│   └── two-sum.cpp
├── 0003-longest-substring-without-repeating-characters/
│   └── 0003-longest-substring-without-repeating-characters.cpp
├── 0016-3sum-closest/
│   └── 0016-3sum-closest.cpp
├── 102-binary-tree-level-order-traversal/
│   └── binary-tree-level-order-traversal.cpp
├── ...
└── README.md
```

Folder contents vary. Some folders contain a C++ source file, a problem-specific README, or both. This repository is a practice collection and is not currently presented as a fully automated test suite.

## `05 // HOW TO USE`

### Clone the repository

```bash
git clone https://github.com/A23894843/LeetCode-Solutions.git
cd LeetCode-Solutions
```

### Review a solution

Open a problem folder and read its source file. Many LeetCode solutions use the platform's expected `class Solution` interface and are intended for submission through LeetCode rather than standalone execution.

For a file that includes its own headers and `main()` function, compile using C++17:

```bash
g++ -std=c++17 solution.cpp -O2 -Wall -Wextra -o solution
./solution
```

Replace `solution.cpp` with the actual filename. If the file relies on LeetCode-provided declarations or has no `main()` function, use the LeetCode editor or create a separate test harness.

## `06 // PROBLEM-SOLVING PIPELINE`

```text
[ Read the statement ]
          |
          v
[ Check constraints and edge cases ]
          |
          v
[ Identify a pattern ]
          |
          v
[ Implement a correct baseline ]
          |
          v
[ Analyze time and space ]
          |
          v
[ Optimize, test, and revise ]
```

For each problem, the target workflow is to:
1. Understand the requirements and constraints.
2. Work through examples and edge cases.
3. Choose a suitable data structure or algorithm.
4. Verify correctness before optimizing.
5. Record time and auxiliary-space complexity.
6. Revisit the solution when a clearer or more efficient approach is found.

## `07 // REPOSITORY NOTES`

- Some folders may not yet contain both a `.cpp` file and a problem-specific README.
- Some solutions cannot be compiled independently without a test harness.
- The number of source files is not necessarily the number of accepted LeetCode submissions.
- GitHub activity and LeetCode submission statistics are different metrics and should not be treated as interchangeable.
- Topic links should use the repository's default branch, `main`.

These notes describe the repository as it exists rather than implying that missing documentation, tests, or automation are already implemented.

## `08 // CONTRIBUTING`

This is primarily a personal learning repository, but constructive contributions are welcome.

- Open an [Issue](https://github.com/A23894843/LeetCode-Solutions/issues) to report an error or suggest an improvement.
- Open a Pull Request for a correction, clearer explanation, or alternative implementation.
- Include the problem number and explain the reasoning behind the change.
- Do not describe an unverified solution as tested or accepted.

## `09 // REFERENCES`

- [LeetCode](https://leetcode.com/)
- [My LeetCode profile](https://leetcode.com/u/A23894843/)
- [Repository source](https://github.com/A23894843/LeetCode-Solutions)
- [Repository commit history](https://github.com/A23894843/LeetCode-Solutions/commits/main)

---

```bash
git commit -m "Update README"
git push origin main
```

**One problem at a time. One pattern at a time. Progress over perfection.**

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [3886-sum-of-sortable-integers](https://github.com/A23894843/LeetCode-Solutions/tree/master/3886-sum-of-sortable-integers) |
## Math
|  |
| ------- |
| [3886-sum-of-sortable-integers](https://github.com/A23894843/LeetCode-Solutions/tree/master/3886-sum-of-sortable-integers) |
## Sorting
|  |
| ------- |
| [3886-sum-of-sortable-integers](https://github.com/A23894843/LeetCode-Solutions/tree/master/3886-sum-of-sortable-integers) |
## Enumeration
|  |
| ------- |
| [3886-sum-of-sortable-integers](https://github.com/A23894843/LeetCode-Solutions/tree/master/3886-sum-of-sortable-integers) |
## Linked List
|  |
| ------- |
| [0019-remove-nth-node-from-end-of-list](https://github.com/A23894843/LeetCode-Solutions/tree/master/0019-remove-nth-node-from-end-of-list) |
## Two Pointers
|  |
| ------- |
| [0019-remove-nth-node-from-end-of-list](https://github.com/A23894843/LeetCode-Solutions/tree/master/0019-remove-nth-node-from-end-of-list) |
<!---LeetCode Topics End-->
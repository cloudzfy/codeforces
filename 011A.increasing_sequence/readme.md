## Increasing Sequence

A sequence a0, a1, ..., a{t - 1} is called increasing if a{i - 1} < ai for each i: 0 < i < t.

You are given a sequence b0, b1, ..., b{n - 1} and a positive integer d. In each move you may choose one element of the given sequence and add d to it. What is the least number of moves required to make the given sequence increasing?

#### Input
The first line of the input contains two integer numbers n and d (2 ≤ n ≤ 2000, 1 ≤ d ≤ 10^6). The second line contains space separated sequence b0, b1, ..., b{n - 1} (1 ≤ bi ≤ 10^6).

#### Output
Output the minimal number of moves needed to make the sequence increasing.

#### Examples
```
input
4 2
1 3 3 2
output
3
```

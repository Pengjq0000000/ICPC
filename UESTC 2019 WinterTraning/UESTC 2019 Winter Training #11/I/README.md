### Description

有N个开关，M个灯，每个开关可以控制Xi个灯，使得灯变换状态（开/关），每次从1号开关按到N号开关，然后如此循环，问最少要按几次开关才能使灯全为关的状态。

先输入N M，然后告诉你有多少个灯一开始是亮的并且告诉你它们的编号。

接下来每行第一个数表示这个灯控制的开关数量，而后是控制的开关编号。

数据范围：

1 <= N,M <= 1000

1 <= Xi <= M

### Sample

##### Input

```
6 3
2 1 3
3 1 2 3
2 1 3
2 1 2
2 2 3
1 2
3 1 2 3
```

##### Output

```
5
```

### Solution

由于两轮操作后就是循环，所以只要模拟两轮，如果两轮内不行则不行。

`
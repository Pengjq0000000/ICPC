### Description

给你一个N * N的地图，一开始机器人站在左上角(1,1)，目的是去往右下角(N,N)，机器一开始面向南边，每步操作只能向前走一步或者向左转，问你最少需要几步才能走到右下角并且面朝南边。

数据范围：

1 <= N <= 200

.表示可以走的路，#表示障碍，无法穿行。数据保证有解。

### Sample

##### Input

```
2
..
#.
```

##### Output

```
6
```

### Solution

直接BFS即可，记录状态是`dis[i][j][k]`表示当前站在(i,j)格子朝向k(0<= k <=3)的最少步数。BFS如果写得太丑会T，在push新状态的时候就可以修改dis，减少同层push进队的状态。

## 6.2 图的存储及基本操作

- 邻接矩阵法
- 邻接表法
- 十字链表
- 邻接多重表
- 图的基本操作
    - Adjacent(G, x, y)
    - Neighbors(G, x)
    - InsertVertex(G, x)
    - AddEdge(G, x, y)
    - RemoveEdge(G, x, y)
    - FirstNeighbor(G, x)
    - NextNeighbor(G, x, y)
    - Get_edge_value(G, x, y)
    - Set_edge_value(G, x, y, v)

### 习题

- 4 带权有向图G用邻接矩阵存储，则vi的入度等于邻接矩阵中
A 第i行非∞的元素个数
B 第i列非∞的元素个数
C 第i行非∞且非0的元素个数
D 第i列非∞且非0的元素个数→D
- 13 假设有n个顶点、e条边的有向图用邻接表表示，则删除与某个顶点v相关的所有边的时间复杂度为多少？答案→O(n+e)

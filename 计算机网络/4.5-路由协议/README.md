## 4.5 路由协议
### 自洽系统 Autonomous System, AS
    - 自洽系统内部的路由选择―域内路由选择
    - 自洽系统之间的路由选择―域间路由选择
### 域内路由和域间路由
### RIP协议
        1. Routing Information Protocol
        2. 路由信息协议
    - 是一种分布式的基于距离向量的路由选择协议
    - 特点 ↓ 
        - 仅和相邻路由器交换信息
        - 路由器交换的信息是当前路由器所知道的全部信息，即自己的路由表
        - 按规定的时间间隔交换路由信息，比如每隔30s
    - 采用「跳数 Hop Count」作为距离的度量，慢收敛
    - 优点：简单，开销小，收敛过程快
    - 缺点
        - 限制了网络的规模，能使用的最大距离为15
        - 坏消息传得慢
    - RIP是应用层协议，使用UDP传输数据（端口520）
### OSPF协议 Open System Path First Protocol
    - 基本特点
        - 向本自洽系统中的所有路由器发送信息，使用泛洪法（RIP仅向自己相邻的几个路由器发送信息）
        - 是网络层协议，不使用UDP或TCP，而直接用IP数据报传送
    - OSPF的基本工作原理
    - 五种分组类型
        - 问候分组
        - 数据库描述分组
        - 链路状态请求分组
        - 链路状态更新分组
        - 链路状态确认分组
### BGP 边界网关协议 Boarder Gateway Protocol
    - 应用层协议
    - 基于TCP
    - RIP OSPF BGP 三种路由协议的比较 知识点
        - ![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/bAqmu5pbihrsdMSDnTB80S9kcl0UlFCTXSrgyZ4yJKTtb6KVDT_0JvwqacdGN5ov-_UQYBcGhVNqJwa-uP1sV7lam2NVglpwcdDlB9v_uqKboXKUT1d9Y2EqeG8MX9P5.png) 
### 习题
    - 10 OSPF协议使用①分组来保持与其邻居的连接
A Hello
B Keepalive
C SPF（最短路径优先）
D LSU（链路状态更新）→A，问候分组
    - 15【2017】直接封装RIP OSPF BGP报文的协议分别是→UDP IP TCP
    - 综合题4【2013】![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/E8ZjSvY4_Yf10TwsMk_d9SQb8DDQ_Z7itV7uO4BjdBIINBDVh64Z0pjE4jI2ZIafNovDNqRkzBJ8xr7lS_ZowaW3bxk01Xv-JOdCGpb8t5gA8Y_bPMZSzCtpnmYza8Zc.png)  
        - 假设Internet的两个自洽系统构成的网络如图所示，自洽系统AS1由路由器R1连接两个子网构成；自洽系统AS2由路由器R2、R3互联并连接3个子网构成。各子网地址、R2的接口名、R1与R3的部分接口IP地址如图所示
① 假设路由表结构如下。利用路由聚合技术，给出R2的路由表，要求包括到达图中所有子网的路由，且路由表中的路由项尽可能少
目的网络：下一跳：接口
② 若R2收到一个目的IP地址为194.17.20.200的IP分组，R2会通过哪个接口转发该IP分组
③ R1与R2之间利用哪个路由协议交换路由信息？该路由协议的报文被封装到哪个协议的分组中进行传输？→答案
① 目的网络：下一跳：接口
194.17.20.128/25:-:E0
194.17.20.0/23:194.17.24.2:S1
153.14.5.0/24:153.14.3.2:S0
② E0接口
③ BGP协议，TCP协议
    - 5 【2014】某网络中的路由器运行OSPF路由协议，下表是路由器R1维护的主要链路状态信息（LSI），下图是根据该表及R1的接口名构造的网络拓扑
![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/-2EF_qqAa_cREG0FCcrTD0g1kVo1_4dbO988XNRch3CW4qeGS6oy5G9sgxKSOQcYYyDQYVoxgMIHIdmno6QN1otCicjKv4Vk8NL_bdLlQo1Cj-nSJMGVztJPKDp4PxEw.png)
① 设路由表结构如下表所示，给出图中R1的路由表，要求包括到达图中子网192.1.x.x的路由，且路由表中的路由项尽可能少
目的网络：下一跳：接口
② 当主机192.1.1.130向主机192.1.7.211发送一个TTL = 64的IP分组时，R1通过哪个接口转发该IP分组？主机192.1.7.211收到IP分组的TTL是多少？
③ 若R1增加一条Metric为10的链路连接Internet，则表中R1的LSI需要增加哪些信息？
答案→① 三项即可（使用路由聚合）② L0，TTL=63 ③ 前缀为0.0.0.0/0，Mterix为10的特殊的直连网络

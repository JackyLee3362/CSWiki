## 4.3 IPv4
### IPv4分组
- ~网际互联协议 IP协议 Internet Protocol 
- IPv4即现在普遍使用的IP（版本4）协议
- IPv6
- 基本单元：IP分组  / IP数据报
- IPv4分组格式
- 版本
- 首部长度：最常用的首部长度是20B
- 总长度
- 标识
- 标志
- 片偏移
- 生存时间 TTL Time to Live
- 协议
- 首部校验和：只检验分组的首部，而不校验数据部分
- 源地址字段
- 目的地址字段
- 一种8片首饰：总长度1B，片偏移8B，首部长度4B  
- IP数据报分片 
- MTU 最大传输单元 Maximum Transmission Unit
    - 以太网MTU不超过：1500B
    - 广域网MTU不超过：576B
- 标志位
    - MF位（More Fragment）= 1时 表示还有后续的片
    - DF位（Don't Fragment） = 0时 表示数据报可以被分片
- 网络层转发分组的流程
- 直接交付
- 间接交付
- 注意：得到下一跳IP路由器的IP地址后并不是直接将该地址填入待发送的数据报，而是将该IP地址转换成MAC地址（通过ARP），将其放到MAC帧首部中，然后根据这个MAC地址找到下一跳路由器。在不同网络中传送时，MAC帧中的源地址和目的地址要发生变化，但是网桥在转发帧时，不改变帧的源地址，请注意区分 知识点
### IPv4地址与NAT
- IP地址的结构 = {<网络号>, <主机号>} 
    - A类：1 - 126
    - B类：128 - 191
    - C类：192 - 223
    - D类：224 - 239
    - E类：240 - 255
    - 特殊IP地址
        - 主机号全0：网络本身
        - 主机号全1：广播地址
        - 127.x.x.x ：环回自检地址 Loopback Test，目的地址为环回自检地址的IP数据报永远不会出现在网络上
        - 0.0.0.0：本网络上的本主机
        - 255.255.255.255 ：整个TCP/IP网络的广播地址（受限广播地址）
    - 常用的三种类别IP地址的使用范围
- 网络地址转换 NAT Network Address Translation
    - NAT工作在哪一层 ：传输层 ，因为它要查看端口号，而端口号是在传输层的
    - 私有IP地址网段
        - A类网段1个：10.0.0.0 - 10.255.255.255
        - B类网段16个：172.16.0.0 - 172.31.255.255
        - C类网段256个：192.168.0.0 - 192.168.255.255
    - 专用互联网：采用私有IP地址（可重用地址）在互联网络称为专用互联网或本地互联网
- 子网划分与子网掩码、CIDR
- 子网划分
    - IP地址的结构 = {<网络号>, <子网号>, <主机号>}
- 子网掩码
- 无类别域间路由选择 CIDR Classless Inter-Domain Routing
    - IP地址的结构 = {<网络前缀>, <主机号>}
    - 一个CIDR地址快可以表示很多地址，这种地址的聚合称为路由聚合
    - 最长前缀匹配（最佳匹配）
- IP地址是①用的地址，硬件地址是②用的地址?→①网络层，②数据链路层
### ARP DHCP ICMP
- NAT
    - 由于NAT能看到端口，所以工作在传输层
- 地址解析协议 ARP, Address Resolution Protocol
    - 网络层协议
- 动态主机配置协议 DHCP, Dynamic Host Configuration Protocol
    - DHCP 应用层协议
    - DHCP基于UDP协议
    - 工作原理（什么模型）C/S Model
    - 相关
        - 提供报文
        - 租用期
- ICMP, Internet Control Message Protocol 网际控制报文协议
    - ICMP是网络层的协议
    - 使用ICMP的目的：提高IP数据报交付成功的机会
    - ICMP差错报告报文 ↓ 
        - 终点不可达
        - 源点抑制
        - 时间超过
        - 参数问题
        - 改变路由（重定向）
    - ICMP询问报文 ↓ 
        - 回答请求和回答报文（常用）
        - 时间戳请求和回答报文（常用）
        - 掩码地址请求和回答报文
        - 路由器询问和通告报文
### 习题
- 2 以下关于IP分组结构的描述中，判断正误
A IPv4分组头的长度是可变的
B 协议字段表示IP版本，值为4表示IPv4
C 分组头长度字段以4B为单位，总长度字段以字节为单位
D 生存时间字段值表示一个分组可以经过的最多的跳数
答案→B错误，不是协议字段，是版本字段
- 5 IP分组中的检验字段检查范围是
A 整个IP分组
B 仅检查分组首部
C 仅检查数据部分
D 以上皆检查
答案→B
- 9 关于IP分组分片的基本方法的描述中，判断正误
A IP分组长度大于MTU时，就必须对其进行分片
B DF = 1，分组长度又超过MTU时，则丢弃该分组，不需要向源主机报告
C 分片的MF值为1表示接收到的分片不是最后一个分片
D 属于同一原始IP分组的分片具有相同的标识符→B错误，需要向源主机发送ICMP差错报文
- 19 把IP网络划分成子网，这样做的好处是?→减少广播域大小，子网之间的数据传输需要通过路由器
- 21【2010】某网络的IP地址空间为192.168.5.0/24，采用定长子网划分，子网掩码为255.255.255.248，则该网络中的最大子网个数、每个子网内的最大可分配地址个数分别是→32 ，6
- 22 一台主机有两个IP地址，一个地址是192.168.11.25，另一个地址可能是
A 192.168.11.0
B 192.168.11.26
C 192.168.13.25
D 192.168.11.24→C，如果一台主机有两个或两个以上的IP地址，那么说明这台主机属于两个或两个以上的逻辑网络。值得注意的是，在同一时刻一个合法IP地址只能分配给一台主机，否则就会引起IP地址冲突。IP地址192.168.11.25属于C类IP地址，所以ABD属于同一个逻辑网络，只有C的网络号不同，表明它在不同的逻辑网络
- 23 CIDR技术的作用是什么?→把小的网络汇聚成大的超网
- 32 【2012】某主机的IP地址为180.80.77.55，子网掩码为255.255.252.0。若该主机向其所在子网发送广播分组，则目的地址可以是
A 180.80.76.0
B 180.80.76.255
C 180.80.77.255
D 180.80.79.255→D
- 35 37    ![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/KSjslXOz--QAkrVuUkQA_6r5GFzsQcXJXgYNNJdJsBuX4r2xkJnSvS59bVkSTJ0IrgoX3n_0YsDK4ZFplINZOivAL_y7vJJbCIWkX7Oxs8NhgRmg29KmDwPAFL8V0i-r.png) 
- 【2016】如图，假设H1与H2的默认网关和子网掩码分别配置是192.168.3.1和255.255.255.128，H3和H4的默认网关和子网掩码均分别配置是192.168.3.254和255.255.255.128，则下列现象可能发生的是
A H1不能与H2进行正常通信
B H2和H4不能访问Internet
C H1不能与H3进行正常IP通信
D H3不能与H4进行正常IP通信→C
- 【2016】假设连接R1、R2和R3之间的点对点链路使用地址201.1.3.x/30，当H3访问Web服务器S时，R2转发出去的封装HTTP请求报文的IP分组时源IP地址和目的IP地址，他们分别是
A 192.168.3.251 130.18.10.1
B 192.168.3.251 201.1.3.9
C 201.1.3.8 130.18.10.1
D 201.1.3.10 130.18.10.1
- 36 【2017】下列IP地址中，只能作为IP分组的源IP地址但不能作为目的IP地址的是
A 0.0.0.0
B 127.0.0.1
C 200.10.10.3
D 255.255.255.255→A
- 40 略 不是很懂为什么不新建一个→因为NAT的表项需要管理员添加，这样才能控制一个内网到外网的网络连接
- 42【2012】ARP的功能是
A 根据IP地址查询MAC地址
B 根据MAC地址查询IP地址
C 根据域名查询IP地址
D 更具IP地址查询域名→A
- 44 主机发送IP数据报给主机B，途中经过了5个路由器，共使用了 几次ARP?→6次
- 48 若路由器R因为拥塞丢弃IP分组，则此时R可向发出该IP分组的源主机发送的ICMP报文类型是什么，其他三个又是什么?→源点抑制，其他分别是目的不可达，时间超过，参数问题，改变路由（重定向）
- 50 【2012】在TCP/IP体系结构中，直接为ICMP提供服务的协议是→IP
- 52 【2018】某路由表中有转发接口相同的4条路由表项，其目的网络地址分别是35.230.32.0/21、35.230.40.0/21、35.230.48.0/21、35.230.56.0/21，将该4条路由聚合后的目的网络地址是→35.230.32.0/19
- 53【2018】路由器R通过以太网交换机S1和S2连接两个网络，R的接口、主机H1和H2的IP地址与MAC地址如下图所示。若H1向H2发送一个IP分组IP，则H1发出的封装P的以太网帧的目的MAC地址、H2收到的封装P的以太网帧的源MAC地址分别是
![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/9a1Yu4XR1Uc93RRbBHcrHdOyDUaOT61syQ-dfBY_dj61vhbkWboiSvhaWdmmdnvR0IgPHdfwGGbUkzY1xT51lR2WJjHAxSrIwoBpiviG5eGl4zThIzXu2GbGeBLauXES.png)→xxxx51 ，61
解析：ARP用于解决同一个局域网上的主机或路由器的IP地址和硬件地址的映射问题。如果所要找的主机和源主机不再用一个局域网上，那么就要通过ARP找到一个位于本局域网上的某个路由器的硬件地址，然后把分组发送给这个路由器，让这个路由器把分组转发给下一个网络。剩下的工作就由下一个网络来做，尽管ARP请求分组时广播发送的，但ARP响应分组时普通的单播，即从一个源地址发送到一个目的地址
- 54 若将101.200.16.0/20划分为5个子网，则可能的最小子网的可分配IP地址数是?→254
- z-7 略
- z-8 略
- z-10 略
- 综合题12 【2009】
    - ![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/jETgMJ_-0h_UApps31OXUX-dme_9149nzC3HHnatfr6DuyWbK8vUBf0TBOeoXLJNvOEOhdsd3EebYJy3TOTN-yFRUwq1FFQMoEK-aRsFUi9a2lBP9G2wJTX1jrtUVHM4.png)→看书172页
- z-13
- z-14
- 综合题15
    - ![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/H6pq6RAA3Brb_KkFBI602U_dyVQwl2aysb6WP8dYWz9KG2BFfivJt53i8C4C_85MZf7d1EsijKXOneAUF47snhiKxEnxpEnUeuJ1CWH-WlVV2iK5AXdiaKpafxLw7-4W.png)→答案
① 111.123.15.5 ~ 111.123.15.254
源IP地址 0.0.0.0；目的IP地址 111.123.15.255
② 目的MAC地址 FF-FF-FF-FF-FF-FF；00-a1-a1-a1-a1-a1-a1
③ 可以访问WWW服务器但不能访问Internet，因为和WWW服务器属于同一个网段，但是默认网关配置错误
- 综合题16 【2018】
    - ![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/aejJ0iqb2LXLZiXbZ0_lP2sMtxyoZm7aAj8PblksFSyoZSuf0VOcvVSflMo5JHbi_iKADbt71ACDbBH2TD5s8YtAFOamDTER4Vrnnp4pOr_WNZu0z-3cVIs9MU04l3fw.png)→答案
① 192.168.1.127；192.168.1.128，128-2（全0和全1）-80（已分配）-1（路由器）=79台
② 1500 = 20 + 1480 = (20 + 776) + ( 20+ 704)，片偏移是97
- 综合题17【2020】
    - ![](local://D:/OneDrive/Documents/2021/RemNote/publish-cs/files/xybmiJO0l4g_UNPSxj1glaEqUi6JWnrWkmC328J2sG5QoD4qOtWF63HB3X5wo_Hmz7QUrj23k1zEFxuJZctHfjL4Q2BoJg8twX24BLXGaasyi7gqmWgaMtB0MSWvhofU.png)→答案
① 外网 IP地址 203.10.2.2 80；内网IP地址 192.168.1.2 80
② H2发送：源IP地址 192.168.1.2 目的IP地址 203.10.2.2
经过R3转发后：源IP地址 203.10.2.6 目的IP地址 203.10.2.2
经过R2转发后：源IP地址 203.10.2.6 目的IP地址 192.168.1.2

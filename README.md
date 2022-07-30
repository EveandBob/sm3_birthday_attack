# project1

# 实验名称
sm3的生日攻击


# 实验过程
在本次实验中我的实验思路如下：
1.要进行长度扩展攻击就要选择明文库
我在abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ中随机挑选7个字符作为明文
2.想办法加快找出两个hash值相同的明文的速度
我的思路是使用unordered_map容器，每生成一个hash值就插入一个<string，string>的键值对，然后让下一轮生成的hash值来查找之前的所有键值对


# 实验结果
在不不懈努力下，我最终以23.451s的速度碰撞出了48bit
![Screenshot 2022-07-31 052112](https://user-images.githubusercontent.com/104854836/181996564-a7d9f163-bc1c-45c5-a05e-089faeaee7d2.jpg)





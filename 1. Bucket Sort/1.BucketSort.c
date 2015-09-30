#include "stdio.h"
/*
  <啊哈! 算法>   桶排序
    
    8 9 3 4 4 2 2 1 77
    
    桶排序的重点是:
      1. 弄个新数组
      2. 数组长度 == 要排序的最大数字
      3. 下标 == 要排序的数字
      4. 值 == 出现次数
      
      
    
    a[11] = 1
    代表数字 11 出现了 1 次
    
    a[5] = 9
    代表数字 5 出现了 9 次
    
    
    桶排序的问题是
      1. 浪费空间 
        [1, 999, 23, 17] 最大数字是 999, 所以你要申请一个长度999的数组
      2. 无法排序小数
        [3.23, 9.5, 1.1]
  
*/
void main()
{	

}
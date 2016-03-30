//
//  Bubble_sort.cpp
//  AlgorithmDemo
//
//  Created by Supwin_mbp002 on 16/3/30.
//  Copyright © 2016年 chenlongjian. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    printf("冒泡排序\n");
    
        int a[100],i,j,t,n;
        printf("请输入一个数组的大小\n");
        scanf("%d",&n);//输入N个数
        printf("请输入数组的每一个元素\n");
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        //核心部分
        for (i=1; i<=n-1; i++) {
            for (j=1; j<=n-1; j++) {
                if (a[j]<a[j+1]) {
                    t=a[j];
                    a[j]= a[j+1];
                    a[j+1]= t;
                }
            }
            for (int x=1; x<=n; x++) {
                printf("%d",a[x]);
            }
            printf("\n");
        }
        
        for (i=1; i<=n; i++) {
            printf("%d",a[i]);
        }
    
    //  总结：核心就是双嵌套循环所以它的时间复杂度为N的二次方。比较耗费时间。但能处理一下比较常见的场景。
    //  缺点：耗费时间
    //  时间复杂度为：O(N的二次方);
    
    return 0;
}

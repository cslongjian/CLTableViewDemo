//
//  Quick_sort.cpp
//  AlgorithmDemo
//
//  Created by Supwin_mbp002 on 16/3/30.
//  Copyright © 2016年 chenlongjian. All rights reserved.
//

#include <stdio.h>

void quickdsort(int left, int right, int array[]);

int mainQ(int argc, const char * argv[])
{
    printf("快速排序样例\n");
    
    //--------  快速排序 --------  二分法的使用。
    int arrayQuick[] = {6,4,1,10,2,7,9,5,3,8};
    quickdsort(0,9,arrayQuick);
    printf("最后结果\n");
    for (int x = 0; x<10; x++) {
        printf("%d",arrayQuick[x]);
    }
    printf("\n");
    return 0;
    
    
    //总结：递归调用循环的处理每次一基数排序后的数组。注意基数循环的方向。
    //    时间复制度。最差的条件下是和冒泡排序一样 N的平方。最优就是1;平均值是O(NlogN);
}


void quickdsort(int left, int right, int array[])
{
    int i,j,t,temp;
    if (left>right) {
        return;
    }
    
    temp = array[left];
    i = left;
    j = right;
    while (i!=j) {
        while (array[j]>=temp && i<j) {
            j--;
        }
        while (array[i]<=temp && i<j) {
            i++;
        }
        if (i<j) {
            t=array[i];
            array[i]=array[j];
            array[j]=t;
        }
        printf("\n");
        for (int x = 0; x<10; x++) {
            printf("%d",array[x]);
        }
    }
    
    array[left]=array[i];
    array[i]=temp;
    
    printf("------一轮排序后 \n");
    for (int x = 0; x<10; x++) {
        printf("%d",array[x]);
    }
    printf("\n\n");
    quickdsort(left, i-1, array);  //排序一个出来后，继续处理左边，递归处理的过程
    quickdsort(i+1, right, array);   //排序一个出来后，继续处理右边，递归处理的过程
    return;
};

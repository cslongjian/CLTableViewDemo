//
//  main.c
//  AlgorithmDemo
//
//  Created by Supwin_mbp002 on 16/1/21.
//  Copyright © 2016年 chenlongjian. All rights reserved.
//

#include <stdio.h>

void quickdsort(int left, int right, int array[]);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    //公用数据部分
//    int arrayA[] = {0,1,2,3,4,5,6,7,8,9};
    int arrayB[] = {6,4,1,10,2,7,9,5,3,8};
    int arraylength = sizeof(arrayB)/sizeof(arrayB[0]);
    printf("数组长度%d \n",arraylength);
    
//----------木桶排序。数组用法-------------
    
//    int a[11], i, j, t;
//    
//    for (i = 0; i<=10; i++) {
//        a[i] = 0;
//    }
//    
//    for (i=1; i<=5; i++) {
//        scanf("%d",&t);
//        a[t]++;
//    }
//    
//    for (i = 0; i<=10; i++) {
//        for (j=1; j<=a[i]; j++) {
//            printf("%d",i);
//        }
//    }
//    
//    getchar();
//    getchar();
    
//  总结：思想就是一位数组。下标应用。统计出有赋值的对象。将其输出。正序为从小到到
//    倒序为从大到小
//  缺点：这种用法的缺点也是非常明显。当数据非常大的时候。而你所处理的数据非常小。这样是非常浪费空间的。排序一个范围非常大（0-10W）而你只取其中200个值。就显得很无用了。
//    时间复杂度为：O(N+M);
    
//--------    冒泡排序    ---------
    
//

//    int a[100],i,j,t,n;
//    scanf("%d",&n);//输入N个数
//    for(i=1; i<=n; i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    //核心部分
//    for (i=1; i<=n-1; i++) {
//        for (j=1; j<=n-1; j++) {
//            if (a[j]<a[j+1]) {
//                t=a[j];
//                a[j]= a[j+1];
//                a[j+1]= t;
//            }
//        }
//        for (int x=1; x<=n; x++) {
//            printf("%d",a[x]);
//        }
//        printf("\n");
//    }
//    
//    for (i=1; i<=n; i++) {
//        printf("%d",a[i]);
//    }
//  总结：核心就是双嵌套循环所以它的时间复杂度为N的二次方。比较耗费时间。但能处理一下比较常见的场景。
//  缺点：耗费时间
//  时间复杂度为：O(N2);
    
//--------  快速排序 --------  二分法的使用。
    int arrayQuick[] = {6,4,1,10,2,7,9,5,3,8};
    quickdsort(0,9,arrayQuick);
    printf("最后结果");
    for (int x = 0; x<10; x++) {
        printf("%d",arrayQuick[x]);
    }
    
    return 0;
    
    //总结：递归调用循环的处理每次一基数排序后的数组。注意基数循环的方向。
//    时间复制度。最差的条件下是和冒泡排序一样 N的平方。最优就是1;平均值是O(NlogN);
    
//    排序算法还有许多种。选择排序、计数排序、基数排序、插入排序、归并排序、堆排序等等
    
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



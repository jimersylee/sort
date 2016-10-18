//
// Created by Jimersy Lee on 2016-10-18.
//

#include <iostream>

/**
 * 冒泡排序
 * @return
 */
int bubbleSort(){
    int a[20],scannedNumber,input;

    scanf("%d",&input);

    for(int i=1;i<=input;i++){
        scanf("%d",&scannedNumber);
        a[i]=scannedNumber;
    }

    //共有input个数字,排序input-1次即可
    for (int i = 1; i <= input - 1; i++) {

        for (int j = 1; j <= input - 1; j++) {

            //如果前面的一个数字小于后面的一个数字,交换位置
            if (a[j] < a[j + 1]) {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

    for (int i = 1; i <= input; i++) {
        printf("%d%s", a[i],",");

    }

    scanf("%d",&input);
    return 0;
}

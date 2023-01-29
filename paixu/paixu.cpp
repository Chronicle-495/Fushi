//
// Created by Chronicle on 2023/1/27.
//
// sort 第三个参数是交换条件

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

// 大于号从大到小, 小于号从小到大
// cmp为true则不交换, cmp为false则交换
bool cmp(int lhs, int rhs) {
    return lhs > rhs;
}

int main() {
    int arr[8];
    for (int i = 0; i < 8; ++i) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + 8, cmp);
}
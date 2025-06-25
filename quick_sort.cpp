#include <iostream>
using namespace std;

// 快速排序
// 时间复杂度：o(n log n) 平均情况
// 空间复杂度：o(log n) 递归栈空间
// 稳定性：不稳定
void quick_sort(int a[], int l, int r) {
    if(l >= r) return;

    int i = l-1, j = r+1, x = a[l+r>>1];    // 取中间元素作为 pivot
    while(i < j) {
        do i++; while(a[i] < x);
        do j--; while(a[j] > x);
        if(i < j) swap(a[i], a[j]);
    }
    quick_sort(a, l, j);    // 对左半部分进行排序，以 j 为界保证左半部分都小于 pivot
    quick_sort(a, j+1, r);
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};

    quick_sort(arr, 0, 5);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << ' ';
    }
}
#include<bits/stdc++.h>
using namespace std;
//冒泡排序
void bubblesort1(vector<int> &arr){
    size_t len = arr.size();
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
//改进冒泡排序
void bubblesort2(vector<int> &arr){
    size_t len = arr.size();
    bool flag = true;
    for(int i = 0; i < len; i++){
        flag = true;
        for(int j = 0; j < len - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag) break;
    }
}
//插入排序
void insertsort1(vector<int> &arr){
    size_t len = arr.size();
    int j;
    for(int i = 2; i < len; i++){
        j = i - 1;
        while(j >= 0 && arr[j] > arr[j + 1]){
            swap(arr[j], arr[j + 1]);
            j--;
        }
    }
}
//插入排序（不用赋值）
void insertsort2(vector<int> &arr){
    size_t len = arr.size();
    int tem;
    int j;
    for(int i = 0; i < len; i++){
        tem = arr[i];
        j = i;
        while(j > 0 && arr[j - 1] > tem){
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = tem;
    }
}

//选择排序
void choicesort(vector<int> &arr){
    size_t len = arr.size();
    for(int i = 0; i < len; i++){
        int index = i;
        int tem = arr[i];
        for(int j = i + 1; j < len; j++){
            if(arr[j] < tem){
                index = j;
                tem = arr[j];
            }
        }//找到最小的元素，然后和当前的元素交换
        swap(arr[i], arr[index]);
    }
}

//快速排序
void quicksort(vector<int> &arr, int left, int right){
    if(left >= right)
        return;
    int tem = arr[left];
    int i = left;
    int j = right;
    while(i < j){
        while(i < j && arr[j] > tem){
            j--;
        }
        if(i < j){
            arr[i] = arr[j];
            i++;
        }
        while(i < j && arr[i] < tem){
            i++;
        }
        if(i < j){
            arr[j] = arr[i];
            j--;
        }
    }
    arr[i] = tem;
    quicksort(arr, left, i - 1);
    quicksort(arr, i + 1, right);
}

//归并排序
void merge(vector<int> &arr, int left, int right, int mid){
    vector<int> tem(arr);
    int i = left;
    int j = mid + 1;
    int k = left;
    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            tem[k] = arr[i];
            i++;
        }
        else{
            tem[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i <= mid){
        tem[k] = arr[i];
        k++;
        i++;
    }
    while(j <= right){
        tem[k] = arr[j];
        j++;
        k++;
    }
    k = left;
    while(k <= right){
        arr[k] = tem[k];
        k++;
    }
}
void mergesort(vector<int> &arr, int left, int right){
    if(left >= right)
        return;
    int mid = (left + right) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, right, mid);
}
//堆排序
void adjust(vector<int> &arr, int i, int len){
    int tem = arr[i];
    for(int k = i * 2 + 1; k < len; k = 2 * k + 1){
        if(k + 1 < len && arr[k + 1] > arr[k]){
            k = k + 1;
        }
        if(k < len && arr[k] > tem){
            arr[i] = arr[k];
            i = k;
        }
        else{
            break;
        }
    }
    arr[i] = tem;
}
void heapsort(vector<int> &arr){
    size_t len = arr.size();
    for(int i = len / 2 - 1; i >= 0; i--){
        adjust(arr, i, len);
    }
    for(int i = len - 1; i > 0; i--){
        swap(arr[i], arr[0]);
        adjust(arr, 0, i);
    }
}

//希尔排序

void hillsort(vector<int> &arr){
    size_t len = arr.size();
    for(int gap = len / 2; gap > 0; gap /= 2){
        for(int i = gap; i < len; i++){
            int j = i - gap;
            while(j >= 0){
                if(arr[j] > arr[i]){
                    swap(arr[j + gap], arr[j]);
                }
                else{
                    break;
                }
                j -= gap;
            }
        }
    }
}
int main(){
    vector<int> arr;
    int len;
    cout << "输入你要测试的排序数组的大小:" << endl;
    cin >> len;
    for(int i = 0; i < len; i++){
        arr.push_back(rand());
    }
    vector<int> tem = arr;
    cout << "下面是各种排序算法所用的时间:" << endl;
    clock_t start = clock();
    bubblesort1(tem);
    cout << "冒泡排序算法:" << clock() - start << "ms" << endl;
    tem = arr;
    start = clock();
    bubblesort2(tem);
    cout << "改进冒泡排序算法:" << clock() - start << "ms" << endl;
    tem = arr;
    start = clock();
    insertsort1(tem);
    cout << "插入排序算法:" << clock() - start << "ms" << endl;
    tem = arr;
    start = clock();
    insertsort2(tem);
    cout << "改进插入排序算法:" << clock() - start << "ms" << endl;
    tem = arr;
    start = clock();
    choicesort(tem);
    cout << "选择排序算法:" << clock() - start << "ms" << endl;
    tem = arr;
    start = clock();
    quicksort(tem, 0, len - 1);
    cout << "快速排序算法:" << clock() - start << "ms" << endl;
    tem = arr;
    start = clock();
    mergesort(tem, 0, len - 1);
    cout << "归并排序算法:" << clock() - start << "ms" << endl;
    tem = arr;
    start = clock();
    heapsort(tem);
    cout << "堆排序算法:" << clock() - start << "ms" << endl;
    tem = arr;
    start = clock();
    hillsort(tem);
    cout << "希尔排序算法:" << clock() - start << "ms" << endl;
    return 0;
}


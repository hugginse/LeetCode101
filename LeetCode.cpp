/* ============ 贪心算法 ============ 
//  ------------ 分配问题——饼干分配 ------------
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

//函数声明
int findContentChildren(vector<int> &children, vector<int> &cookies);

int main(){
    // 局部变量声明
    vector<int> children = {1, 2};  //定义数组表示孩子的胃口大小
    vector<int> cookies = {1, 2, 3};    // 定义数组表示饼干的
    int result;

    // 调用算法函数
    result = findContentChildren(children, cookies);
    cout << result << endl;

    return 0;
}

int findContentChildren(vector<int> &children, vector<int> &cookies){
    sort(children.begin(), children.end()); //
    sort(cookies.begin(), cookies.end());
    int child = 0, cookie = 0;
    while (child < children.size() && cookie < cookies.size()){
        if (children[child] <= cookies[cookie]) ++child;
        ++cookie;
    }
    return child;
}
*/

/*
//  ------------ 分配问题——糖果分配 ------------
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<numeric>
using namespace std;

// 函数声明
int candy(vector<int>& ratings);

int main(){
    vector<int> ratings = {1, 0, 2};
    int result;

    // 调用算法函数
    result = candy(ratings);
    cout << result << endl;

    rerurn 0;
}

int candy(vector<int>& ratings){
    int size = ratings.size();
    if (size <2){
        return size;
    }
    vector<int> num(size, 1);
    for (int i = 1; i < size; ++i){
        if (ratings[i] > ratings[i-1]){
            num[i] = num[i-1] + 1;
        }
    }
    for (int i = size - 1; i > 0; --i){
        if (ratings[i] < ratings[i-1]){
            num[i-1] = max(num[i - 1], num[i] + 1);
        }
    }
    // std::accumulate 可以很方便地求和
    return accumulate(num.begin(),num.end(), 0);
}
*/

/*
//  ------------ 区间问题——不重叠区间 ------------
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<numeric>
using namespace std;

// 函数声明
int eraseOverlapIntervals(vector<vector<int>>& intervals);

int main(){
    // 定义变量
    vector<vector<int>> intervals = {
        {1, 2}, {2, 4}, {1, 3}
    };
    int removed;

    removed = eraseOverlapIntervals(intervals);
    cout << removed << endl;
    return 0;
}

// 算法函数
int eraseOverlapIntervals(vector<vector<int>>& intervals){
    if(intervals.empty()) {
        return 0;
    }
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b)
    {
        return a[1] < b[1];
    });
    int removed = 0, prev = intervals[0][1];
    for (int i = 1; i < n; ++i) {
        if (intervals[i][0] < prev){
            ++removed;
        }else{
            prev = intervals[i][1];
        }
    }
    return removed;
}*/

//  ------------ 种花问题 ------------
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<numeric>
#include<stddef.h>
using namespace std;

class Solution{
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n){
            // 贪心问题 求解花坛的最大种花数量
            // 根据花坛中的0的个数来计算
            // 数学归纳
            // 1-2 0
            // 3-4 1
            // 5-6 2
            // count = (count-1)/2
            // 优化

            if (flowerbed.size == 0 || flowerbed == null) return n == 0;
            // 统计可以种花的数目
            int num = 0;

        }
};
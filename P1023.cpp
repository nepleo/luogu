#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int exp = 0;
    cin >> exp;
    int pCost = 0, pCostSale = 0;
    int arr[100000] = {0};
    cin >> pCost >> pCostSale;
    arr[pCost] = pCostSale;
    int cacheCost = 0, cacheCostSale = 0;
    cacheCost = pCost;
    cacheCostSale = pCostSale;
    int ka = 0;
    int cost = 0, costSale = 0;
    cin >> cost >> costSale;
    while (cost != -1 && costSale != -1) {
        arr[cost] = costSale;
        if (cost == cacheCost - 1 || cost == cacheCost + 1) {
            cacheCost = cost;
            cacheCostSale = costSale;
        } else {
            ka = (costSale - cacheCostSale) / (cost - cacheCost);
            cacheCost++;
            while (cacheCost != cost) {
                arr[cacheCost] = cacheCostSale + ka;
                cacheCostSale = cacheCostSale + ka;
                cacheCost++;
            }
            cacheCost = cost;
            cacheCostSale = costSale;
        }
        cin >> cost >>costSale;
    }
    int kb = 0;
    cin >> kb;
    kb = 0 - kb;
    cacheCost++;
    while ((cacheCostSale + kb) > 0) {
        arr[cacheCost] = cacheCostSale + kb;
        cacheCostSale = cacheCostSale + kb;
        cacheCost++;
    }
    double Min=-233333333.0;
    double Max=23333333.0;
    for (int i = pCost; i < cacheCost - 1; i++) {
        if (arr[i] - arr[exp] > 0) {
            Max = min(Max, ((double)((exp - pCost) * arr[exp]) - (double)((i - pCost) * arr[i])) / (double)(arr[i] - arr[exp]));
        } else if (arr[i] - arr[exp] < 0) {
            Min = max(Min, ((double)((exp - pCost) * arr[exp]) - (double)((i - pCost) * arr[i])) / (double)(arr[i] - arr[exp]));
        }
    }
    if (Min > Max) printf("NO SOLUTION\n");//事实证明没有NO的点
    else if (Min > 0) printf("%.0lf", ceil(Min));//使绝对值小嘛，向上取整（想一想，为什么）
    else if (Max < 0) printf("%.0lf",floor(Max));
    else printf("0");
}
/*
  Contest 228
  Problem A : Is your horse on the other hoof
  Author : Rakesh Kumar
  Date: 30/05/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 4;
    std::unordered_map<int, int> d;

    while(n--) {
        int color = 0;
        scanf("%d", &color);
        ++d[color];
    }

    printf("%d\n", 4 - d.size());

    return 0;
}

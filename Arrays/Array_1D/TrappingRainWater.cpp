#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int watertrapped(int* height, int n) {
    if (n <= 2) return 0; 

    int left_max[n], right_max[n];

    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i - 1], height[i]);
    }
    right_max[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = max(right_max[i + 1], height[i]);
    }

    int total_water = 0;
    for (int i = 0; i < n; i++) {
        int water_at_i = min(left_max[i], right_max[i]) - height[i];
        
        if (water_at_i > 0) {
            total_water += water_at_i;
        }
    }
    
    return total_water;
}

int main() {
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    cout << "Total water trapped: " << watertrapped(height, n);
    return 0;
}
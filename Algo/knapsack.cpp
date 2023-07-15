#include <iostream>
#include <cstring>
using namespace std;

// Function to find the maximum value that can be obtained with a capacity of W and n items
int knapsack(int W, int wt[], int val[], int n)
{
    int dp[n+1][W+1];

    // Initialize dp array with 0
    memset(dp, 0, sizeof(dp));

    // Build dp table
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=W; j++)
        {
            // If weight of the ith item is less than or equal to j, then we can either
            // include it in the optimal solution or exclude it
            if(wt[i-1] <= j)
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
            // Else, exclude the ith item from the optimal solution
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    // Return the maximum value that can be obtained
    return dp[n][W];
}

// Driver code
int main()
{
//    int val[] = {60, 100, 120};
//    int wt[] = {10, 20, 30};
    int val[] = {2,3,4,1};
    int wt[] = {3,4,5,6};
    int W = 8;
    int n = sizeof(val)/sizeof(val[0]);
    cout << "Maximum value that can be obtained is: " << knapsack(W, wt, val, n);
    return 0;
}

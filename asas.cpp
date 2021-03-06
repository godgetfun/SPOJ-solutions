#include<stdio.h>
#include<conio.h>
/* Returns the maximum possible sum less than or equal to the gieven sum */
int subArraySum(int arr[], int n, int sum)
{
    /* Initialize curr_sum as value of first element
     and starting point as 0 */
    int curr_sum = arr[0], max_sum = 0, start = 0, i;

    /* Add elements one by one to curr_sum and if the curr_sum exceeds the
     sum, then remove starting element */
    for (i = 1; i <= n; i++)
    {
        // If curr_sum exceeds the sum, then remove the starting elements
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        //keep track of the maximum sum so far.
        if (max_sum < curr_sum)
            max_sum = curr_sum;

        curr_sum = curr_sum + arr[i];
    }

    return max_sum;
}

// Driver program to test above function

int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Max Sum = %d\n", subArraySum(arr, n, m));
    getch();
    return 0;
}

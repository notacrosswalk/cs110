#include <stdio.h>
#include <limits.h>

int max_sum(int a[], int size)
{
    int maximum=INT_MIN;

    for(int i=0; i<size; i++)
    {
        int sum = 0;
        for(int j=i; j<size; j++)
        {
            sum += a[j];
            if(sum > maximum) maximum = sum;
        }
        for(int j=0; j<i; j++)
        {
            sum += a[j];
            if(sum > maximum) maximum = sum;
        }
    }
    return maximum;
}

int main()
{
    int n;
    printf("Enter the array size.\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array elements.\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d\n", max_sum(a, n));
    return 0;
}


/* Kadane's Algorithm

int current_sum = 0;
int max_sum = INT_MIN;
int reset = -1;
for(int i=0; i<n; i++)
{
    current_sum += a[i];
    if(current_sum > max_sum) max_sum = current_sum;
    if(current_sum < 0) 
    {    
        current_sum = 0;
        reset = i;
    }
}
if(reset != -1)
{
    for(int i=0; i<=reset; i++)
    {
        current_sum += a[i];
        if(current_sum > max_sum) max_sum = current_sum;
        if(current_sum < 0)
        {
            current_sum = 0;
            break;
        }    
    }   
}

return max_sum;
*/

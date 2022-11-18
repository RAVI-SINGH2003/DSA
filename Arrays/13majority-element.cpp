// majority elemet - present >N/2 times in an array
// Moore's voting algorithm
//Anuj bhaiya se padh
int majorityElement(int arr[], int n)
{
    int count = 1;
    int ele = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == ele)
        {
            count++;
        }
        else
        {
            count--;

            if (count == 0)
            {
                ele = arr[i];
                count = 1;
            }
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == ele)
            count++;
    }
    if (count > n / 2)
        return ele;
    else
        return -1;
}
// approach 2
// int majorityElement(int a[], int size)
// {
//       map<int,int> m;
//       for(int i=0;i<size;i++)
//       {
//           m[a[i]]++;
//           if(m[a[i]]>size/2)
//           return a[i];
//       }
//       return -1;
// }
//approach 3 o(n^2) solution
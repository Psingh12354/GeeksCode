    struct pair minmax;    
    minmax.max=arr[0];
    minmax.min=arr[0];
    for(int i = 0; i < n; i++)
    {
        if (arr[i] > minmax.max)    
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)    
            minmax.min = arr[i];
    }
    return minmax;

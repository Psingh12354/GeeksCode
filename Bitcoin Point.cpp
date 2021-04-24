class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   int maximum=0;
	       for(int i=0;i<n;i++){
	           int num=arr[i];
	           maximum=max(maximum,num);
	       }
	    return maximum;
	}
};

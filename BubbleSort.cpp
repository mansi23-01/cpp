void bubbleSort(vector<int>& arr, int n)
{   
    bool swapped=false;
    for(int i=1; i<n; i++){  // for round 1 to n-1
        for(int j=0; j<n-i; j++){  // process element till n-i th  index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

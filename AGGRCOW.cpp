#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n,c;
    cin >> n >> c;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    int low=0,high=arr[n-1],mid,result=0;
    while(low<=high){
        mid = (high+low+1)/2;
        int count=1,left_pointer=0;
        for(int i=1;i<n && count <c;i++){
            if(arr[i]-arr[left_pointer] >= mid){
                left_pointer++;
                count++;
            }
            if(count>=c){
                result=count;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    cout << result << endl;

}

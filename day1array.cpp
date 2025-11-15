#include<iostream> 
#include<climits>
int main(){
 int arr[5];
 int n=sizeof(arr)/sizeof(arr[0]); 
int sum=0; 
int max=INT_MIN;
for(int i=0;i<n;i++){
 std::cin>>arr[i];
 } 

for(int i=0;i<n;i++){ 
sum+=arr[i]; 
if(max<arr[i])
{ 
max=arr[i]; 
} 

}
 std::cout<<"max :"<<max;
std::cout<<"\nsum:"<<sum<<"\n"; 
std::cout<<"\nreversed array";
for(int i=n-1;i>=0;i--){ 
std::cout<<arr[i]<<" "; 
}

 }
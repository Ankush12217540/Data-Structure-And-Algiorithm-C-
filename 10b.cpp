//  FIND DUPLICATE
/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/
// code studio
int ans=0;
 for(int i=0; i<arr.size(),i++){
    ans=ans^arr[i];
 }
 for(int i=1; i<arr.size();i++{
    ans=ans^i;
 }
 return ans;
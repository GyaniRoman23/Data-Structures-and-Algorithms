#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {    // Creating a class to have member functions calculating the conditions for duplicate terms
public:
  bool containsDuplicate(vector<int>& nums) // Taking Vector array as an input
  {
    sort(nums.begin(),nums.end()); // Sorting the array to have a side-by-side comparison of the values present
    bool flag = false;
    for(int i =0;i<nums.size()-1;i++)
      {
        if(nums[i] == nums[i+1]) return true; // Comparing the values
      }
    return flag;
  }
};

int main (){
  int n;
  cin >> n; // Taking input of the number of array elements
  int a;
  vector<int> v; // Initializing the vector array

  for (int i=0; i<n; i++)
    {
      cin >> a;
      v.push_back(a); // Insertion of provided Input
    }
  Solution sol; // Creating an object instance of the class Solution

  if (sol.containsDuplicate(v)) // Checking for the return value and accordingly displaying the input
  {
    cout << "Output: true" << endl;
  }
  else
  {
    cout << "Output: false" << endl;
  }

  return 0;
}

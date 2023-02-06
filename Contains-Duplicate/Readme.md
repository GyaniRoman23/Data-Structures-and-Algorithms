## PROBLEM STATEMENT
Given an integer array **nums**, return **true** if any value appears at least twice in the array, and return **false** if every element is distinct.

<br/>

**Example 1:**

```c++
Input: nums = [1,2,3,1]
Output: true
```

**Example 2:**

```c++
Input: nums = [1,2,3,4]
Output: false
```

**Example 3:**

```c++
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
``` 

**Constraints:**

```c++
1 <= nums.length <= 105
-109 <= nums[i] <= 109
```
**Link -** [**Click Here**](https://leetcode.com/problems/contains-duplicate/description/)

---

<br/>

## CODE

```c++
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

```
----

<br/>

### Thought Process Behind The Approach

Since we have a vector array of inputs, a _brute-force_ approach might be to have a _dual-for loop_ comparing each element of the array but there an additional condition should also be given which makes sure that the index of the elements being compared should not be same.

```c++
for (int i = 0; i < nums.size(); i++>)
{
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[i] == nums[j] && i != j)
        {
            return true;
        }
    }
}
```

The only issue of this approach other than having the complexity of ***O(N<sup>2</sup>)*** is that it shows an error of _Exceeding Time Limit_ where usually _65/71_ test cases are passed.

And if we are comparing it in this manner, then we should try **optimising** the code a bit and it can start by thinking of an approach where we may not need the use of a _dual-for loop_.

One approach might be _sorting_ the array and then having a _side-by-side_ comparison. We can implement it in code in this manner - 

```c++
sort(nums.begin(),nums.end());
bool flag = false;
    for(int i =0;i<nums.size()-1;i++)
      {
        if(nums[i] == nums[i+1]) return true;
      }
    return flag;
```

----
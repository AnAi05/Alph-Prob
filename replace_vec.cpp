#include<iostream>
#include<vector>
#include<algorithm>

std::vector < int >
popfront (std::vector < int >&vec)
{
  reverse (vec.begin (), vec.end ());
  vec.pop_back ();
  reverse (vec.begin (), vec.end ());
  return vec;
}

std::vector < int >
solve (std::vector < int >&nums, int val)
{
  int a = 0;
  for (int i = 0; i < nums.size (); ++i)
    {
      if (nums[i] == val)
	{
	  nums[i] = 0;
	  a++;
	}
    }
  sort (nums.begin (), nums.end ());
  while (a--)
    popfront (nums);
  return nums;
}

int main ()
{
  std::vector < int >vec
  {
    {
  1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2}};
  int val = 1;
  std::vector < int >ans;
  ans = solve (vec, val);
for (auto it:ans)
    std::cout << it << " ";
}

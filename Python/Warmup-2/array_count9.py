#Given an array of ints, return the number of 9's in the array.

def array_count9(nums):
  if not len(nums) or (nums[0] != 9 and len(nums) == 1):
    return 0

  if nums[0] == 9:
    return 1
    
  count = 0
  for i in range(len(nums)):
    if nums[i] == 9:
      count += 1
  return count

A, B, C = map(int, input().split())
nums = sorted([A, B, C])
print(nums[2] * 10 + nums[1] + nums[0])

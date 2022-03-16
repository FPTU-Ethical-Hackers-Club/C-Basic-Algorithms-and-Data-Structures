def cal(array:list, index:int, sum:int, trace:list):
    if (sum == 0): return True
    if (index < 0): return False
    if (sum < 0): return False
    if cal(array, index-1, sum, trace):
        return True
    trace.append(array[index])
    if cal(array, index-1, sum-array[index], trace):
        return True
    trace.pop()
    return False

sum = int(input())
array = list(map(int, input().split(" ")))
trace = []
cal(array, len(array)-1, sum, trace)
print(trace)

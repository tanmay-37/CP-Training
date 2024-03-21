def first_occurrence(arr, target):
    low = 0
    high = len(arr) - 1
    result = -1

    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            result = mid
            high = mid - 1
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return result

def last_occurrence(arr, target):
    low = 0
    high = len(arr) - 1
    result = -1

    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            result = mid
            low = mid + 1
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return result

def frequency_of_number(arr, target):
    first = first_occurrence(arr, target)
    last = last_occurrence(arr, target)

    if first != -1 and last != -1:
        return last - first + 1
    else:
        return 0

# Example usage:
arr = [1, 2, 2, 2, 3, 3, 4, 5, 5, 5]
target = 2
print("Frequency of", target, ":", frequency_of_number(arr, target))

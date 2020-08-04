def partition(arr, low, high):
    i = ( low - 1)
    pivot = arr[high]

    for j in range(low,high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
        
    arr[i+1], arr[high] = arr[high], arr[i+1]
    
    return (i+1)

def quicsort(arr, low, high):
    if low < high:
        pi = partition(arr,low,high)
        quicsort(arr,low,pi-1)
        quicsort(arr,pi+1,high)

arr = [16449,164459,18474,3788,3354,-98,0,1]
n = len(arr)
quicsort(arr,0,n-1)
print("Arry sorted:")
for i in range(n):
    print("%d" %arr[i]),

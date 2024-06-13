def find_closest_elements(arr, target, n=5):
    # Calculate absolute differences and store them with corresponding elements
    diff_and_elements = [(abs(x - target), x) for x in arr]
    
    # Sort based on the absolute differences
    diff_and_elements.sort()
    
    # Extract the elements of the smallest differences
    closest_elements = [x for _, x in diff_and_elements[:n]]
    
    return closest_elements

# Example usage
arr = [1, 2, 3, 5, 8, 12, 15, 18, 20]
target = int(input("enter the target"))
ans = find_closest_elements(arr, target)
print("The 5 closest elements to", target, "are:", ans)
sum = 0;
for i in ans:
	sum+=i
a = sum/5
print("average of the closest numbers is:", a)
import os

# Give the directory path
path = "."

# Get contents of the directory
contents = os.listdir(path)

# Print each item
for item in contents:
    print(item)
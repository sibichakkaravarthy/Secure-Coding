import os

file_list = []
for root, dirs, files in os.walk(".", topdown=False):
    for name in files:
        file_list.append(os.path.join(root, name))
    for name in dirs:
        file_list.append(os.path.join(root, name))

with open("file_manifest.txt", "w") as output_file:
    for file in file_list:
        output_file.write(file)
        output_file.write("\n")
import os

path = os.environ['PATH']
if path[:2] == "C:":
    path = path.split(';')
else:
    path = path.split(':')

for folder in path:
    print(folder)
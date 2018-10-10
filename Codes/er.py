import subprocess
result = subprocess.run(['ctags','-x','1.cpp'], stdout=subprocess.PIPE)
print(result.stdout)
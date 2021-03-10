import subprocess

      
def create_files():
    data = subprocess.run(["C:/Windows/system32/WindowsPowerShell/v1.0/powershell.exe", "New-Item", "'testfile A.txt',", "'testfile B.txt',", "'testfile C.txt'"], shell=False)

create_files()
print("Operation complete.  New files have been created.")
import os
import re

current_dir = os.getcwd()  # 获取当前目录
folders = [f for f in os.listdir(current_dir) if os.path.isdir(f)]

for folder in folders:
    # 匹配以数字开头，以"c"或"nc"结尾的文件夹名称
    match = re.match(r'(\d+)(c|nc)$', folder)
    if match:
        folder_name = os.path.basename(folder)
        new_folder_name = folder_name[:-1]  # 去除末尾的 "c"
        os.rename(folder, new_folder_name)
        print(f"Renamed folder {folder} to {new_folder_name}")
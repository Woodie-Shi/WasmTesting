import os
import re

current_dir = os.getcwd()  # 获取当前目录
folders = [f for f in os.listdir(current_dir) if os.path.isdir(f)]

for folder in folders:
    # 提取数字部分
    folder_number = re.findall(r'\d+', folder)
    
    if folder_number:
        new_folder_name = folder_number[0]  # 获取第一个匹配的数字
        os.rename(folder, new_folder_name)
        print(f"Renamed folder {folder} to {new_folder_name}")
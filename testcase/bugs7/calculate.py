import os
import shlex
import subprocess
import re

target_phrases = [
    "IO failure on output stream: No space left on device",
    "section size does not fit in a uint32_t",
    "--stub-unsupported-js",
    "--remove-imports",
    "--stack-check",
    "--remove-memory"
]

current_dir = os.getcwd()
folders = [f for f in os.listdir(current_dir) if os.path.isdir(f)]

phrase_counts = {phrase: 0 for phrase in target_phrases}

for folder in folders:
    folder_path = os.path.join(current_dir, folder)
    error_logs_path = os.path.join(folder_path, "error_logs.txt")

    if os.path.exists(error_logs_path):
        with open(error_logs_path, "r") as file:
            contents = file.read()
            for phrase in target_phrases:
                if phrase in contents:
                    phrase_counts[phrase] += 1
                    # 在文件夹名字中添加后缀 "c"
                    new_folder_name = folder + "c"
                    os.rename(folder, new_folder_name)
                    break

# 输出每种短语的出现次数
for phrase, count in phrase_counts.items():
    print(f"短语 '{phrase}' 出现次数：{count}")

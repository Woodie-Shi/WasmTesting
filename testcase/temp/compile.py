import os

directories = [name for name in os.listdir(".") if os.path.isdir(name)]

for folder_name in directories:
    for optimization_level in range(4):
        error_log_path = os.path.join(folder_name, f"error_log_{optimization_level}.txt")
        
        command = f'clang -O{optimization_level} ./{folder_name}/*.c -o ./{folder_name}/p{folder_name}{optimization_level} 2>&1'
        exit_code = os.system(command)
        
        if exit_code != 0:
            with open(error_log_path, "a") as error_log:
                error_log.write(f'编译文件夹 {folder_name} 时出现以下错误：\n')
                error_log.write(os.popen(command).read())
        elif os.path.exists(error_log_path):
            os.remove(error_log_path)
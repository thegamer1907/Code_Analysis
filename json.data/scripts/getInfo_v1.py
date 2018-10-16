import glob
import lizard
import json
import csv
import os
from os import path

cnt = 0
lenn = 0

for file in glob.glob("*.cpp"):
    lenn = lenn + 1

with open("out.json", 'w') as file_handler:
    file_handler.write("[")
    ct = 1
    for file in glob.glob("*.cpp"):
        cnt = cnt + 1
        i = lizard.analyze_file(file)
        ob = i.__dict__
        #print (i.function_list[0].__dict__)
        d = {}
        d["filename"] = ob['filename']
        d["nloc"] = ob['nloc']
        d["token_count"] = ob['token_count']
        d["function_count"] = len(ob['function_list'])
        c = 0
        mc = 0
        with open(file, 'r') as f:
            for line in f:
                line = line.strip()
                if '#include' in line and '//' not in line and '/*' not in line:
                    #print(line)
                    c+=1
                if '#define' in line and '//' not in line and '/*' not in line:
                    #print(line)
                    mc+=1
        #Take c value here
        d["library_count"] = c
        d["macro_count"] = mc
        c = 0
        fd = []
        ct = 0
        for func in ob['function_list']:
            fn = i.function_list[ct].__dict__
            ct = ct + 1
            fd.append(fn)
        d["function_details"] = fd
        item = json.dumps(d, ensure_ascii=False)
        #print(jsonob)
        if cnt < lenn:
            file_handler.write("{},\n".format(item))
        else:
            file_handler.write("{}\n".format(item))
        print(cnt)
    file_handler.write("]")  

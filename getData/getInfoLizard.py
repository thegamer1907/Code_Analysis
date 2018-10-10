import glob
import lizard
import json
import csv
import os
from os import path

arr = []

for file in glob.glob("*.cpp"):
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
    d["libraary_count"] = c
    d["macro_count"] = mc
    c = 0
    fd = []
    ct = 0
    for func in ob['function_list']:
        fn = i.function_list[ct].__dict__
        ct = ct + 1
        fd.append(fn)
    d["function_details"] = fd
    jsonob = json.dumps(d, ensure_ascii=False)
    #print(jsonob)
    arr.append(jsonob)

print(arr)

with open("out.json", 'w') as file_handler:
    file_handler.write("[")
    ct = 1
    for item in arr:
        if ct < len(arr):
            file_handler.write("{},\n".format(item))
        else:
            file_handler.write("{}\n".format(item))
        ct = ct + 1 
            
    file_handler.write("]")    

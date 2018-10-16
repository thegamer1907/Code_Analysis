import glob
import lizard
import json
import csv
import os
import re
from os import path
from prep_for_headers import prep
from getusefullheaders import find_all_used_header 
from comment_remover import comment_remover

cnt = 0
lenn = 0


for file in glob.glob("*.cpp"):
    lenn = lenn + 1

with open("out.json", 'w') as file_handler:
    file_handler.write("[")
    ct = 1
    for file in glob.glob("*.cpp"):
        cnt = cnt + 1
        print(cnt, file)
        i = lizard.analyze_file(file)
        ob = i.__dict__
        if len(ob['function_list']) == 0:
            continue
        #print (i.function_list[0].__dict__)
        json_data=open('./' + file.partition(".")[0] + '.json')
        data = json.load(json_data)
        json_data.close()
        d = {}
        d["filename"] = ob['filename']
        d["nloc"] = ob['nloc']
        d["token_count"] = ob['token_count']
        d["problem"] = data['problemlink']
        d["solution"] = data['sollink']
        d["exec_time"] = ' '.join(data['exec_time'].split())
        d["memory"] = ' '.join(data['memory'].split())
        d["usertype"] = data["usertype"]
        
        d["function_count"] = len(ob['function_list'])
        c = 0
        mc = 0
        used_headers = 0
        with open(file, 'r') as f:
            #f.sub('//.*?\n|/\*.*?\*/', '', text, flags=re.S)
            #print(f.read())
            f = comment_remover(f.read())

            header_list = prep(f)
            #print(header_list)
            x = find_all_used_header(f,header_list[0],header_list[1])
            #print(x)

            for key, val in x.items():
                if val == 1:
                    used_headers += 1
            
            for line in f.split('\n'):
                #line = line.strip()
                if '#include' in line:
                    #print(line)
                    c+=1
                if '#define' in line:
                    #print(line)
                    mc+=1
        #Take c value here
        d["library_count"] = c
        d["used_headers"] = used_headers
        d["macro_count"] = mc
        c = 0
        fd = []
        ct = 0
        for func in ob['function_list']:
            fn = i.function_list[ct].__dict__
            ct = ct + 1
            fd.append(fn)
        d["function_details"] = fd
        if(len(d['usertype']) == 2):
            d['usertype'] = 'us'
        item = json.dumps(d, ensure_ascii=False)
        #print(jsonob)
        try:
            if cnt < lenn:
                file_handler.write("{},\n".format(item))
            else:
                file_handler.write("{}\n".format(item))
        except:
            print(len(d['usertype']))
            exit(-1)
    file_handler.write("]")  

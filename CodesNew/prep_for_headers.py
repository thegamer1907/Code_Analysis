import re 



def prep(data):
    d = [x.start() for x in re.finditer('#include', data)]
    g = re.findall('#include\s*[<|"](.*)[>|"]',data)
    for i in range(0,len(g)):
        tp = g[i][:]
        g[i] = tp.split('.')[0]
    return [g,d]
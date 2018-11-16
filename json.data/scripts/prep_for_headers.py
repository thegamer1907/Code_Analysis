import re 



def prep(data):
    d = [x.start() for x in re.finditer('#include', data)]
    g = re.findall('#include\s*[<|"](.*)[>|"]',data)
    for i in range(0,len(g)):
        tp = g[i][:]
        g[i] = tp.split('.')[0]
    return [g,d]
	


def prep_for_macros(data):
	d1 = [x.start() for x in re.finditer('#define', data)]
	d2 = [x.start() for x in re.finditer('typedef', data)]
	d = d1[:] + d2[:]
	g = re.findall('#define(\s*.*\s)',data)
	h = re.findall('typedef(\s*.*\s)',data)
	for i in range(0,len(g)):
		g[i] = g[i].strip()
		g[i] = g[i].split(' ')[0]
	for i in range(0,len(h)):
		h[i] = h[i].strip()
		h[i] = h[i].split(' ')[-1].split(';')[0]
	return [g[:] + h[:],d]


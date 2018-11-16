def find_all_used_header(code,headers,positions,version=14):
    '''
    params:
    code : string the complete code
    headers : list of all headers
    positions : starting indices of the headers recived in headers
    version : By default version is 14 - supported version 14/11
    Note : headers and positions are 1D array and len(headers) == len(positions) and also requires g++ compiler to be specified in the system path
    '''
    import subprocess
    import time
    import calendar
    import os
    if len(headers) != len(positions):
        raise Exception('len(headers) != len(positions but expected to be of same length')
    m = {}
    random_ = str(calendar.timegm(time.gmtime()))
    file_name = 'tmp.' + random_ + '.cpp'
    exe_name = 'tmp.' + random_ + '.exe'
    for x,y in zip(headers,positions):
        code_ = code[:y] + '//' + code[y:]
        with open(file_name,'w') as cpp:
            cpp.write(code_)
            
        try:
            out = subprocess.check_output(['g++',file_name,'-o',exe_name])
            m[x] = 0
        except subprocess.CalledProcessError as out:                                                                                         
            m[x] = 1
            
    if os.path.exists(file_name):
        os.remove(file_name)
    
    if os.path.exists(exe_name):
        os.remove(exe_name)

    return m
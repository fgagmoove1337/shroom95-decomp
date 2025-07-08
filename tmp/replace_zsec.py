FILE = "tmp/sec_inp.txt"
FILE_OUT = FILE

import re

CLEAN_R1 = r'\s*(public|protected|private):\s*\n\s+'
CLEAN_R2 = r'uint32_t _ZtlSecureTear.*;\n'

REPLACE_R = r'std::array<(\w*\s*\w+),\s*2>\s*_ZtlSecureTear_(.*);'

# read input
with open(FILE, 'r') as f:
    data = f.read()

# clean
data = re.sub(CLEAN_R1, '\n', data)
data = re.sub(CLEAN_R2, '', data)

# replace
data = re.sub(REPLACE_R, r'_ZTL_SEC_GETSETI(\1, CC, \2)', data)

# filter lines not starting with _ZTL_SEC_GETSETI
lines = data.split('\n')
data = '\n'.join([l for l in lines if l.startswith('_ZTL_SEC_GETSETI')])

# write output
with open(FILE_OUT, 'w') as f:
    f.write(data)

print(data)
FILE = "tmp/guids.txt"
FILE_OUT = "tmp/guids_out.txt"

import regex
import struct

# __GUID_([0-9a-fA-F]+)_([0-9a-fA-F]+)_([0-9a-fA-F]+)_([0-9a-fA-F]+)_([0-9a-fA-F]+)
#static IID __GUID_986515d9_0a0b_4929_8b4f_718682177b92 = _GUID_HEX(0x986515d9, 0x0a0b, 0x4929, 0x927b178286714f8b);



import struct
 
def swap_endianness(num):
    packed_num = struct.pack('>Q', num)
    unpacked_num = struct.unpack('<Q', packed_num)[0]
    return unpacked_num

def main():
    with open(FILE, "r") as f:
        lines = f.readlines()


    with open(FILE_OUT, "w") as f:
        for line in lines:
            match = regex.search(r"__GUID_([0-9a-fA-F]+)_([0-9a-fA-F]+)_([0-9a-fA-F]+)_([0-9a-fA-F]+)_([0-9a-fA-F]+)", line)
            if not match:
                print(f"Error: {line}")
                continue

            x = int(match.group(1), 16)
            s1 = int(match.group(2), 16)
            s2 = int(match.group(3), 16)

            c1 = int(match.group(4), 16)
            c2 = int(match.group(5), 16)

            c = c1 << 48 | c2
            c = swap_endianness(c)

            hx = x.to_bytes(4, "big").hex()
            hs1 = s1.to_bytes(2, "big").hex()
            hs2 = s2.to_bytes(2, "big").hex()
            hc = c.to_bytes(8, "big").hex()

            name = f"__GUID_{match.group(1)}_{match.group(2)}_{match.group(3)}_{match.group(4)}_{match.group(5)}"


            f.write(f"static IID {name} = _IID_HEX(0x{hx}, 0x{hs1}, 0x{hs2}, 0x{hc});\n")
            


main()
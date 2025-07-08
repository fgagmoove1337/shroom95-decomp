import shutil
import os

CLIENT_DIR = "C:\\Users\\home\\Documents\\share\\maplestory"
SYS32 = "C:\\Windows\\System32"
WZ_DST = "data/wz"
CPY_WZ = False
DST = "cmake-build-debug"
#DST = "cmake-build-release"

# create dst
if not os.path.exists(DST):
    os.makedirs(DST)

CLIENT_DLLS = ["d3dx9_31.dll",
               "Shape2D.dll",
               "ZLZ.dll",
               "bdvid32.dll",
               "bz32ex.dll",
               "Canvas.dll",
               "Gr2D_DX9.dll",
               "NameSpace.dll",
               "WzFlashRenderer.dll",
               "Sound_DX8.dll",
               "PCOM.dll",
               "suipre.dll",
               "v3hunt.dll",
               "ResMan.dll",
               "msvcm90.dll",
               "msvcp90.dll",
               "msvcr90.dll",
               "Microsoft.VC90.CRT.manifest"
]
for dll in CLIENT_DLLS:
    shutil.copy2(os.path.join(CLIENT_DIR, dll), os.path.join(DST, dll))
    print("Copied " + dll)

dll = "dinput8.dll"
shutil.copy2(os.path.join(SYS32, dll), os.path.join(DST, dll))

EXTRA_DLLS = ["ijl15.dll", "mss32.dll"]
for dll in EXTRA_DLLS:
    shutil.copy2(os.path.join(CLIENT_DIR, dll), os.path.join(DST, dll))
    print("Copied " + dll)

if CPY_WZ:
    os.mkdir(WZ_DST)
    for wz in os.listdir(CLIENT_DIR):
        if wz.endswith(".wz"):
            shutil.copy2(os.path.join(CLIENT_DIR, wz), os.path.join(WZ_DST, wz))
            print("Copied " + wz)

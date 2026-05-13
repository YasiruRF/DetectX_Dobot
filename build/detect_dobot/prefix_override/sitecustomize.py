import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/dobot/Documents/DetectX/DetectX_Dobot/install/detect_dobot'
